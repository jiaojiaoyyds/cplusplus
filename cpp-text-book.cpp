// cpp-text-book.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
//#include <cstdio>      //printf 和scanf头函数
#include <limits>        //定义了整数类型的最大最小值
using namespace std;
int main()
{
    double radius, area = 0;
    const double PI = 3.1415926;
    cout << "请输入半径：" << endl;
    cin >> radius;
    area = PI * radius * radius;
    cout << "面积是：" << area << endl;
    return 0;
}
