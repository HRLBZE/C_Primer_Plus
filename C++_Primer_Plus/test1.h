#pragma once
#ifndef  C_C_C
#include<iostream>
#include<string>
using namespace std;

class String
{
	string b;
	int a;
public:
	String(string ddd)
	{
		b = ddd;
	}
	void print()
	{
		cout << b << endl;
		cout << "youma:" << a;
	}
};
//class test1
//{
//	int* arv;
//	int arc;
//	static int arfsf;
//public:
//	char str[5];
//	test1()
//	{
//		arv = new int[5];
//		arc = 7;
//	}
//	void print();
//	test1& operator=(test1& a);
//	int operator=(int a);
//	static int hello()
//	{
//		arfsf = 44;
//		return arfsf;
//	}
//
//};


#endif 



