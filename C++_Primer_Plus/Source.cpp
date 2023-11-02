#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	char c;
	cin.get(c);
	int count = 0;
	while (c != '#')
	{
		cout << c;
		count++;
		cin.get(c);
	}
	cout << endl << count;
	return 0;
}
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