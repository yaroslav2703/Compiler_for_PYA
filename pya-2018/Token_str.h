#pragma once

#define TOKEN_MAXSIZE   65536// Максимальный размер списка токенов
#define TOKEN_VALUA__MAXSIZE  1000    //Максимальный размер значения токена
#define	LT_TI_NULLDX	0xffffffff	// Пустота в таблице лексем
#define LEX_FUNI        L"FI"       // Функция с типом int
#define LEX_FUNF        L"FF"        // Функция с типом float
#define LEX_FUNS        L"FS"       // Функция с типом string
#define LEX_MAIN        L"FM"       // главная функция
#define LEX_VARI        L"VI"        // Переменная с типом int
#define LEX_VARF        L"VF"       // Переменная с типом float
#define LEX_VARS        L"VS"       // Переменная с типом string
#define LEX_PARI        L"AI"       // Параметр с типом int
#define LEX_PARF        L"AF"       // Параметр с типом float
#define LEX_PARS        L"AS"        // Параметр с типом string
#define LEX_RETURN      L"R "        // Выход из функции
#define LEX_END         L'E'          // Оканчание главной функции
#define LEX_ID          L'I'       // Идентификатор
#define LEX_SHOW        L'W'        // Вывод 
#define LEX_STRLEN      L"BRCF"      // Стандартные библиотеки: strlen,sconcat,fractpart 
#define	LEX_LEFTTHESIS	L'('			// (
#define	LEX_RIGHTTHESIS	L')'			// )
#define	LEX_SEPARATOR	L';'			// ;
#define	LEX_COMMA		L','			// ,
#define	LEX_LEFTBRACE	L'{'			// {
#define	LEX_RIGHTBRACE	L'}'			// }
#define LEX_LITERALI    L'i'           // Целочисленный литерал(граф)
#define LEX_LITERALF    L'f'          // Вещественный литерал(граф)
#define LEX_LITERALS    L's'          // Строковый литерал(граф)
#define LEX_LITERALCI   L"CI"          // Целочисленный литерал
#define LEX_LITERALCF   L"CF"          // Вещественный литерал
#define LEX_LITERALCS   L"CS"         // Строковый литерал
#define	LEX_EQUAL		L'='			// =
#define	LEX_PLUS		L'+'			// +
#define	LEX_MINUS		L'-'			// -
#define	LEX_STAR		L'*'			// *
#define	LEX_DIVISION	L'/'			// /
#define	LEX_BALANCE 	L'%'			// %
#define LEX_N           L'\n'           // \n
   


namespace Token_space
{
	

	struct Token {
		
		wchar_t Lexema =  L' ';
		wchar_t Lexema_arg = L' ';
		wchar_t *valua = new wchar_t[TOKEN_VALUA__MAXSIZE];
		int n_in_IT = -1;
		wchar_t  valua_of_lib = L' ';
		int Lexema_length=0;
	}; 

	
}
