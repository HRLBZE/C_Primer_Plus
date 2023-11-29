#ifndef mind
#define mind 1
#include <iostream>
#include<string>
class Stack
{
public:
	void acquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price = 7);
	void show();
	void Test();
	Stack();
	Stack(int n);
	~Stack();
	void TEst() const;
private:
	double share_val;
	double total_val;
	long shares;
	int test1;
	int test2;
	std::string company;
	void set_tot()
	{
		total_val = shares * share_val;
	}
};

// void Stack::Prin(int c)
//{
//	 std::cout << c;
//}

#endif