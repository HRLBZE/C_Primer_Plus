#define _CRT_SECURE_NO_WARNINGS
#include "category.h"


//int main()
//{
//	B b;
//}
////模板
//template<typename T>
//void Swap(T& a, T& b);
//
//struct job
//{
//	int a;
//};
//
//template<> void Swap<job>(job &a, job &b);  //显示具体化
//template<> void Swap(job& a, job& b);
//template void Swap<job>(job&, job&);    //显式实例化
//
//继承，thisnv
//A::A()
//{
//	a_a = 3;
//	a_b = 2;
//}
//
//void A::prin()
//{
//	std::cout << this->a_a;
//}
//
//B::B()
//{
//	b_a = 5;
//	b_b = 7;
//}
//
//void B::pron()
//{
//	prin();
//}
//
//void C::tmp()
//{
//	pron();
//}
//
//int main()
//{
//	C a;
//	a.tmp();
//	return 0;
//}
//void operator<<(const ni& t, std::ostream& x)
//{
//	x << "hello";
//}
//
//int main()
//{
//	ni o;
//	o << std::cout;
//	return 0;
//}
//ni ni::operator+(const ni A)
//{
//	ni C;
//	C.a = A.a * a;
//	C.b = A.b * b;
//	return C;
//}
//
//ni operator*(const ni B, const ni G)
//{
//	ni tmp;
//	tmp.a = B.a + 1;
//	tmp.b = B.b + 3;
//	return tmp;
//}
//
//int ni::operator-(const ni A)
//{
//	ni C;
//	C.a = A.a * a;
//	C.b = A.b * b;
//	return C.a;
//}
//
//ni::~ni()
//{
//	;
//}
//ni::ni()
//{
//	a = 3;
//	b = 5;
//}
//int main()
//{
//	ni t = ni(), c = ni();
//	int d = t + c - t;
//	ni H = t * c;
//	return 0;
//}
//void Stack::acquire(const std::string& co, long n, double pr)
//{
//	share_val = 3;
//	shares = 5;
//	std::cout << shares;
//}
//
//void Stack::Test()
//{
//	test1 = 3;
//	using std::cout;
//	cout << total_val;
//}
//
//Stack::Stack()
//{
//	std::cout << "hello";
//	total_val = 1;
//	shares = 5;
//	share_val = 5;
//	test2 = 4;
//	test1 = 3;
//}
//Stack::Stack(int n)
//{
//	std::cout << "hello";
//	total_val = 3;
//	shares = 7;
//	share_val = 9;
//	test2 = 10;
//	test1 = 3;
//}
//Stack::~Stack()
//{
//	std::cout << "bye";
//}
//
//void Stack::update(double y)
//{
//	std::cout << y;
//	set_tot();
//}
//
//void Stack::TEst() const
//{
//	std::cout << total_val;
//}
//
//Stack::Stack(int x)
//{
//	std::cout << x;
//	std::cout << "hello";
//	total_val = 1;
//	shares = 5;
//	share_val = 5;
//	test2 = 4;
//	test1 = 3;
//}
//
//int main()
//{
//	//初始化函数各种方法
//	Stack a = Stack();
//	Stack b;
//	Stack* c = new Stack;
//	delete c;
//
//	//只有一个参数
//	Stack d = 3;
//	Stack f(3);
//	Stack e = Stack(3);
//
//	return 0;
//}
//int main()
//{
//	//Stack a(13);
//	Stack a = 32;
//	//Stack a{};
//	a.Test();
//	return 0;
//
//}
//int main()
//{
//	Stack a = Stack();
//	Stack b = Stack();
//	a.update();
//	b.update();
//	a.update();
//b:
//	b = Stack(3);
//	b.Test();
//	return 0;
//}
//void Stack::Prin(int x)
//{
//	std::cout << x;
//}
//template<typename T,class H>
//auto gt(x, y) -> decltype(x + y)
//{
//	return  x + y;
//}
//int main()
//{
//	char A[10];
//	char B;
//	using namespace std;
//	//cin.get(A, 10);
//	while (cin)
//	{
//		cin.get(B);
//	}
//	return 0;
//}
//auto       ->
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T c;
//	c = a;
//	a = b;
//	b = c;
//}
//
//int main()
//{
//	int a = 3;
//	double b = 5;
//	int c = 7;
//	Swap(a, c);
//	std::cout << a;
//	return 0;
//}
//void test(const int x);
//void test(int x);
//typedef struct test
//{
//	int a;
//	int b;
//	int c;
//}test;
//
//test& hello(test& in)
//{
//	in.a = 3;
//	return in;
//}
//
//test hello1(test& in)
//{
//	in.a = 4;
//	return in;
//}
//
//int main()
//{
//	using namespace std;
//	test in;
//	hello(hello1(in));
//	cout << in.a;
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int* p = &a;
//	int& c = *p;
//	int d = 5;
//	p = &d;
//	*p = 5;
//	printf("%d", *p);
//	printf("%d", c);
//	//int a = 3;
//	//int& b = a;
//	//int c = 5;
//	//b = c;
//	//printf("%d", b);
//	//return 0;
//}
////内联函数
//inline void tmp()
//{
//	printf("你是猪");
//}
//
//int main()
//{
//	tmp();
//	return 0;
//}
//double add(double x, double y)
//{
//	return x + y;
//}
//
//double fix(double x, double y)
//{
//	return x * y;
//}
//
//double chu(double x, double y)
//{
//	return x / y;
//}
//double (*Test[3])(double x, double y) = { add,fix,chu };
//
////double calculate(double x, double y, double Test[3](double h, double t))
////{
////	int z = (*Test[0])(x, y);
////	int n = (*Test[1])(x, y);
////	int m = (*Test[2])(x, y);
////}
//
//int main()
//{
//	double x = Test[0](3, 2);
//	printf("%f", x);
//	return 0;
//}
//double Derm(int);
//double Tern(int);
//void Try(double (*p)(int x), int x);
//
//int main()
//{
//	Try(Tern, 3);
//	return 0;
//}
//
//double Derm(int x)
//{
//	return x * 0.1;
//}
//
//double Tern(int x)
//{
//	return  x * 0.001;
//}
//
//void Try(double (*p)(int), int y)
//{
//	double z = (*p)(y);
//	printf("%f", z);
//}
//double (*Num)(int x);
//double Cum(int x);
//void estimate(int x, double (*Num)(int));
//int main()
//{
//	
//
//}
//
//double Cum(int x)
//{
//
//}
//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//#include<cctype>
//int a(int);
//int b(int);
//int (*c)(int);
//
//void d(int a, int (*c)(int));
//int main()
//{
//
//}
//int main()
//{
//	using namespace std;
//	int x;
//	int h;
//	cin >> x >> h;
//	cout << x << endl;
//	cout << h;
//	return 0;
//}
//int A(const int a[])
//{
//
//}
//int main()
//{
//	using namespace std;
//	char gost[15] = "helloping";
//	char* a = (char*)"helloping";
//	int n1 = strlen(gost);
//	int n2 = strlen("helloping");
//	int n3 = strlen(a);
//	return 0;
//
//
//	//
//	//const int a[5] = {1,2,3,4,5};
//	//A(a);	
//	/*const int* y;
//	int n = 3;
//	y = &n;
//	cout << *y;
//	return 0;*/
//	//const int** x;
//	//const int* y;
//	//x = &y;
//	//cout << x;
//	//return 0;
//}
//
//int main()
//{
//	using namespace std;
//	ifstream fod;
//	int sum = 0;
//	fod.open("a.txt");
//	if (fod.good())
//	{
//		cout << "right";
//	}
//	char tmp = 0;
//	fod >> tmp;
//	sum++;
//	while (fod.good())
//	{
//		fod >> tmp;
//		if (tmp)
//			sum++;
//		if (fod.eof())
//			break;
//	}
//	cout << sum;
//}
//int main()
//{
//	using namespace std;
//	char a;
//	int num = 0;
//	int sum = 0;
//	while (cin.get(a))
//	{
//		if (isdigit(a))
//		{
//			num++;
//			sum += a;
//		}
//		else if (cin.eof())
//		{
//			cin.clear();
//			continue;
//		}
//		else if (!isdigit(a))
//		{
//			break;
//		}
//		cin.get();
//
//	}
//	ofstream test;
//	char name[26];
//	cin >> name;
//	test.open(name);
//	test << sum << endl;
//	test << num << endl;
//	test.close();
//	return 0;
//
//}
//int main()
//{
//	using namespace std;
//	char ch;
//	while (cin.get(ch))
//	{
//		if (ch == '@')
//			break;
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			cout << (char)toupper(ch);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			cout << (char)tolower(ch);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	char ch;
//	int a = 0, b = 0;
//	while ((ch = cin.get()) != '$')
//	{
//		cout << ch;
//		a++;
//		if(ch)
//	}
//}
//int main()
//{
//	using namespace std;
//	char name[26];
//	cin >> name;
//	double sum = 0;
//	double tmp;
//	int count = 0;
//	ifstream fold;
//	fold.open(name);
//	if (!fold.good())
//	{
//		cout << "fail";
//	}
//	fold >> tmp;
//	while (fold.good())
//	{
//		count++;
//		sum += tmp;
//		fold >> tmp;
//	}
//	cout << sum << '\n' << count;
//	if (fold.eof())
//		cout << "right";
//	else if (fold.fail())
//		cout << "dismatch";
//	fold.close();
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	ofstream z;
//	int x;
//	cin >> x;
//	z.open("a.txt");
//	z << "qu ni md" << " ";
//	z << endl;
//	z << endl;
//	z << x;
//	z.close();
//	cout << "ok";
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int x;
//	cin >> x;
//	cout << x;
//	//while (1)
//	//{
//	//	cout << "a";
//	//	if (x)
//	//	{
//	//		goto kl;
//	//	}
//
//	//}
////kl:cout << "hello";
//	return 00;
//
//}
//#include<stdio.h>
//#include<string>
//#include <malloc.h>
//int main()
//{
//	int i;
//	scanf_s("%d", &i);
//	int* p = (int*)malloc(i * sizeof(int));
//	printf("%p\n", p);
//	scanf_s("%d", &p[2]);
//	printf("\n%d\n", p[2]);
//	int* p2 = (int*)realloc(p, 10 * sizeof(int));
//	free(p2);
//	printf("\n%d\n", p[2]);
//
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int a = 0;
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = a - 1; j > i; j--)
//		{
//			cout.put('.');
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0; 
//}
//int main()
//{
//	using namespace std;
//	char a[10];
//	cin >> a;
//	int i = 0;
//	while (strncmp(a, "name", 4) != 0)
//	{
//		cin >> a;
//		i++;
//	}
//	cout << i;
//	return 0;
//}
//struct car
//{
//	std::string name;
//	int year;
//};
//
//int main()
//{
//	int i = 0;
//	using namespace std;
//	cout << "how many cars do you want to input";
//	cin >> i;
//	car* a = new car[i];
//	for (int j = 0; j < i; j++)
//	{
//		cout << "please enter the make :";
//		cin >> a[j].name;
//		cout << "please enter the year make: ";
//
//	}
//	
//}
//#include<string>
//int main()
//{
//	using namespace std;
//	const char* p[12] =
//	{
//		"January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"October",
//		"September",
//		"October",
//		"November",
//		"Decenber"
//	};
//	int sum[12] = { 0 };
//
//	for (int i = 0; i < 12; i++)
//	{
//		cout << p[i] << ": " << "\t";
//		cin >> sum[i];
//	}
//	double sum_s = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		sum_s += sum[i];
//	}
//	cout << sum_s / 12;
//	return 0;
//	/*using namespace std;
//	double basic_Da = 100;
//	double basic_Cl = 100;
//	int year = 0;
//	double Da_g = 0.1;
//	double Cl_g = 0.05;
//	double sum_Cl = 0;
//	do
//	{
//		basic_Da += 10;
//		sum_Cl = basic_Cl * Cl_g + basic_Cl;
//		basic_Cl = sum_Cl;
//		year++;
//	} while (basic_Cl <= basic_Da);
//	cout << year;
//	return 0;*/
//}
//
//int main()
//{
//	using namespace std;
//	string a[8] =
//	{
//		"asfaf",
//		"fafeger",
//		"grgrg",
//		"fgjogi"
//	};
//	cout << a[0] << endl;
//	//const char* p[5] =
//	//{
//	//	"asdff",
//	//	"asdaf",
//	//	"faeuf",
//	//	"fhuiwghfryuiag",
//	//	"fuilserahuower"
//	//};
//	//cout << p[0] << endl;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	char A[3][3] =
//	{
//		{'a','b','b'},
//		{'c','a','h'},
//		{'g','w','k'}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << A[i][j] << "\t";
//
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//#include<ctime>
//int main()
//{
//	using namespace std;
//	char a;
//	char b;
//	cin.get(a).get(b);
//	cout << a << endl;
//	cout << b << '\t' << endl;
//	//char a;
//	//a = cin.get();
//	//while ((a = cin.get()) != EOF)
//	//{
//	//	cout.put(a);
//	//	a = cin.get();
//	//}
//	return 0;
//
//}
//char* test(char str[])
//{
//	char* p;
//	p = str;
//	return p;
//}
//
//int main()
//{
//	using namespace std;
//	char A[128];
//	cin >> A;
//	char* p = test(A);
//	cout << p;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	char c;
//	cin.get(c);
//	int count = 0;
//	while (c != '#')
//	{
//		cout << c;
//		count++;
//		cin.get(c);
//	}
//	cout << endl << count;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int H[5] = { 0,1,2,3,4 };
//	for (int x : H)
//	{
//		cout << x;
//		x += 2;
//	}
//	cout << endl;
//	for (int x : H)
//	{
//		cout << x;
//	}
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int time_a;
//	cout << "input the delay time you want to" << endl;
//	cin >> time_a;
//	clock_t delay = time_a * CLOCKS_PER_SEC;
//	clock_t time_b = clock();
//	while (clock() - time_b < delay)
//	{
//		;
//	}
//	cout << "\a" << "time is out" << endl;
//	return 0;
//}
//#include<iostream>
//#include<array>
//#include<vector>
//#include<cstring>
//#include<string>
//#include<array>
//#include<vector>
//int main()
//{
//	for (int c = 0; c <= 2; c++)
//	{
//		std::cout << c;
//	}
//	return 0;
//}
//void main()
//{
//	using namespace std;
//	//int n;
//	//cin >> n;
//	//vector<int>vi(n);
//	//vi[1] = 0;
//	//cout << vi[1];
//	array<double, 3>ao;
//	cout << "output the first grade" << endl;
//	cin >> ao[0];
//	cout << ao[0];
//}
//char* Name()
//{
//	char name[128];
//	std::cin.getline(name, 128);
//	char* nAme = new char[strlen(name) + 1];
//	strcpy(nAme, name);
//	return nAme;
//}
//char* Name1()
//{
//	char name[128];
//	std::cin.getline(name, 128);
//	char* nAme = new char[strlen(name) + 1];
//	strcpy(nAme, name);
//	return nAme;
//}
//struct cake
//{
//	char* name = Name();
//	char* name1 = Name1();
//	double diameter;
//	double weight;
//};
//
//int main()
//{
//	using namespace std;
//	cake* a = new cake;
//	cin >> a->diameter;
//	cin.get();
//	char* name;
//	char* name1;
//	name1 = a->name1;
//	name = a->name;
//	cin >> a->weight;
//	cin.get();
//	cout << a->diameter << " " << name << " " << a->weight << " " << name1;
//	delete name;
//	delete name1;
//	delete a;
//	return 0;
//}
//struct CandBar
//{
//	std::string a;
//	double b;
//	int c;
//
//};
//int main()
//{
//	CandBar snack = { "Mocha Munch",2.3,350 };
//	std::cout << snack.a << " " << snack.b << " " << snack.c << std::endl;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	char A[128];
//	char B[128];
//	string a;
//	string b;
//	cout << "input your first name" << endl;
//	cin >> A;
//	cin.get();
//	getline(cin, a);
//	cout << "input your last name" << endl;
//	cin >> B;
//	cin.get();
//	getline(cin, b);
//	cout << a << ", " << b << endl;
//	cout << A << " , " << B << endl;
//	return 0;
//}
////4.13.1
//int main()
//{
//	using namespace std;
//	cout << "What is your first name?" << " " << "__________" << "\b\b\b\b\b\b\b\b\b\b";
//	char first_name[30];
//	cin.getline(first_name, 30);
//	cout << "What is your last name?" << " " << "__________" << "\b\b\b\b\b\b\b\b\b\b\b";
//	char last_name[15];
//	cin.getline(last_name, 15);
//	cout << "What letter grade do you deserve? " << "_" << "\b";
//	char grade;
//	cout << "_" << "\b";
//	cin >> grade;
//	cout << first_name << " " << last_name << " " << (char)(grade + 1) << endl;;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	array<int, 4> a = { 1,2,3,4 };
//	vector<int> b(4);
//	b[0] = 1;
//	int i;
//	cin >> i;
//	cout << a.at(i);
//	return 0;
//}
//struct year
//{
//	int yaer;
//};
//int main()
//{
//	using namespace std;
//	year p[5];
//	year x;
//	//(p + 3)->yaer = 3;
//	year* q[5] = { p,p + 1,p + 2,&x,p + 4 };
//	cin >> x.yaer;
//	cout << q[3]->yaer << endl;
//	year** g = &q[3];
//	cout << (*g)->yaer;
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<cstring>
//char* A()
//{
//	using namespace std;
//	char* p;
//	char A[50];
//	cin >> A;
//	p = new char[strlen(A) + 1];
//	strcpy(p, A);
//	return p;
//}
//
//int main()
//{
//	using namespace std;
//	char* name;
//	name = A();
//	cout << name << endl;
//	delete[] name;
//	return 0;
//}
//char* name_return()
//{
//	using namespace std;
//	char* p;
//	char tmp[80];
//	cin >> tmp;
//	p = new char[strlen(tmp) + 1];
//	strcpy(p, tmp);
//	return p;
//}
//
//int main()
//{
//	using namespace std;
//	char* name;
//	name = name_return();
//	cout << name;
//	delete[]name;
//	return 0;
//}
//struct A
//{
//	int a;
//	double b;
//	char c[10];
//};
//int main()
//{
//	using namespace std;
//	A* hello = new A;
//	cin.get(hello->c, 10);
//	cin >> hello->a;
//	cin >> hello->b;
//	cout << hello->a << endl;
//	cout << hello->b << endl;
//	cout << hello->c << endl;
//	delete hello;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	char food[20] = "carrots";
//	strcpy(food, "nimm");
//	int a;
//	cin >> a;
//	int* b = new int[a];
//	b[0] = 9;
//	b[9] = 5;
//	b[3] = 3;
//	cout << b[3];
//	delete[] b;
//	//using namespace std;
//	//char a[20] = "ops";
//	//const char* p = "ops";
//	//cout << p << endl;
//	//cout << a;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int a;
//	cin >> a;
//	int* p = new int[a];
//	p[0] = 1;
//	p[3] = 1;
//	p[6] = 3;
//	cout << *(p + 3);
//	cout << *(p + 3);
//	cout << *(p + 3);
//	cout << *(p + 3);
//	cout << *(p + 3);
//	cout << *(p + 3);
//	delete[]p;
//	return 0;
//}
//using namespace std;
//char a[8] = { '0','1','2','3','4','5','6','7' };
//char* p = a;
//char* q = &a[3];
//cout << *(q + 1) << endl;
//return 0;
//}
//int main()
//{
//	using namespace std;
//	int tell[20] = { 1,2,3,4,5,67,8,9,8,51,23,5 };
//	int(*p)[20] = &tell;
//	cout << *((*p) + 3) << endl;
//	cout << *tell;
//	return 0;
//	//using namespace std;
//	//int* p = new int[10];
//	//int p1[10];
//	//cout << sizeof(&p) << endl;
//	//cout << sizeof(*p) << endl;
//	//cout << sizeof(p1);
//	//delete[] p;
//	//return 0;
//}
//int main()
//{
//	using namespace std;
//	int* p = new int;
//	*p = 123;
//	cout << *p << endl;
//	cout << p << endl;
//	cout << &p << endl;
//	delete(p);
//
//	//int i = 5;
//	//int* p = &i;
//	//cout << *p << endl;
//	//*p = *p + 1;
//	//cout << *p << endl;
//	//cout << i << endl;
//	return 0;
//
//}
//int main()
//{
//	using namespace std;
//	enum test { zero, one, two, three, four, five };
//	enum test1 { first, second, third };
//	test a = test(56);
//	//int c = a + 3;
//	cout << &a;
//	return 0;
//
//}
//struct test
//{
//	int a;
//	double b;
//	union
//	{
//		char id_char[36];
//		int id_num;
//	};
//};
//int main()
//{
//	using namespace std;
//	test a;
//	a.id_num = 123;
//	cout << a.id_num;
//	return 0;
//
//}
//union one4all
//{
//	int a;
//	double b;
//	float c;
//};
//
//int main()
//{
//	using namespace std;
//	one4all pail;
//	pail.a = 1;
//
//	//pail.c = 1.5;
//	cout << pail.a;
//	pail.b = 1.2;
//	cout << pail.b;
//	return 0;
//}
//struct test
//{
//	int mallo;
//	float hello;
//};
//int main()
//{
//	using namespace std;
//	test a = { 1,2.0 };
//	cout << a.hello;
//	return 0;
//
//}
//#include<iostream>
//#include<string>
//Try
//{
//	 
//}
//int main()
//#include<stdio.h>
//int main()
//{
//	while (0.3)
//	{
//		printf("hello");
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//#include<string>
//int main()
//{
//	using namespace std;
//
//	cout<<R"+*(nihao)*+";
//	//using namespace std;
//	//string a;
//	//cin >> a;
//	//cout << "the number of a has" << size(a) << endl;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	const int num = 20;
//	char ch;
//	char name1[num];
//	char name2[num];
//	char name3[num];
//	cout << "output the number!" << endl;
//	cin.get(name1, num).get(ch);
//	cin.get(name2, num).get();
//	cout << name1 << endl;
//	cout << name2 << endl;
//	cin.getline(name3, num);
//	cout << name3 << endl;
//	return 0;
//}
//int main()
//{
//	const int number = 15;
//	using namespace std;
//	char str[number];
//	cout << "input the str you want to know _____\b\b\b\b\b";
//	cin.getline(str, number);
//	char text[number];
//	cin.getline(text, number);
//	cout << "the number is " << str << "   " << text << endl;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//
//	//using namespace std;
//	//cout << "hello"  "wrold" << endl;
//	//return 0;
//}
//int main()
//{
//	using namespace std;
//	int A[3]{ 2,3,5 };
//	cout << A << endl;
// 
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	int choose;
//	double oil;
//	double mile;
//	double kilo;
//	double o_m;
//	double k_o;
//	cout << "choose the method you want to use and the only number you can input are zero,one :____\b\b\b\b";
//	cin >> choose;
//
//	if (choose == 0)
//	{
//		cout << "Please input the oil and the mile" << endl;
//		cin >> oil;
//		cin >> mile;
//		o_m = mile / oil;
//		cout << "one oil have " << o_m << " miles" << endl;
//	}
//	if (choose == 1)
//	{
//		cout << "Please input the oil and the kilometer" << endl;
//		cin >> oil;
//		cin >> kilo;
//		k_o = oil / kilo;
//		k_o *= 100;
//		cout << "hundred kilo will spent " << k_o << " oil" << endl;
//		cout << "Do you want to know the USA's method?" << endl;
//		cout << "if yes please input one,else please input 0" << endl;
//		int der;
//		cin >> der;
//		if (der == 1)
//		{
//			double litre;
//			double mile;
//			double x;
//			litre = oil * 3.785;
//			mile = kilo * 62.14;
//			x = mile / litre;
//			cout << "The measure is " << x << endl;
//		}
//	}
//	return 0;
//}
//符号常量	1.#define x 128
//			2.类似const int x
//int main()
//{
//	using namespace std;
//	const int c_d = 60;
//	const int s_s = 60;
//	double degree;
//	int minutes;
//	int sec;
//	cout << "Please input degress" << "____\b\b\b\b";
//	cin >> degree;
//	cout << "Please input minutes" << "____\b\b\b\b";
//	cin >> minutes;
//	cout << "Please input sec" << "____\b\b\b\b";
//	cin >> sec;
//	degree += (double)minutes / c_d;
//	degree += (double)sec / (c_d * s_s);
//	cout << "The output is:" << degree << endl;
//	return 0;
//}
//int main()
//{
//	using namespace std;
//	const double change = 12;//const double changeh 转换因子
//	cout << "Please input the height of your:____\b\b\b\b";
//	double feet;
//	cin >> feet;
//	double inch;
//	inch = feet / 12;
//	feet = feet - (int)inch * change;
//	cout << "The inch:" << (int)inch << " and the feet is " << feet;
//	return 0;
//}