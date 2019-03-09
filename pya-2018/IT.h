#pragma once

#define ID_MAXSIZE		8			//макс число символов идентификатора
#define TI_MAXSIZE		4096		//макс число количество строк в таблице идентификаторов
#define TI_INT_DEFAULT	NULL		//значение по умолчанию дл€ int
#define TI_FLOAT_DEFAULT	NULL		//значение по умолчанию дл€ float
#define TI_STR_DEFAULT	NULL		//значение по умолчанию дл€ sting
#define TI_NULLIDX		0xffffffff	//нет элемента таблицы идентификаторов
#define TI_STR_MAXSIZE	65535
#define TI_INT_MAXSIZE  9




namespace IT
{
	enum IDDATATYPE { INT = 1, STR = 2, FLT = 3 };			        //типы данных идентификаторов
	enum IDTYPE { F = 1, P = 2, V = 3 };		//типы идентификаторов: функци€, параметр, переменна€.
	struct Entry
	{
		
		wchar_t	id[ID_MAXSIZE];			       		//идентификатор
		int dlina_id;                                //длина идентификатора
		int namber;                                 // номер в таблице
		int quantity_par=0;                           // количество параметров в функции
		IDDATATYPE *t_par = new IDDATATYPE[50];       // список типов параметров функции
		IDDATATYPE v_t;
		IDDATATYPE	iddatatype;						//тип данных
		IDTYPE		idtype;							//тип идентификатора
		int flag=0; //определЄн идентификатор уже или нет
		int fun_index; //область видимости
		union
		{
			int	vint;	  //значение integer
			float vfloat;    //значение float
			struct
			{
				int len;							//количество символов в string
				wchar_t str[TI_STR_MAXSIZE - 1];		//символы string
			}vstr;									//значение string
		}value;										//значение идентификатора
		Entry()
		{
			this->value.vint = TI_INT_DEFAULT;
			this->value.vstr.len = NULL;
		}
		Entry(wchar_t* id,  IDDATATYPE datatype, IDTYPE idtype);
	};

	struct Literal
	{
		wchar_t	id[500];			       		       //литерал
		int dlina_lit;                                //длина литерала
		IDDATATYPE	iddatatype;						//тип данных
	
	};

	struct IdTable									//экземпл€р таблицы идентификаторов
	{
		int maxsize;								//Ємкость таблицы идентификаторов < TI_MAXSIZE
		int size;									//текущий размер таблицы идентификаторов < maxsize
		Entry* table;								//массив строк таблицы идентификаторов
	};
	IdTable Create(int size = NULL);				//Ємкость таблицы идентификаторов < TI_MAXSIZE
	void Add(										//добавить строку в таблицу идентификаторов
		IdTable &idtable,							//экземпл€р таблицы идентификаторов
		Entry entry);								//строка таблицы идентификаторов 
	Entry GetEntry(									//получить строку таблицы идентификаторов
		IdTable &idtable,							//экземпл€р таблицы идентификаторов
		int n);										//номер получаемой строки
	int IsId(										//возврат: номер строки(если есть), TI_NULLIDX(если есть)
		IdTable &idtable,							//экземпл€р таблицы идентификаторов
		wchar_t id[ID_MAXSIZE]);						//идентификатор

	struct CTable									//экземпл€р таблицы литералов
	{
		int size=0;									//текущий размер таблицы литералов < maxsize
		Literal* literals;		//массив строк таблицы литералов
	};

}
