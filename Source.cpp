#include<iostream>
#include<string.h>


using namespace std;

void add_simb(char*& str, int num, char simb)
{

	int size = strlen(str)+1;
	char* buf = new char[size];

	for (int i = 0, j = 0; i < size-1; ++i, j++)
	{
		if (j != (num - 1))
		{
			buf[j] = str[i];
			
		}

		else
		{
			buf[j] = simb;
			--i;
		}
		
	}

	buf[size] = '\0';

	str = buf;


	
}

void main()
{
	
	setlocale(0, "");

	char* str = new char[256];
	int num;
	char simb;

	cout << "������� ������: ";
	cin >> str;
	cout << endl;
	cout << "������� ������ ������� ������ �������: ";
	cin >> simb;
	cout << endl;
	cout << "������� ����� ������� ���� ������ �������� ������: ";
	cin >> num;
	cout << endl;
	cout << endl;

	add_simb(str, num, simb);

	cout << str;
		
}


/*������� 3:
�������� �������, ������� ��������� � 
������ � ��������� ������� �������� ������.*/