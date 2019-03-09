#pragma once

#define ID_MAXSIZE		8			//���� ����� �������� ��������������
#define TI_MAXSIZE		4096		//���� ����� ���������� ����� � ������� ���������������
#define TI_INT_DEFAULT	NULL		//�������� �� ��������� ��� int
#define TI_FLOAT_DEFAULT	NULL		//�������� �� ��������� ��� float
#define TI_STR_DEFAULT	NULL		//�������� �� ��������� ��� sting
#define TI_NULLIDX		0xffffffff	//��� �������� ������� ���������������
#define TI_STR_MAXSIZE	65535
#define TI_INT_MAXSIZE  9




namespace IT
{
	enum IDDATATYPE { INT = 1, STR = 2, FLT = 3 };			        //���� ������ ���������������
	enum IDTYPE { F = 1, P = 2, V = 3 };		//���� ���������������: �������, ��������, ����������.
	struct Entry
	{
		
		wchar_t	id[ID_MAXSIZE];			       		//�������������
		int dlina_id;                                //����� ��������������
		int namber;                                 // ����� � �������
		int quantity_par=0;                           // ���������� ���������� � �������
		IDDATATYPE *t_par = new IDDATATYPE[50];       // ������ ����� ���������� �������
		IDDATATYPE v_t;
		IDDATATYPE	iddatatype;						//��� ������
		IDTYPE		idtype;							//��� ��������������
		int flag=0; //�������� ������������� ��� ��� ���
		int fun_index; //������� ���������
		union
		{
			int	vint;	  //�������� integer
			float vfloat;    //�������� float
			struct
			{
				int len;							//���������� �������� � string
				wchar_t str[TI_STR_MAXSIZE - 1];		//������� string
			}vstr;									//�������� string
		}value;										//�������� ��������������
		Entry()
		{
			this->value.vint = TI_INT_DEFAULT;
			this->value.vstr.len = NULL;
		}
		Entry(wchar_t* id,  IDDATATYPE datatype, IDTYPE idtype);
	};

	struct Literal
	{
		wchar_t	id[500];			       		       //�������
		int dlina_lit;                                //����� ��������
		IDDATATYPE	iddatatype;						//��� ������
	
	};

	struct IdTable									//��������� ������� ���������������
	{
		int maxsize;								//������� ������� ��������������� < TI_MAXSIZE
		int size;									//������� ������ ������� ��������������� < maxsize
		Entry* table;								//������ ����� ������� ���������������
	};
	IdTable Create(int size = NULL);				//������� ������� ��������������� < TI_MAXSIZE
	void Add(										//�������� ������ � ������� ���������������
		IdTable &idtable,							//��������� ������� ���������������
		Entry entry);								//������ ������� ��������������� 
	Entry GetEntry(									//�������� ������ ������� ���������������
		IdTable &idtable,							//��������� ������� ���������������
		int n);										//����� ���������� ������
	int IsId(										//�������: ����� ������(���� ����), TI_NULLIDX(���� ����)
		IdTable &idtable,							//��������� ������� ���������������
		wchar_t id[ID_MAXSIZE]);						//�������������

	struct CTable									//��������� ������� ���������
	{
		int size=0;									//������� ������ ������� ��������� < maxsize
		Literal* literals;		//������ ����� ������� ���������
	};

}
