#include <iostream>

using namespace std;

int main()
{
	char str[14] = "Hello, world!";
	char* pt;

	cout << str << endl;
	pt = str;
	while (*pt) {
		if (*pt >= 'a' && *pt <= 'z')	// �ҹ����� ���
			*pt = *pt - 'a' + 'A';		// �빮�ڷ� �ٲ�		
		pt++;							// ���� ���ڷ� ������ �̵�
	}

	cout << str << endl;
	return 0;
}