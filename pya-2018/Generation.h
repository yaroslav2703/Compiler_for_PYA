#pragma once

#define Header L"<!DOCTYPE html> \n <html> \n <head> \n <title>PYA-2018</title> \n  <meta content=\"text/html; charset=utf-8\"> \n <script type=\"text/javascript\"> \n " //"�����" ����� ���������
#define Footer L"\n </script> \n </head> \n <body> \n </body> \n </html>" //�������� ����� ���������

void Generation(Token_space::Token *token, IT::IdTable	IDtable, IT::CTable	Ctable); //������ �������� ��� ������� ���������
