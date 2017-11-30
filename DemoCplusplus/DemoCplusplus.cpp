// DemoCplusplus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
	cout << "welcome to git\n" << endl;

	cout << "Please enter expression (we can handle + and –): ";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval; // read something like 1 + 3
	if (op=='+')
		res = lval + rval; // addition
	else if (op == '–')
		res = lval - rval; // subtraction


cout << "Result: " << res << '\n';
    return 0;
}

