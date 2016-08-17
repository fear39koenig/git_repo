#include <iostream>
#include <string>
using namespace std;
// Сложение 2 переменныхкласса DATA через перегрузку оператора +
class DATA			//cоздаем класс DATA
{
public:				// переменные и функция принт видны отовсбду и к ним можно обращаться извне
	int Day;
	int Month;
	int Year;

	DATA(int x = 1, int y = 1, int z = 1)	//Это конструктор (сразу инициализировали 
	{							//переменные по умолчанию)
		Day = x;
		Month = y;
		Year = z;
	}
	DATA operator+ (DATA p)      //перегрузка оператора +
	{
		DATA q;							//описываем
		q.Day = Day + p.Day;			//перегрузку
		q.Month = Month + p.Month;		//оператора +
		q.Year = Year + p.Year;			//
		return q;						//
	}
	void print()
	{
		cout << Day << '.' << Month << '.' << Year << 'г' << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");

	//string s;

	DATA c, a(10, 12, 2012), b(22, 11, 1994);   //инициализируем переменную с

	c = a + b;		//для того чтоб так делать надо перегрузить оператор + что сы сделали выше
	c.print();    //вызываем функцию принт, переменной с класса DATA

	char Intersmg;
	cin >> Intersmg;
	return 0;

}