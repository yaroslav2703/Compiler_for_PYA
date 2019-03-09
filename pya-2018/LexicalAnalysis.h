#pragma once
#include "Log.h"
#include "Token_str.h"
#include "IT.h"
#include "FST.h"




namespace LeX
{
	struct LEX
	{
		IT::IdTable	IDtable;
		Token_space::Token *TokenStroka;
		IT::CTable literalTable;
	};

	struct Graph
	{
		char Lexema;
		FST::FST graph;
	};

	

	LEX INITLEX(In::IN isx);

}
