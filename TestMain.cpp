#include <iostream>
#include"Test.h"
using namespace std;

int main()
{
	CGoods c1;
	CGoods c2;
	c1.InitGoods((char*)"C++.pdf", 56.5, 20);
	c2.InitGoods((char*)"Java.pdf", 40, 10);
	cout << "c1 count=" << c1.Getcount() << endl;
	cout << "c2 count=" << c2.Getcount() << endl;
}
