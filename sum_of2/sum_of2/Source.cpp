#include <iostream>
#include <string>
using namespace std;

template <typename Ttype>			
Ttype SumOfTwo(Ttype a, Ttype b)		
{									
	Ttype c = a + b;
	return c;

}
//int SumOfTwo(float a,float b)
//{
//	float c=a+b;
//	return c;
//
//}
//string SumOfTwo(string a,string b)
//{
//	string c=a+b;
//	return c;
//
//}


int main() {
	setlocale(LC_ALL, "Russian");	
									
									
	int ia = 2, ib = 3, ic;
	float fa = 3.2, fb = 2.2, fc;
	string sa = "aaa", sb = "bbb", sc;
	//cout<<"Ââåäèòå çíà÷åíèå à:";
	//cin>> a;
	//cout<<"Ââåäèòå çíà÷åíèå b:";
	//cin>>b;
	//cout <<"Ñóììà "<<a<<" + "<<b<<" = "<<SumOfTwo(a,b);

	sc = SumOfTwo(sa, sb);
	cout << sc;

	char smtgsrt;
	std::cin >> smtgsrt;

	return 0;
}