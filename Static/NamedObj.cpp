#include "NamedObj.h"
#include <cstring>

NamedObj::NamedObj(const char* s)
{
	name = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
	id = nConstr++;
}

NamedObj::~NamedObj()
{
	nDestr++;
	delete[] name;
}


int NamedObj::nConstr = 1;
int NamedObj::nDestr = 1;