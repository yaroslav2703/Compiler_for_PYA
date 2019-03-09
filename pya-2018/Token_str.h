#pragma once

#define TOKEN_MAXSIZE   65536// ������������ ������ ������ �������
#define TOKEN_VALUA__MAXSIZE  1000    //������������ ������ �������� ������
#define	LT_TI_NULLDX	0xffffffff	// ������� � ������� ������
#define LEX_FUNI        L"FI"       // ������� � ����� int
#define LEX_FUNF        L"FF"        // ������� � ����� float
#define LEX_FUNS        L"FS"       // ������� � ����� string
#define LEX_MAIN        L"FM"       // ������� �������
#define LEX_VARI        L"VI"        // ���������� � ����� int
#define LEX_VARF        L"VF"       // ���������� � ����� float
#define LEX_VARS        L"VS"       // ���������� � ����� string
#define LEX_PARI        L"AI"       // �������� � ����� int
#define LEX_PARF        L"AF"       // �������� � ����� float
#define LEX_PARS        L"AS"        // �������� � ����� string
#define LEX_RETURN      L"R "        // ����� �� �������
#define LEX_END         L'E'          // ��������� ������� �������
#define LEX_ID          L'I'       // �������������
#define LEX_SHOW        L'W'        // ����� 
#define LEX_STRLEN      L"BRCF"      // ����������� ����������: strlen,sconcat,fractpart 
#define	LEX_LEFTTHESIS	L'('			// (
#define	LEX_RIGHTTHESIS	L')'			// )
#define	LEX_SEPARATOR	L';'			// ;
#define	LEX_COMMA		L','			// ,
#define	LEX_LEFTBRACE	L'{'			// {
#define	LEX_RIGHTBRACE	L'}'			// }
#define LEX_LITERALI    L'i'           // ������������� �������(����)
#define LEX_LITERALF    L'f'          // ������������ �������(����)
#define LEX_LITERALS    L's'          // ��������� �������(����)
#define LEX_LITERALCI   L"CI"          // ������������� �������
#define LEX_LITERALCF   L"CF"          // ������������ �������
#define LEX_LITERALCS   L"CS"         // ��������� �������
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
