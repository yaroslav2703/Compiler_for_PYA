#pragma once

#include "LexicalAnalysis.h"
#include "Construction.h"
#include "Token_str.h"

namespace Sin {

	

	void sinanaliz(LeX::LEX &lex_kod);
	void poisk_konstruction(Token_space::Token *token, IT::IdTable	IDtable, CONS::TableConstr sintaxis, IT::CTable CTable);
}
