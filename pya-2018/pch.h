// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifndef PCH_H
#define PCH_H
#include <tchar.h>
#include <iostream>
#include "Parm.h"
#include "Error.h"
#include "Log.h"
#include <fstream>
#include <ctime>
#include "In.h"
#include "LexicalAnalysis.h"
#include "SintaxAnalysis.h"
#include <string.h>
#include "Prohod.h"
#include "Construction.h"
#include "Generation.h"
#include <stack>
// TODO: add headers that you want to pre-compile here

#endif //PCH_H
