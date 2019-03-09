#pragma once
#define ERROR_THROW(id) Error::geterror(id);	//throw ERROR_THROW(id)
#define ERROR_THROW_IN(id,l,c) Error::geterrorin(id,l,c);	//throw ERROR_THROW(id, ������, �������)
#define ERROR_MAXSIZE_MESSAGE 200               //������������ ����� ��������� �� ������ 
#define ERROR_MAX_ENTRY 1000					//���������� ��������� � ������� ������
#define ERROR_ENTRY(id,m) {id,m}						//������� ������� ������
#define ERROR_ENTRY_NODEF(id)		ERROR_ENTRY(id,L"Indefinite error")	// �������������� ������� ������� ������
#define ERROR_ENTRY_NODEF10(id)		ERROR_ENTRY_NODEF(id+0),ERROR_ENTRY_NODEF(id+1),ERROR_ENTRY_NODEF(id+2),ERROR_ENTRY_NODEF(id+3), \
									ERROR_ENTRY_NODEF(id + 4), ERROR_ENTRY_NODEF(id + 5), ERROR_ENTRY_NODEF(id + 6), ERROR_ENTRY_NODEF(id + 7), \
									ERROR_ENTRY_NODEF(id + 8), ERROR_ENTRY_NODEF(id + 9)
#define ERROR_ENTRY_NODEF100(id)	ERROR_ENTRY_NODEF10(id+0), ERROR_ENTRY_NODEF10(id+10),ERROR_ENTRY_NODEF10(id+20), ERROR_ENTRY_NODEF10(id+30), \
									ERROR_ENTRY_NODEF10(id + 40), ERROR_ENTRY_NODEF10(id + 50), ERROR_ENTRY_NODEF10(id + 60), ERROR_ENTRY_NODEF10(id + 70), \
									ERROR_ENTRY_NODEF10(id + 80), ERROR_ENTRY_NODEF10(id + 90)

namespace Error
{
	struct ERROR								//��� ���������� ��� throw ERROR_THROW | ERROR_THROW_IN b catch(ERROR)
	{
		int id;									//��� ������ 
		wchar_t message[ERROR_MAXSIZE_MESSAGE];	//��������� �� ������
		struct									//���������� ��� ������ ��� ��������� ������� ������
		{
			short line;							//����� ������ (0, 1, 2, ...)
			short col;							//����� ������� � ������(0, 1, 2, ...)
		} inext;
	};
	ERROR geterror(int id);							//������������ ERROR ��� ERROR_THROW
	ERROR geterrorin(int id, int line, int col);	//������������ ERROR ��� ERROR_THROW_IN

}