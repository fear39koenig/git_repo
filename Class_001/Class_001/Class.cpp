#include <iostream>
#include <string>
using namespace std;

class DATA			//c������ ����� DATA
{
public:				// ���������� � ������� ����� ����� �������� � � ��� ����� ���������� �����
	int Day;
	int Month;
	int Year;
	void print()
	{
		cout << Day << '.' << Month << '.' << Year << '�' << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");

	//string s;
	
	DATA c;      // (10, 12, 2012), b(22, 11, 1994), c;   //�������������� ���������� �
	c.Day = 4;
	c.Month = 11;
	c.Year = 2010;
	
	c.print();    //�������� ������� �����, ���������� � ������ DATA
	
	char Intersmg;
	cin >> Intersmg;
return 0;

}