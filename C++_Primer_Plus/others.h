#pragma once
#include<stdlib.h>
#include<iostream>
#include<string>
#include "test1.h"
using namespace std;


bool operator>(const test1& s, const test1& a)
{
	if (strcmp(s.str, a.str) > 1)
		return false;


}