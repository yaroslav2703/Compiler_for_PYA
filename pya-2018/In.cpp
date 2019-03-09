#include "pch.h"
#define CODE_TABLE_SIZE 127
namespace In {
	IN getin(wchar_t infile[], wchar_t logfile[]) {
		Log::LOG log = Log::getlog(logfile);
		std::wifstream ofile;
		ofile.open(infile);
		if (!ofile.is_open())
			throw ERROR_THROW(110);

		IN String = { NULL, NULL, NULL, NULL };
		String.text = new wchar_t[IN_MAX_LEN_TEXT];
		wchar_t str[200];
		int size = 0;
		int q = 0, k = 0, w;
		int CodeTable[CODE_TABLE_SIZE] = IN_CODE_TABLE;
		
		
		for (int i = 0; ofile.getline(str, 200); i++) {
			String.lines++;
			
			for (int j = 0; j < wcslen(str); j++) {
				

				if ( (CodeTable[(int)str[j]] == IN::F ) || ( (int)str[j]<32 ) || ((int)str[j] >126)) {
				
						throw ERROR_THROW_IN(111, i, j);
				}
				if (CodeTable[(int)str[j]] == IN::I) {
					for (int p = j; str[p] != L'\0'; p++) {
						str[p] = str[p + 1];
					}
					String.ignor++;
				}
				
			}
			for (k, w = 0; str[w - 1] != L'\0'; k++, w++) {
				String.text[k] = str[w];
			}
			
			String.text[k - 1] = IN_CODE_ENDL;
		}
		String.text[k - 1] = L' ';
		String.text[k] = L'\0';
		String.size = wcslen(String.text);
		return String;
	}
}