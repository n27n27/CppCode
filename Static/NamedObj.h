#pragma once
#include <iostream>
using namespace std;

class NamedObj
{
	char* name;
	int id;
	static int nConstr;			// 생성된 객체 수
	static int nDestr;			// 소멸된 객체 수
public:
	NamedObj(const char* s);	// 생성자
	~NamedObj();				// 소멸자

	// 객체의 속성 출력
	void display() const {
		cout << "ID:" << id << "-->이름: " << name << endl;
	}


	// 존재하는 객체 수 반환
	static int nObj() {
		return nConstr - nDestr;
	}
};

