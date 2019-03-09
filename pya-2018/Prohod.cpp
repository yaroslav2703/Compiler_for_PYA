#include "pch.h"


namespace LeX {

	

	Token_space::Token Prohod(In::IN isx, int i) {
		Token_space::Token vrem;
		
		if (isx.text[i] == L'F') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'U') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'N') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'I' ) {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_FUNI[0];
							vrem.Lexema_arg = LEX_FUNI[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'F') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_FUNF[0];
							vrem.Lexema_arg = LEX_FUNF[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'S') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_FUNS[0];
							vrem.Lexema_arg = LEX_FUNS[1];
							return vrem;
						}
					}
				}
			}
		}
		 if (isx.text[i] == L'M') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'A') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'I') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'N') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ' || isx.text[i + 4] == L'{') {
							vrem.Lexema = LEX_MAIN[0];
							vrem.Lexema_arg = LEX_MAIN[1];
							return vrem;
						}
					}
					
				}
			}
		}
		 if (isx.text[i] == L'E') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'N') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'D') {
					vrem.Lexema_length++;		
					if (isx.text[i + 3] == L' ' || isx.text[i + 3] == L'}') {
						vrem.Lexema = LEX_END;			
						return vrem;
					}			
				}
			}
		}
		 if (isx.text[i] == L'r') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'e') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L't') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'u') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L'r') {
							vrem.Lexema_length++;
							if (isx.text[i + 5] == L'n') {
								vrem.Lexema_length++;
								if (isx.text[i + 6] == L'(') {
									vrem.Lexema = LEX_RETURN[0];
									vrem.Lexema_arg = LEX_RETURN[1];
									return vrem;
								}
							}
						}
					}

				}
			}
		}
		if (isx.text[i] == L'S') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L't') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'r') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'l') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L'e') {
							vrem.Lexema_length++;
							if (isx.text[i + 5] == L'n') {
								vrem.Lexema_length++;
								if (isx.text[i + 6] == L'(') {
									vrem.Lexema = LEX_STRLEN[0];
									vrem.Lexema_arg = LEX_STRLEN[1];
									
									return vrem;
								}
							}
						}
					}

				}
			}
		}
	 if (isx.text[i] == L'S') {
		vrem.Lexema_length = 0;
		vrem.Lexema_length++;
		if (isx.text[i + 1] == L'c') {
			vrem.Lexema_length++;
			if (isx.text[i + 2] == L'o') {
				vrem.Lexema_length++;
				if (isx.text[i + 3] == L'n') {
					vrem.Lexema_length++;
					if (isx.text[i + 4] == L'c') {
						vrem.Lexema_length++;
						if (isx.text[i + 5] == L'a') {
							vrem.Lexema_length++;
							if (isx.text[i + 6] == L't') {
								vrem.Lexema_length++;
								if (isx.text[i + 7] == L'(') {
									vrem.Lexema = LEX_STRLEN[0];
									vrem.Lexema_arg = LEX_STRLEN[2];
									return vrem;
								}
							}
						}
					}
				}

			}
		}
	 }
		if (isx.text[i] == L'F') {
		vrem.Lexema_length = 0;
		vrem.Lexema_length++;
		if (isx.text[i + 1] == L'r') {
			vrem.Lexema_length++;
			if (isx.text[i + 2] == L'a') {
				vrem.Lexema_length++;
				if (isx.text[i + 3] == L'c') {
					vrem.Lexema_length++;
					if (isx.text[i + 4] == L't') {
						vrem.Lexema_length++;
						if (isx.text[i + 5] == L'p') {
							vrem.Lexema_length++;
							if (isx.text[i + 6] == L'a') {
								vrem.Lexema_length++;
								if (isx.text[i + 7] == L'r') {
									vrem.Lexema_length++;
									if (isx.text[i + 8] == L't') {
										vrem.Lexema_length++;
										if (isx.text[i + 9] == L'(') {
											vrem.Lexema = LEX_STRLEN[0];
											vrem.Lexema_arg = LEX_STRLEN[3];
											return vrem;
										}
									}
								}
							}
						}
					}
				}

			}
		}
		}
		 if (isx.text[i] == L'C') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'o') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'u') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L't') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L'p') {
							vrem.Lexema_length++;
							if (isx.text[i + 5] == L'(') {
								vrem.Lexema = LEX_SHOW;
								return vrem;
							}


						}
					}

				}
			}
		}
		 if (isx.text[i] == L'P') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'A') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'R') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'I') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_PARI[0];
							vrem.Lexema_arg = LEX_PARI[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'F') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_PARF[0];
							vrem.Lexema_arg = LEX_PARF[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'S') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_PARS[0];
							vrem.Lexema_arg = LEX_PARS[1];
							return vrem;
						}
					}
				}
			}
		}
		 if (isx.text[i] == L'V') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			if (isx.text[i + 1] == L'A') {
				vrem.Lexema_length++;
				if (isx.text[i + 2] == L'R') {
					vrem.Lexema_length++;
					if (isx.text[i + 3] == L'I') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_VARI[0];
							vrem.Lexema_arg = LEX_VARI[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'F') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_VARF[0];
							vrem.Lexema_arg = LEX_VARF[1];
							return vrem;
						}
					}
					if (isx.text[i + 3] == L'S') {
						vrem.Lexema_length++;
						if (isx.text[i + 4] == L' ') {
							vrem.Lexema = LEX_VARS[0];
							vrem.Lexema_arg = LEX_VARS[1];
							return vrem;
						}
					}
				}
			}
		 }
		 if (isx.text[i] == L'(') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_LEFTTHESIS;
			return vrem;
		 }
		if (isx.text[i] == L')') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_RIGHTTHESIS;
			return vrem;
		}
		 if (isx.text[i] == L',') {
		    vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_COMMA;
			return vrem;
		}
		 if (isx.text[i] == L';') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_SEPARATOR;
			return vrem;
		}
		 if (isx.text[i] == L'{') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_LEFTBRACE;
			return vrem;
		}
		if (isx.text[i] == L'}') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_RIGHTBRACE;
			return vrem;
		}
		 if (isx.text[i] == L'=') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_EQUAL;
			return vrem;
		}	
		 if (isx.text[i] == L'+') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_PLUS;
			return vrem;
		}
		 if (isx.text[i] == L'\n') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_N;
			return vrem;
		}
		 if (isx.text[i] == L'-') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_MINUS;
			return vrem;
		}
		 if (isx.text[i] == L'*') {
			vrem.Lexema_length = 0;
			vrem.Lexema_length++;
			vrem.Lexema = LEX_STAR;
			return vrem;
		}
		 if (isx.text[i] == L'/') {
		    vrem.Lexema_length = 0;
		    vrem.Lexema_length++;
		    vrem.Lexema = LEX_DIVISION;
		    return vrem;
		}
		if (isx.text[i] == L'%') {
		    vrem.Lexema_length = 0;
		    vrem.Lexema_length++;
		    vrem.Lexema = LEX_BALANCE;
	    	return vrem;
		}
		{
	    	vrem.Lexema_length = 0;
			for (i; (isx.text[i] != LEX_LEFTTHESIS) && (isx.text[i] != LEX_RIGHTTHESIS) && (isx.text[i] != LEX_SEPARATOR) && (isx.text[i] != LEX_COMMA) && (isx.text[i] != LEX_LEFTBRACE) && (isx.text[i] != LEX_RIGHTBRACE) && (isx.text[i] != LEX_EQUAL) && (isx.text[i] != LEX_PLUS) && (isx.text[i] != LEX_MINUS) && (isx.text[i] != LEX_STAR) && (isx.text[i]  != L' ') && (isx.text[i] != LEX_N);i++) {
					vrem.Lexema_length++;
					vrem.valua[vrem.Lexema_length - 1] = isx.text[i];

		    }
			

			return vrem;
		}
	
	}
}