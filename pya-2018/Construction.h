#pragma once
#include "Token_str.h"

#define MAX_CONSTR 200

namespace CONS {

	struct Constr
	{
		
		int name;
		int dlina;
		Token_space::Token *posl;
	};

	struct TableConstr {

		int kol_Constr;
		Constr *construction;

	};

	TableConstr Pravila();

}