#include "pch.h"
#include <string.h>
#include <iomanip>
#include "IT.h"

namespace IT
{

	Entry::Entry(wchar_t* id,  IDDATATYPE datatype, IDTYPE idtype)
	{
		wcsncpy_s(this->id, ID_MAXSIZE, id, ID_MAXSIZE - 1);
		
		this->iddatatype = datatype;
		this->idtype = idtype;
		this->value.vint = TI_INT_DEFAULT;
		this->value.vstr.len = NULL;
	}
	IdTable Create(int size)
	{
		IdTable idtable;
		idtable.table = new Entry[size];
		idtable.maxsize = size;
		idtable.size = NULL;
		return idtable;
	}
	void Add(IdTable &idtable, Entry entry)
	{
		wcsncpy(idtable.table[idtable.size].id, entry.id, ID_MAXSIZE - 1);
		
		idtable.table[idtable.size].iddatatype = entry.iddatatype;
		idtable.table[idtable.size].idtype = entry.idtype;
		idtable.table[idtable.size].dlina_id = entry.dlina_id;
		idtable.table[idtable.size].namber = entry.namber;
		idtable.table[idtable.size].value.vint = TI_INT_DEFAULT;
		idtable.table[idtable.size].value.vfloat = TI_FLOAT_DEFAULT;
		idtable.table[idtable.size].value.vstr.len = NULL;
		idtable.table[idtable.size].value.vstr.str[0] = TI_STR_DEFAULT;
		idtable.size++;
	}
	Entry GetEntry(IdTable &idtable, int n)
	{
		return idtable.table[n];
	}
	int IsId(IdTable &idtable, wchar_t id[ID_MAXSIZE])
	{
		for (int i = 0; i < idtable.size; i++)
		{
			if (wcscmp(idtable.table[i].id, id) == NULL)
				return i;
		}
		return -1;
	}
	
}
