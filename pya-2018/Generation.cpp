#include "pch.h"



wofstream outfile(L"Generation.html");
bool isFunction = false;
int idFunc;
int buf;


void Generation(Token_space::Token *token, IT::IdTable	IDtable, IT::CTable	Ctable)
{
	
	int u = 0;
	outfile << Header;
	for (int p = 0; token[p].Lexema_length != 0; p++) {
	
		switch (token[p].Lexema)
		{
		case  LEX_N:
		{
			outfile << L"\n ";
			break;
		}
		case  LEX_FUNI[0]:
		{   if (token[p].Lexema_arg != L'M') {
				outfile << L"function ";
			}
			
			break;
		}
		case  LEX_VARI[0]:
		{
			outfile << L"var ";
			break;
		}
		case  LEX_SHOW:
		{   outfile << L"document.write(\"<br>\"); ";
			outfile << L"document.write";
			break;
		}
		case  LEX_ID:
		{
			
			
			for (int k = 0; k < IDtable.table[token[p].n_in_IT].dlina_id; k++) {
				outfile << IDtable.table[token[p].n_in_IT].id[k];
			}
		
			break;
		}
		case LEX_STRLEN[0]:
		{
		
			if (token[p].Lexema_arg == LEX_STRLEN[1]) {
				
				for (int k = 0; k < token[p+2].Lexema_length; k++) {
					outfile << token[p + 2].valua[k];
					
				}
				
				if (IDtable.table[token[p + 2].n_in_IT].iddatatype != IT::STR) {
					throw ERROR_THROW(150);
				}
				
				outfile << L".length";
				
				p += 3;
				
				break;
			}
			else if (token[p].Lexema_arg == LEX_STRLEN[2]) {
				
				for (int k = 0; k < token[p + 2].Lexema_length; k++) {
					outfile << token[p + 2].valua[k];
				
				}
				outfile << LEX_PLUS;

				for (int k = 0; k < token[p + 4].Lexema_length; k++) {
					outfile << token[p + 4].valua[k];
					
				}

				if (IDtable.table[token[p + 2].n_in_IT].iddatatype != IT::STR && IDtable.table[token[p + 4].n_in_IT].iddatatype != IT::STR) {
					throw ERROR_THROW(150);
				}
				p += 5;
				break;
			}
			else if (token[p].Lexema_arg == LEX_STRLEN[3]) {
				
				outfile << L"parseInt( ";
				for (int k = 0; k < token[p + 2].Lexema_length; k++) {
					outfile << token[p + 2].valua[k];

				}
				outfile << L" )";
				if (IDtable.table[token[p + 2].n_in_IT].iddatatype != IT::FLT) {
					throw ERROR_THROW(150);
				}
				p += 3;
				break;
			}
			
		}
		case   LEX_LITERALCI[0]:
		{ 
	
			for (int k = 0; k < Ctable.literals[u].dlina_lit; k++) {
				outfile << Ctable.literals[u].id[k];
			}
			
			u++;

			break;
		}
		case  LEX_RETURN[0]:
		{
			outfile << L"return ";
			break;
		}
		case  LEX_LEFTTHESIS:
		{
			if (token[p - 1].Lexema != L'R') {
			outfile << L"(";
	     	}
			
			break;
		}
		case  LEX_RIGHTTHESIS:
		{
			if (token[p - 3].Lexema != L'R' ) {
				outfile << L")";
			}
			else {
				outfile << L";";
			}
			break;
		}
		case  LEX_SEPARATOR:
		{
			outfile << L";";
			break;
		}
		case  	LEX_COMMA:
		{
			outfile << L",";
			break;
		}
		case  LEX_LEFTBRACE:
		{
			if (token[p - 1].Lexema_arg != L'M' ) {
			outfile << L"{";
	    	}
			
			break;
		}
		case  LEX_RIGHTBRACE:
		{  
			if (token[p - 1].Lexema != L'E') {
				outfile << L"}";
			}
		
			break;
		}
		case  LEX_EQUAL:
		{
			outfile << L"=";
			break;
		}
		case  	LEX_PLUS:
		{
			outfile << L"+";
			break;
		}
		case  LEX_MINUS:
		{
			outfile << L"-";
			break;
		}
		case  LEX_STAR:
		{
			outfile << L"*";
			break;
		}
		case  LEX_DIVISION:
		{
			outfile << L"/";
			break;
		}
		case  LEX_BALANCE:
		{
			outfile << L"%";
			break;
		}
		
		    
		
		
		
		
		
		
		}
	}
	
    outfile << Footer;
	outfile.close();
}