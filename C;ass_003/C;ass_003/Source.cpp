#include <iostream>
#include <string>
using namespace std;
// �������� 2 ���������������� DATA ����� ���������� ��������� +
class DATA			//c������ ����� DATA
{
public:				// ���������� � ������� ����� ����� �������� � � ��� ����� ���������� �����
	int Day;
	int Month;
	int Year;

	DATA(int x = 1, int y = 1, int z = 1)	//��� ����������� (����� ���������������� 
	{							//���������� �� ���������)
		Day = x;
		Month = y;
		Year = z;
	}
	DATA operator+ (DATA p)      //���������� ��������� +
	{
		DATA q;							//���������
		q.Day = Day + p.Day;			//����������
		q.Month = Month + p.Month;		//��������� +
		q.Year = Year + p.Year;			//
		return q;						//
	}
	void print()
	{
		cout << Day << '.' << Month << '.' << Year << '�' << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");

	//string s;

	DATA c, a(10, 12, 2012), b(22, 11, 1994);   //�������������� ���������� �

	c = a + b;		//��� ���� ���� ��� ������ ���� ����������� �������� + ��� �� ������� ����
	c.print();    //�������� ������� �����, ���������� � ������ DATA

	char Intersmg;
	cin >> Intersmg;
	return 0;

}