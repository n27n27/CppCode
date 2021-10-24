#include <iostream>
#include <cstring>
#include "Person.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

Person::Person(const char* name, const char* addr)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);
	cout << "Person ��ü ������ (" << name << ")" << endl;
}

Person::~Person()
{
	cout << "Person ��ü ������(" << name << ")" << endl;
	delete[] name;
	delete[] addr;
}

void Person::print() const
{
	cout << addr << "�� ��� " << name << "�Դϴ�." << endl;

}

void Person::chAddr(const char* newAddr)
{
	delete[] addr;

	addr = new char[strlen(newAddr) + 1];
	strcpy_s(addr, strlen(newAddr) + 1, newAddr);
}
