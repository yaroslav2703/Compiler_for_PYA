#pragma once
#include "In.h"
#include "Token_str.h"
#include "IT.h"




using namespace std;


namespace Log
{
	struct LOG
	{
		wchar_t logfile[PARM_MAX_SIZE];
		wofstream *stream;

	};

	static const LOG INITLOG = { L"", NULL };
	LOG getlog(wchar_t logfile[]);
	void writeLog(const LOG &log);
	void writeError(const LOG &log, const Error::ERROR &error);
	void writeParm(const LOG &log, const Parm::Parm &parm);
	void writeIn(const LOG &log, const In::IN &in);
	void writeToken_str(const LOG &log, const Token_space::Token *token);
	void writeIT(const LOG &log, const IT::IdTable &table);
	void Close(const LOG &log);
}
