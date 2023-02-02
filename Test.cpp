#include<iostream>
#include"Test.h"

// _CRT_SECURE_NO_WARNINGS

void CGoods::InitGoods(char* n, float p, int c)
{
	strcpy(name, n);
	price = p;
	count = c;
}
void CGoods::Setname(char n[])
{
	strcpy(name, n);
}
void CGoods::Getname(char n[])
{
	strcpy(n, name);
}
float CGoods::Getprice()
{
	return price;
}
int CGoods::Getcount()
{
	return count;
}
float CGoods::GetTotal()
{
	return count * price;
}