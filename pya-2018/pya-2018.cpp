

#include "pch.h"

using namespace std;

 int _tmain(int argc, _TCHAR* argv[]) {

	//pya-2018.exe -in:in.txt , -log:log.txt , -out:out.txt
	Log::LOG log = Log::INITLOG;
	try
	{
		
		Parm::Parm parm = Parm::Getparm(argc, argv);                // Получение аргументов	
		log = Log::getlog(parm.log);	                            // Создание log		
		Log::LOG out = Log::INITLOG;									// Инициализация log файла	
		out = Log::getlog(parm.out);									// Создание out файла
		Log::writeLog(log);												// Запись протокола		
		Log::writeParm(log, parm);										// Запись параметров	
		In::IN in = In::getin(parm.in, parm.out);						// Получение входящих параметров
		Log::writeIn(log, in);											// Запись входящих параметров	
		LeX::LEX tables = LeX::INITLEX(in);				     	     // Получение таблицы лексем
		writeToken_str(log, tables.TokenStroka);                //Вывод в log последовательность токенов
		Sin::sinanaliz(tables);                                  // Проверка синтаксиса, идентификаторов и других языков правил
		writeIT(log, tables.IDtable);                            //Вывод в log таблицу идентификаторов
		Generation(tables.TokenStroka, tables.IDtable, tables.literalTable); // генерация кода на JS
	
		

		Log::Close(log);												// Закрытие log файла		
		Log::Close(out);												// Закрытие out файла
	}
	catch (Error::ERROR e)
	{
		Log::writeError(log, e);
	}



	return 0;
}


