//: C03:Charlist.cpp
// ����� ���� �������� ASCII
// ������������ ����� "for"
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i< 128; i = i + 1)
		if (i != 16)	// ������� ������ �� ���������� ANSI
			cout << " value: " << i
				 << " character: "
				 << char(i)	// ���������� ����
				 << endl;
} ///:~