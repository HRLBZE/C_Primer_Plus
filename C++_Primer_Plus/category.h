#ifndef H
#define H
#include<iostream>

class Test
{
	int a;
public:
	Test();
	~Test();
	friend std::ostream& operator<<(std::ostream& os, Test& a);
};

Test::Test()
{
	;
}

Test::~Test()
{
	;
}

std::ostream& operator<<(std::ostream& os, Test& A)
{
	os << A.a;
	return os;
}

#endif

//#ifndef H
//#define H
//#include<cstdlib>
//#include<cstring>
//#include<iostream>
//
//class Test
//{
//	char* str;
//	static int num_;
//public:
//	Test(const char* s);
//	Test();
//	~Test();
//	friend std::ostream& operator<<(std::ostream& os, const Test& st);
//};
//
//int Test::num_ = 0;
//
//std::ostream& operator<<(std::ostream& os, const Test& st)
//{
//	os << st.str;
//	return os;
//}
//
//Test::Test()
//{
//	num_++;
//	str = new char[4];
//	std::strcpy(str, "C++");
//	std::cout << str << '\n';
//}
//
//Test::Test(const char* s)
//{
//	int len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	num_++;
//	std::cout << str << '\n';
//}
//
//Test::~Test()
//{
//	delete[]str;
//	num_--;
//}
//
//#endif
//#ifndef H
//#define H
//#include<string>
//#include<iostream>
////×ª»»º¯Êý
//class try1
//{
//	int num_;
//public:
//	try1();
//	~try1();
//	try1(long a);
//	try1(double a);
//	operator double();
//	operator int();
//	friend void ttt(int a);
//};
//
//void ttt(int a)
//{
//	;
//}
//
//try1::operator int()
//{
//	std::cout << "hello";
//	return num_;
//}
//
//
//try1::operator double()
//{
//	return (double)num_;
//}
//
//try1::try1(double a)
//{
//	;
//}
//
//try1::try1(long a)
//{
//	num_ = 3;
//}
//
//try1::try1()
//{
//	;
//}
//
//try1::~try1()
//{
//	;
//}
//
//namespace hape
//{
//	class hap
//	{
//		std::string a = "kan nm ne";
//	};
//}
//#endif
//#ifndef H
//#define H
//
//class A
//{
//	int a;
//	int b;
//public :
//	A();
//	~A();
//	friend class B;
//};
//
//class B
//{
//	int c;
//	int d;
//public:
//	void O(A a);
//};
//
//void B::O(A a)
//{
//	a.a++;
//}
//
//A::A()
//{
//	a = 0;
//	b = 1;
//}
//
//A::~A()
//{
//	;
//}
//
//#endif
//#ifndef H
//#define H
//#include<iostream>
//
//class A
//{
//	int a_a;
//	int a_b;
//public:
//	A();
//	void prin();
//};
//
//class B :public A
//{
//	int b_a;
//	int b_b;
//public:
//	B();
//	void pron();
//};
//
//class C :public B
//{
//	int c_c;
//public:
//	void tmp();
//};
//
//#endif 
//#ifndef H
//#define H
//#include <iostream>
//class ni
//{
//	int a;
//	int b;
//public:
//	friend void operator<<(std::ostream& x, const ni& t);
//};
//#endif
//#ifndef hello
//#define hello
//class ni
//{
//	int a;
//	int b;
//public:
//	ni();
//	~ni();
//	ni operator+(const ni O);
//	int operator-(const ni O);
//	friend ni operator*(const ni O, const ni P);
//};
//
//#endif
//#ifndef mind
//#define mind 1
//#include <iostream>
//#include<string>
//class Stack
//{
//public:
//	void acquire(const std::string& co, long n, double pr);
//	void buy(long num, double price);
//	void sell(long num, double price);
//	void update(double price = 7);
//	void show();
//	void Test();
//	Stack();
//	Stack(int n);
//	~Stack();
//	void TEst() const;
//private:
//	double share_val;
//	double total_val;
//	long shares;
//	int test1;
//	int test2;
//	std::string company;
//	void set_tot()
//	{
//		total_val = shares * share_val;
//	}
//};
//
//// void Stack::Prin(int c)
////{
////	 std::cout << c;
////}
//
//#endif