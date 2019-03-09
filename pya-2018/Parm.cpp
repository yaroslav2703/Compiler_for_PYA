#include "pch.h"


namespace Parm {

	Parm Getparm(int argc, _TCHAR* argv[]) {

		Parm MyPARM = { L"", L"", L"" };

		for (int i = 1; i < argc; i++) {

			if (wcslen(argv[i]) > PARM_MAX_SIZE) {
				throw ERROR_THROW(104);
			}

			if (wcsncmp(argv[i], PARM_IN, wcslen(PARM_IN)) == 0) {
				wcscpy(MyPARM.in, argv[i] + wcslen(PARM_IN));
			}
			else if (wcsncmp(argv[i], PARM_LOG, wcslen(PARM_LOG)) == 0) {
				wcscpy(MyPARM.log, argv[i] + wcslen(PARM_LOG));
			}
			else if (wcsncmp(argv[i], PARM_OUT, wcslen(PARM_OUT)) == 0) {
				wcscpy(MyPARM.out, argv[i] + wcslen(PARM_OUT));
			}

		}
	
		if (MyPARM.in[0] == NULL ) {

	    	throw ERROR_THROW(100);
	    }

		if (MyPARM.log[0] == NULL) {

			throw ERROR_THROW(101);
		}
		
		if (MyPARM.out[0] == NULL) {

			throw ERROR_THROW(102);
		}

		if (!wcsstr(MyPARM.in, RESOLUTION)) {
			throw ERROR_THROW(105);
		}
		if (!wcsstr(MyPARM.log, RESOLUTION)) {
			throw ERROR_THROW(106);
		}
		if (!wcsstr(MyPARM.out, RESOLUTION)) {
			throw ERROR_THROW(107);
		}


		return MyPARM;




	}

}