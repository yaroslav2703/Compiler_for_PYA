#include "pch.h"
#include <iostream>
#include "FST.h"

namespace FST
{
	RELATION::RELATION(wchar_t c = 0x00, short ns = NULL)
	{
		this->symbol = c;
		this->nnode = ns;
	};

	NODE::NODE() {	};

	NODE::NODE(short n, RELATION rel, ...)
	{

		RELATION* temp = &rel;
		int i = 0;
		this->relations = new RELATION[n];
		this->n_relation = n;
		while (i < n)
		{
			this->relations[i] = *(temp + i);
			i++;
		};
	};

	FST::FST(wchar_t* s, short ns, NODE n, ...)
	{
		this->nodes = new NODE[ns];
		NODE* temp = &n;
		short i = 0;
		this->string = s;
		this->nstates = ns;
		this->rstates = new short[ns];
		while (i < ns)
		{
			this->nodes[i] = *(temp + i);
			i++;
		};

	};
	FST::FST(short ns, NODE n, ...)
	{
		this->nodes = new NODE[ns];
		NODE* temp = &n;
		short i = 0;
		this->nstates = ns;
		this->rstates = new short[ns];
		while (i < ns)
		{
			this->nodes[i] = *(temp + i);
			i++;
		};

	}
	FST::FST(wchar_t* s, FST& fst)
	{
		this->nodes = new NODE[fst.nstates];
		NODE* temp = fst.nodes;
		short i = 0;
		this->string = s;
		this->nstates = fst.nstates;
		this->rstates = new short[this->nstates];
		while (i < nstates)
		{
			this->nodes[i] = *(temp + i);
			i++;
		};
	}
	bool execute(FST &fst,int length)
	{
		
			int j;
		
			for (fst.rstates[0] = 0, fst.position = 0; fst.position < length; fst.position++)
			{
				
				
				if (fst.position == 0) {       // первый символ строки
					for (j = 0; j < fst.nodes[0].n_relation; j++)
					{
						if (fst.nodes[0].relations[j].symbol == fst.string[fst.position])
						{
							
							fst.rstates[0] = 1;
							break;
						}
						else {
							continue;
						}

					};
					if (fst.rstates[0] != 1) {
						return false;
					}

				}
				else if (fst.position ==( length-1)) { //последний символ строки
					
					for (j = 0; j < fst.nodes[fst.nstates-1].n_relation; j++)
					{
						if (fst.nodes[fst.nstates - 1].relations[j].symbol == fst.string[fst.position])
						{
							
							fst.rstates[fst.nstates - 1] = 1;
							break;
						}
						else {
							continue;
						}

					};
					if (fst.rstates[fst.nstates - 1] != 1) {
						return false;
					}

				}
				else  { //любой другой символ строки
					for (j = 0; j < fst.nodes[1].n_relation; j++)
					{
						if (fst.nodes[1].relations[j].symbol == fst.string[fst.position])
						{
							
							fst.rstates[1] = 1;
							break;
						}
						else {
							continue;
						}

					};
					if (fst.rstates[1] != 1) {
						return false;
					}
				}

			};
			
		return true;
	};
	
}