#pragma once
#define PARM_MAX_SIZE 300
#define PARM_IN  L"-in:"
#define PARM_LOG L"-log:"
#define PARM_OUT L"-out:"
#define RESOLUTION  L".txt"


namespace Parm {

	struct Parm {

		wchar_t in[PARM_MAX_SIZE];
		wchar_t log[PARM_MAX_SIZE];
		wchar_t out[PARM_MAX_SIZE];

	};

	Parm Getparm(int argc, _TCHAR* argv[]);

}