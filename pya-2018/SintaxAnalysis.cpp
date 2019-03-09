#include "pch.h"

namespace Sin {

	void sinanaliz(LeX::LEX &lex_kod) {
		
		
		
		CONS::TableConstr Sintaxis_for_PYA = CONS::Pravila();
		
		poisk_konstruction(lex_kod.TokenStroka, lex_kod.IDtable, Sintaxis_for_PYA, lex_kod.literalTable);
		
		
	}

	void poisk_konstruction(Token_space::Token *token, IT::IdTable	IDtable, CONS::TableConstr sintaxis, IT::CTable CTable) {
		int name1=0;
		int par=0;
		int parv=0;
		int d = -1;
		int m = -1;
		int f = -1;
		IT::IDDATATYPE tape;
		
		for (int p = 0;token[p].Lexema_length !=0; p++) {
			name1 = 0;
			 par = 0;
			 parv = 0;
			
			if (token[p].Lexema == L'\n') {
				continue;
			}
		
				if (token[p].Lexema == L'F') {    // проверка на функцию
				
					
					if (token[p].Lexema_arg == L'M') {  //главная функция
						if (m != -1 ) {
							throw ERROR_THROW(132);
						}
						if (d != -1) {
							throw ERROR_THROW(137);
						}

					      
							for (int h1 = p, h = 0; h < sintaxis.construction[44].dlina; h1++, h++) {

								d = -10;
								if (token[h1].Lexema == sintaxis.construction[44].posl[h].Lexema) {
									
									name1 = sintaxis.construction[44].name;
									continue;

								}
								else {
									name1 = 0;
									break;
								}
							}
							if (name1 == 14) {
								m = 1;
								p += 1;
								continue;
							}
							else {
								throw ERROR_THROW(118);
							}

						
					}
					else {      //обычная функция

						if (d != -1) {
							throw ERROR_THROW(131);
						}
						for (int l = 0; l < 2; l++) {  //поиск нужной конструкции для функции
						
							for (int h1=p, h = 0;h< sintaxis.construction[l].dlina;h1++, h++) { 
								

								if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
									
									if (h == 1) {     //определение типа и типа данных идентификатора
										
										IDtable.table[token[h1].n_in_IT].idtype = IT::F;
										par = token[h1].n_in_IT;
										d = token[h1].n_in_IT;
										if (token[h1-1].Lexema_arg == L'I') {
											IDtable.table[token[h1].n_in_IT].iddatatype = IT::INT;
											
										}
										else if (token[h1-1].Lexema_arg == L'F') {
											IDtable.table[token[h1].n_in_IT].iddatatype = IT::FLT;
											
										}
										else if (token[h1-1].Lexema_arg == L'S') {
											IDtable.table[token[h1].n_in_IT].iddatatype = IT::STR;
											
										}
										
									}
									name1 = sintaxis.construction[l].name;
									continue;

								}
								else {		   
									name1 = 0;
									break;
								} 
							}
							if (name1 == 11 || name1 == 12) {		
								break;
							}
							
						}
					
					
					
				      if ( name1 == 0 )  {         // если неправильно определена функция 		 
				             throw ERROR_THROW(113);
			    	  }
					  else if ( name1 == 11) {     // если у функции нет параметров
						  name1 = 0;
						  IDtable.table[par].quantity_par = 0;
						  par = 0;
						  p += 4;
						  continue;







					  }
					  else if ( name1 == 12) {     // если у функции есть параметры 
						  name1 = 0;
						 
						  while( name1 != 21) { 
							  p += 3;
							 
							  for (int l = 3; l < 5; l++) {  //поиск нужной конструкции для аргументов

								  for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {

									  if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
										  if (h == 1) {     //определение типа и типа данных идентификатора
											 
											  IDtable.table[token[h1].n_in_IT].idtype = IT::P;
											  IDtable.table[token[h1].n_in_IT].fun_index=d;
											  if (token[h1 - 1].Lexema_arg == L'I') {
												  IDtable.table[token[h1].n_in_IT].iddatatype = IT::INT;
												  IDtable.table[par].t_par[IDtable.table[par].quantity_par] = IT::INT;
											  }
											  else if (token[h1 - 1].Lexema_arg == L'F') {
												  IDtable.table[token[h1].n_in_IT].iddatatype = IT::FLT;
												  IDtable.table[par].t_par[IDtable.table[par].quantity_par] = IT::FLT;
											  }
											  else if (token[h1 - 1].Lexema_arg == L'S') {
												  IDtable.table[token[h1].n_in_IT].iddatatype = IT::STR;
												  IDtable.table[par].t_par[IDtable.table[par].quantity_par] = IT::STR;
											  }
											  IDtable.table[par].quantity_par++;
											  
											 
										  }
										  name1 = sintaxis.construction[l].name;
										  continue;

									  }
									  else {
										  name1 = 0;
										  break;
									  }
								  }
								  if (name1 == 21) {
									  break;
								  }

							  }
							  if (name1 != 21 && name1 !=22 ) {
								  throw ERROR_THROW(114);
							  }

							  
							
						  }
						  p += 3;
						  par = 0;
						  continue;

					  }
					


					}
					
				}
				else if(p==0){
					throw ERROR_THROW(112);
				}
				else if(token[p].Lexema == L'R'){ //если обнаружено оканчание функции

						for (int h1 = p, h = 0; h < sintaxis.construction[2].dlina; h1++, h++) {
		
							if (token[h1].Lexema == sintaxis.construction[2].posl[h].Lexema) {
								if (h == 2) {
									if (IDtable.table[token[h1].n_in_IT].idtype == IT::V &&  IDtable.table[token[h1].n_in_IT].fun_index == d) {
										parv++;
										if (d == -1) {
											throw ERROR_THROW(130);
										}
										if (IDtable.table[token[h1].n_in_IT].flag != 1) {
											throw ERROR_THROW(147);
										}
										if (IDtable.table[token[h1].n_in_IT].iddatatype == IDtable.table[d].iddatatype) {
											d = -1;
										}
										else {
											throw ERROR_THROW(129);
										}
									}
									else {
										throw ERROR_THROW(128);
									}


								}
								name1 = sintaxis.construction[2].name;			
								continue;
							}
							else {
								name1 = 0;
								break;
							}
						}
						
						if (name1 == 13) {

							p += 4;
							continue;
						}
						else {
							throw ERROR_THROW(115);
						}
					

					
				}
				else if (token[p].Lexema == L'E') { //если обнаружено оканчание главной функции
				if (m != 1) {
					throw ERROR_THROW(133);
					 }
			      	for (int h1 = p, h = 0; h < sintaxis.construction[45].dlina; h1++, h++) {

				    	if (token[h1].Lexema == sintaxis.construction[45].posl[h].Lexema) {

					    	name1 = sintaxis.construction[45].name;
						    continue;
					    }
					    else {
						   name1 = 0;
						   break;
					    }
			     	}

			    	if (name1 == 15) {
						d = -1;
				    	p += 1;
						m = 2;
					    continue;
			    	}
			    	else {
				    	throw ERROR_THROW(119);
			    	}



				}
				else if (token[p].Lexema == L'V') {  //если объявление переменной
				
					for (int h1 = p, h = 0; h < sintaxis.construction[5].dlina; h1++, h++) {


						if (token[h1].Lexema == sintaxis.construction[5].posl[h].Lexema) {
							if (h == 1) {     //определение типа и типа данных идентификатора
								if (IDtable.table[token[h1].n_in_IT].idtype >0) {  //проверка на наличии такого имени в таблице идентификаторов
									throw ERROR_THROW(134);
								}
								IDtable.table[token[h1].n_in_IT].idtype = IT::V;
								if (d == -1) {
									throw ERROR_THROW(138);
								}
								else {
									IDtable.table[token[h1].n_in_IT].fun_index = d;
								}
								
								
								if (token[h1 - 1].Lexema_arg == L'I') {
									IDtable.table[token[h1].n_in_IT].iddatatype = IT::INT;
								}
								else if (token[h1 - 1].Lexema_arg == L'F') {
									IDtable.table[token[h1].n_in_IT].iddatatype = IT::FLT;
								}
								else if (token[h1 - 1].Lexema_arg == L'S') {
									IDtable.table[token[h1].n_in_IT].iddatatype = IT::STR;
								}

							}
							name1 = sintaxis.construction[5].name;
							continue;

						}
						else {
							name1 = 0;
							break;
						}
					}
					if (name1 == 31) {

						p += 2;
						continue;
					}
					else {
						throw ERROR_THROW(116);
					}


                }
				else if (token[p+2].Lexema == L'I' && token[p+3].Lexema == L'(') { // если вызов функции

				 for (int l = 40; l < 42; l++) {  //поиск нужной конструкции для вызова функции

					for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {

						
						if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
							if (h == 0) {
								
								if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].fun_index==d) {
									f = token[h1].n_in_IT;
								}
								else {
									throw ERROR_THROW(139);
								}
							}
							if (h == 2) { 
  
								if (IDtable.table[token[h1].n_in_IT].idtype == IT::F) {
									par = token[h1].n_in_IT;
							    }
								else {
									throw ERROR_THROW(124);
								}
								if (IDtable.table[token[h1].n_in_IT].iddatatype != IDtable.table[f].iddatatype) {
									throw ERROR_THROW(140);
								}

							}
							name1 = sintaxis.construction[l].name;
							continue;

						}
						else {
							name1 = 0;
							break;
						}
					}
					if (name1 == 91 || name1 == 92) {
						break;
					}

			     }

			    	if (name1 == 0) {         		 
				    	throw ERROR_THROW(121);
			    	}
			    	else if (name1 == 91) {     // если у вызова функции нет параметров
					  name1 = 0;
					 if (IDtable.table[par].quantity_par == 0) {
						
					 }
					 else {
						throw ERROR_THROW(125);
					 }
					  par = 0;
					  p += 5;
					  continue;
                 	}
				    else if (name1 == 92) {     // если у вызова функции есть параметры 
					 name1 = 0;
					 p += 2;
					while (name1 != 93) {
						p += 2;
						for (int l = 42; l < 44; l++) {  //поиск нужной конструкции для аргументов вызова функции

							for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {

								if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
									if (h == 0) {
										if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].fun_index==d) {
											parv++;
											if (IDtable.table[token[h1].n_in_IT].iddatatype == IDtable.table[par].t_par[parv-1]) {

											}
											else {
												throw ERROR_THROW(127);
											}
										}
										else {
											throw ERROR_THROW(126);
										}
										if (IDtable.table[token[h1].n_in_IT].flag != 1) {
											throw ERROR_THROW(148);
										}


									}
									name1 = sintaxis.construction[l].name;
									continue;

								}
								else {
									name1 = 0;
									break;
								}
							}
							if (name1 == 93) {
								break;
							}

						}
						if (name1 != 93 && name1 != 94) {
							throw ERROR_THROW(122);
						}



					}
					if (IDtable.table[par].quantity_par == parv) {

					}
					else {
						throw ERROR_THROW(125);
					}
					p += 2;
					par = 0;
					parv = 0;
					continue;

				    }




                }
				else if (token[p + 2].Lexema == L'B' && token[p + 3].Lexema == L'(') { // если вызов библиотеки

				for (int l = 52; l < 54; l++) {  //поиск нужной конструкции 

					for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {


						if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {

							if (h == 0) {     //определение типа и типа данных идентификатора

								if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].fun_index == d ) {
									IDtable.table[token[h1].n_in_IT].flag = 1;
								}
								else {
									throw ERROR_THROW(139);
								}
							

							}
							name1 = sintaxis.construction[l].name;
							continue;

						}
						else {
							name1 = 0;
							break;
						}
					}
					if (name1 == 111) {
						p += 8;
						break;
					}
					if (name1 == 112) {
						p += 6;
						break;
					}

				}

				if (name1 == 111 || name1 == 112) {
					continue;
				}
				else {
					throw ERROR_THROW(151);
				}

				}
				else if (token[p].Lexema == L'W') { // если вывод

				for (int l = 46; l < 48; l++) {  //поиск нужной конструкции для вывода

					for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {


						if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
							if (h == 2 && token[h1].Lexema == LEX_ID) {
								if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].fun_index == d) {

									if (IDtable.table[token[h1].n_in_IT].flag != 1) {
										throw ERROR_THROW(149);
									}
								}
								else {
									throw ERROR_THROW(141);
								}
							}
							
							name1 = sintaxis.construction[l].name;
							continue;

						}
						else {
							name1 = 0;
							break;
						}
					}
					if (name1 == 101 || name1 == 102) {
						break;
					}

				}

				if (name1 == 0) {
					throw ERROR_THROW(142);
				}
				else {     
					name1 = 0;
					p += 1;
					while (name1 != 102 && name1 != 103) {
						p += 2;
						for (int l = 48; l < 52; l++) {  //поиск нужной конструкции для аргументов вызова функции

							for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {

								if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
									if (h == 1 && token[h1].Lexema== LEX_ID) {
										if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].fun_index == d) {
											if (IDtable.table[token[h1].n_in_IT].flag != 1) {
												throw ERROR_THROW(149);
											}
										}
										else {
											throw ERROR_THROW(143);
										}


									}
									name1 = sintaxis.construction[l].name;
									continue;

								}
								else {
									name1 = 0;
									break;
								}
							}
							if (name1 == 102 || name1 == 103) {
								break;
							}

						}
						if (name1 != 104 && name1 != 105 && name1 != 102 && name1 != 103 ) {
							throw ERROR_THROW(144);
						}



					}
					
					p += 3;
					par = 0;
					parv = 0;
					continue;

				}




				}
				else if (token[p].Lexema == L'I') {  //если операция с переменными

				    for (int l = 6; l < 40; l++) {  //поиск нужной конструкции операции

				    	for (int h1 = p, h = 0; h < sintaxis.construction[l].dlina; h1++, h++) {


					    	if (token[h1].Lexema == sintaxis.construction[l].posl[h].Lexema) {
								if ((h == 0 || h==2 || h==3 || h==4) && token[h1].Lexema == LEX_ID){
									if ((IDtable.table[token[h1].n_in_IT].idtype == IT::V || IDtable.table[token[h1].n_in_IT].idtype == IT::P ) && IDtable.table[token[h1].n_in_IT].fun_index == d) {
										if (h == 0) {
											IDtable.table[token[h1].n_in_IT].flag = 1;
											tape = IDtable.table[token[h1].n_in_IT].iddatatype;
										}
										else {
											if (IDtable.table[token[h1].n_in_IT].idtype == IT::V && IDtable.table[token[h1].n_in_IT].flag != 1) {
												throw ERROR_THROW(146);
											}
											if (IDtable.table[token[h1].n_in_IT].iddatatype != tape) {
												throw ERROR_THROW(108);
											}
										}
										

									}
									else {
										throw ERROR_THROW(145);
									}
								}
								if ((h == 2 || h == 3 || h == 4) && token[h1].Lexema == LEX_LITERALCI[0]) {
									wchar_t pp;
									
									if (tape == 1) {
										pp = L'I';
									}
									else if (tape == 2) {
										pp = L'S';
									}
									else if (tape == 3) {
										pp = L'F';
									}
									if (token[h1].Lexema_arg != pp) {
										throw ERROR_THROW(108);
									}
								}

						    	name1 = sintaxis.construction[l].name;
						    	continue;

					     	}
					    	else {
						    	name1 = 0;
						    	break;
					    	}
					    }
					    if ( (name1 <=74) && (name1 >= 41)) {
						    break;
					    }

			    	}
					if ((name1 <= 62) && (name1 > 42)) {
						p += 5;
						continue;
					}
					if ((name1 <= 74) && (name1 > 64)) {
						p += 4;
						continue;
					}
					if ((name1 == 63) || (name1 == 64)) {
						p += 3;
						continue;
					}
					else if(name1 == 41 || name1 == 42){
						p += 3;
						continue;
					}
				    else {
					  throw ERROR_THROW(120);
                    }


				}
				else { // если конструкция не найдена
				throw ERROR_THROW(123);
                }

			
			
		}
		if ((d != -1) || (m==1)) { // если есть не закрытая функция
			throw ERROR_THROW(131);
		}
		


	}
}