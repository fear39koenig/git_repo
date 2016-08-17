#include <iostream>
#include <string>
using namespace std;

class DATA			//cоздаем класс DATA
{
public:				// переменные и функция принт видны отовсбду и к ним можно обращаться извне
	int Day;
	int Month;
	int Year;
	void print()
	{
		cout << Day << '.' << Month << '.' << Year << 'г' << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");

	//string s;
	
	DATA c;      // (10, 12, 2012), b(22, 11, 1994), c;   //инициализируем переменную с
	c.Day = 4;
	c.Month = 11;
	c.Year = 2010;
	
	c.print();    //вызываем функцию принт, переменной с класса DATA
	
	char Intersmg;
	cin >> Intersmg;
return 0;

}