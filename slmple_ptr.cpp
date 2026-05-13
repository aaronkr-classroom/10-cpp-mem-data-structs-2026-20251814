#include <iostream>

using namespace std;

int main(void)
{
	int x = 5;
	int y = 10;

	//p는 x를 가리킴
	int* p = &x;
	int* q = &y;

	*p = 6;
	*q = *p * 2;
	cout << "x = " << x << ", y= "<< y << endl;
	cout << "x의 주소 = " << p << ", y의 주소 = " << q << endl;

	
	int a=1, b=2, c=3, d=4, e=5, f=6, g=7;
	int* h=&a, *i, j, k, l, m, n;

	cout << endl << "변수의 값: "
		<< "a= " << a << endl
		<< "b= " << b << endl
		<< "c= " << b << endl
		<< "d= " << b << endl
		<< "e= " << b << endl
		<< "f= " << b << endl
		<< "g= " << b << endl;

	cout << endl << "변수의 주소: "
		<< "h= " << h << endl
		<< "i= " << i << endl
		<< "j= " << j << endl
		<< "k= " << k << endl
		<< "l= " << l << endl
		<< "m= " << m << endl
		<< "n= " << n << endl;
		


	




	return 0;
}
