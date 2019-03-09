#include "pch.h"
#include "Token_str.h"

namespace Log {

	LOG getlog(wchar_t  logfile[]) {
		LOG logFile;
		logFile.stream = new std::wofstream;
		(*logFile.stream).open(logfile);
		if (!(*logFile.stream).is_open()) {
			throw ERROR_THROW(110);
		}
		wcscpy(logFile.logfile, logfile);
		return logFile;
	}

	void writeLog(const LOG &log) {
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		*log.stream << L"\n----- Report ------ Date: "
			<< asctime(timeinfo) ;
	}

	void writeError(const LOG &log, const Error::ERROR &e) {
		
		if (log.stream == NULL)
		{
			std::wcout << L"\nError " << e.id << L": " << e.message
			<< std::endl << std::endl;
		}
		else {
			if (e.inext.col == -1 || e.inext.line == -1) {
				
				*log.stream << L"\nError " << e.id << L": " << e.message
				 << std::endl << std::endl;
			}
			else {
				*log.stream << L"\nError " << e.id << L": " << e.message
					<< L", line " << e.inext.line << L", position "
					<< e.inext.col << std::endl << std::endl;
			}
		
		}
	}

	void writeParm(const LOG &log, const Parm::Parm &parm)
	{
		wchar_t inTxt[PARM_MAX_SIZE];
		wchar_t outTxt[PARM_MAX_SIZE];
		wchar_t logTxt[PARM_MAX_SIZE];
		wcscpy(inTxt,parm.in);
		wcscpy(outTxt, parm.out);
		wcscpy(logTxt, parm.log);
		*log.stream << L"\n----- Options --------";
		*log.stream << L"\n-in: " << inTxt << L"\n-out: " << outTxt << L"\n-log: " << logTxt;

	}

	void writeIn(const LOG &log, const In::IN &in) {
		*log.stream << "\n---- Исходные данные ------";
		*log.stream
			<< "\nКоличество символов: " << L"  " << in.size
			<< "\nПроигнорировано	   :" << L"  " << in.ignor
			<< "\nКоличество строк   :" << L"  " << in.lines;
	}

	void writeToken_str(const LOG &log, const Token_space::Token *token) {
		*log.stream << L"\n ---- Token sequence ----\n";
		for (int y = 0; token[y].Lexema_length != 0; y++) {
			
			if (token[y].Lexema== '\n') {
				*log.stream << token[y].Lexema;
			}
			else if (token[y].n_in_IT == -1) {
				
				*log.stream << L"(" << token[y].Lexema;
				if (token[y].Lexema_arg != L' ') {
					*log.stream << token[y].Lexema_arg;
				}
				*log.stream<< L")";
			}
			else{
				
				*log.stream << L"(" << token[y].Lexema <<";"<< token[y].n_in_IT<<L")";
			}
			
		}
		
	}

	void writeIT(const LOG &log, const IT::IdTable &tables) {
		
		*log.stream << L"\n ---- Identifier table ----  \n";
		*log.stream << L"N        Name         id type         value type \n";
		*log.stream << " \n";
		
		for (int as = 0; as < tables.size; as++) {
			*log.stream << as << L"\t";
			for (int p = 0; p < tables.table[as].dlina_id; p++) {
				*log.stream << tables.table[as].id[p];
			}
			*log.stream << L"\t" << "      ";
			if (tables.table[as].idtype == 1) {
				*log.stream << L"function";
			}
			else if (tables.table[as].idtype == 2) {
				*log.stream << L"parameter";
			}
			else if (tables.table[as].idtype == 3) {
				*log.stream << L"variable";
			}
			
			*log.stream << L"\t" << "      ";
			if (tables.table[as].iddatatype == 1) {
				*log.stream << L"integer";
			}
			else if (tables.table[as].iddatatype == 2) {
				*log.stream << L"string" ;
			}
			else if (tables.table[as].iddatatype == 3) {
				*log.stream << L"float";
			}
			
			*log.stream << L"\n";
		}
		
	}


	void Close(const LOG &log)
	{
		(*log.stream).close();
	};

}
