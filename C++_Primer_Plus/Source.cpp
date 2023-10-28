#include<iostream>
int main()
{
	using namespace std;
	int tell[20] = { 1,2,3,4,5,67,8,9,8,51,23,5 };
	int(*p)[20] = &tell;
	cout << *((*p) + 3) << endl;
	cout << *tell;
	return 0;
	//using namespace std;
	//int* p = new int[10];
	//int p1[10];
	//cout << sizeof(&p) << endl;
	//cout << sizeof(*p) << endl;
	//cout << sizeof(p1);
	//delete[] p;
	//return 0;
}

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