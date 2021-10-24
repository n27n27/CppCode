#include <iostream>

using namespace std;

int main()
{
	char str[14] = "Hello, world!";
	char* pt;

	cout << str << endl;
	pt = str;
	while (*pt) {
		if (*pt >= 'a' && *pt <= 'z')	// 소문자인 경우
			*pt = *pt - 'a' + 'A';		// 대문자로 바꿈		
		pt++;							// 다음 문자로 포인터 이동
	}

	cout << str << endl;
	return 0;
}