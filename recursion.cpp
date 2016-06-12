//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <cmath> 
//using namespace std;
////1.	Написать рекурсивную функцию minimum(ar, n), которая вычисляет минимальный элемент массива
//
//
//void rand(int size, int ar[]){
//	srand(time(NULL));
//
//	for (int i = 0; i < size; i++){
//		ar[i] = rand() % 100;
//		cout << ar[i] << " ";
//
//	}
//	cout << "\n";
//}
//
//int loop_minimum(int size, int ar[])
//{
//	int min = ar[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (ar[i] < min)
//			min = ar[i];
//	}
//	return min;
//}
//
//
//
//
//
//int recurse_minimum(int s, int a[], int m)
//{
//	if (m > a[s])
//	{
//		m = a[s];
//		return m;
//	}
//	if (s < 0)
//		return m;
//	recurse_minimum(s - 1, a, m);
//}
//
//
//
//
//int main(){
//
//	const int size = 10;
//	int ar[size];
//	rand(size, ar);
//	int min = ar[size];
//	///////////////////////////////////
//	cout << "loop: " << loop_minimum(size, ar) << endl;
//	///////////////////////////////////
//
//	cout << "recurse: " << recurse_minimum(size, ar, min) << endl;
//}
//
//
//// 6 8 11 34 1 3 155 240 3 256
#include <iostream>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
	char mon_name[12];
};

void Show(date a){
	// показ содержимого объекта a
	cout << a.day << " ";
	cout << a.year << " ";
	cout << a.month << " ";
	cout << a.mon_name << "\n\n";
}

date Put(){
	// формирование объкта
	date temp;
	cout << "DAY ? ";
	cin >> temp.day;
	cout << "MONTH ? ";
	cin >> temp.month;
	cout << "YEAR ? ";
	cin >> temp.year;
	cout << "MONTH NAME ? ";
	cin >> temp.mon_name;
	return temp;
}

date a = { 14, 7, 1954, "July" };
date b;

void main()
{
	// передача объекта в функцию
	Show(a);

	// получение объекта в качестве возвращаемого значения
	b = Put();

	// показ содержимого объекта b
	Show(b);

}




