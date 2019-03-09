#include "pch.h"
#include "Graphs.h"


namespace LeX {

	Graph graph[] =
	{
		{ LEX_ID, FST::FST(GRAPH_ID) },
		{ LEX_LITERALI, FST::FST(GRAPH_INT_LITERAL) },
		{ LEX_LITERALS, FST::FST(GRAPH_STRING_LITERAL) }
		
	};
	
    LEX INITLEX(In::IN isx) {
		LEX newLEX;
		
		newLEX.IDtable = IT::Create(TI_MAXSIZE-1);
		newLEX.TokenStroka = new Token_space::Token[TOKEN_MAXSIZE-1];
		newLEX.literalTable.literals = new IT::Literal[10000];

		

		int sr = 0;
		
		
			for (int j=0,i = 0; i < wcslen(isx.text); i++) {
				if (isx.text[i] == L' ') {
					continue;
				}
					newLEX.TokenStroka[j]= Prohod(isx, i);
					

					if (newLEX.TokenStroka[j].Lexema == L' ') {
						
					
						for (int k = 0; k < 4; k++)
						{
							FST::FST fstex(new wchar_t[newLEX.TokenStroka[j].Lexema_length] , graph[k].graph);
							 for (int y = 0; y < newLEX.TokenStroka[j].Lexema_length; y++) {
								 fstex.string[y] = newLEX.TokenStroka[j].valua[y];
							 }
							
							
							
							if (FST::execute(fstex, newLEX.TokenStroka[j].Lexema_length))
							{
								
								
								switch (graph[k].Lexema)
								{
								
								
								case LEX_ID:
								{
									if (newLEX.TokenStroka[j].Lexema_length > ID_MAXSIZE) {
										throw ERROR_THROW(193);
									}
									IT::Entry data;
									data.dlina_id = newLEX.TokenStroka[j].Lexema_length;
									for (int a = 0; a < newLEX.TokenStroka[j].Lexema_length; a++) {
										data.id[a] = newLEX.TokenStroka[j].valua[a];
									}
									int kl = 0;
									int kl2 = -1;
									for (int m = 0; m < newLEX.IDtable.size; m++) {
										for (int b = 0; b < data.dlina_id; b++) {
											if (data.id[b] == newLEX.IDtable.table[m].id[b] ) {
												kl++;
												continue;

											}
											else {
												kl = 0;
												break;
											}
										}
										if (kl == data.dlina_id) {
											kl2 = m;
											break;
										}
										
									}
									if (kl == data.dlina_id) {
									
										newLEX.TokenStroka[j].n_in_IT = newLEX.IDtable.table[kl2].namber;
										newLEX.TokenStroka[j].Lexema = LEX_ID;
										
										break;
									}
									else {
										
										data.namber = newLEX.IDtable.size;
										newLEX.TokenStroka[j].n_in_IT = newLEX.IDtable.size;

										newLEX.TokenStroka[j].Lexema = LEX_ID;
										IT::Add(newLEX.IDtable, data);
										
										break;
									}
								}
								case LEX_LITERALS:
								{
									
									newLEX.TokenStroka[j].Lexema = LEX_LITERALCS[0];
									newLEX.TokenStroka[j].Lexema_arg = LEX_LITERALCS[1];
									newLEX.literalTable.literals[newLEX.literalTable.size].dlina_lit = newLEX.TokenStroka[j].Lexema_length;
									for (int ng = 0; ng < newLEX.TokenStroka[j].Lexema_length; ng++) {
										newLEX.literalTable.literals[newLEX.literalTable.size].id[ng] = newLEX.TokenStroka[j].valua[ng];
										
									}
									newLEX.literalTable.literals[newLEX.literalTable.size].iddatatype = IT::STR;
									newLEX.literalTable.size++;
									break;
								}

								case LEX_LITERALI:
								{for (int l = 0; l < newLEX.TokenStroka[j].Lexema_length; l++) {
									if (newLEX.TokenStroka[j].valua[l]== L'.' && l== newLEX.TokenStroka[j].Lexema_length-2) {
										goto LEXLITERALF;
									}
								}
									
									
									newLEX.TokenStroka[j].Lexema = LEX_LITERALCI[0];
									newLEX.TokenStroka[j].Lexema_arg = LEX_LITERALCI[1];
									newLEX.literalTable.literals[newLEX.literalTable.size].dlina_lit = newLEX.TokenStroka[j].Lexema_length;
									for (int ng = 0; ng < newLEX.TokenStroka[j].Lexema_length; ng++) {
										newLEX.literalTable.literals[newLEX.literalTable.size].id[ng] = newLEX.TokenStroka[j].valua[ng];
										
									}
									newLEX.literalTable.literals[newLEX.literalTable.size].iddatatype = IT::INT;
									newLEX.literalTable.size++;
									break;
								}		
 
								case LEX_LITERALF:
								{
									LEXLITERALF:

									newLEX.TokenStroka[j].Lexema = LEX_LITERALCF[0];
									newLEX.TokenStroka[j].Lexema_arg = LEX_LITERALCF[1];
									newLEX.literalTable.literals[newLEX.literalTable.size].dlina_lit = newLEX.TokenStroka[j].Lexema_length;
									for (int ng = 0; ng < newLEX.TokenStroka[j].Lexema_length; ng++) {
										newLEX.literalTable.literals[newLEX.literalTable.size].id[ng] = newLEX.TokenStroka[j].valua[ng];
									
									}
									newLEX.literalTable.literals[newLEX.literalTable.size].iddatatype = IT::FLT;
									newLEX.literalTable.size++;
									break;
								}
								
								}
								break;
							}
							else if (k==3) {
								throw ERROR_THROW(109);
							}
						}
						
						
					
					}
						i = i + newLEX.TokenStroka[j].Lexema_length-1;
						j++;
						
			}
		
		return newLEX;
	}

}
