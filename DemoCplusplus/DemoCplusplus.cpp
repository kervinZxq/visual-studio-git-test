// DemoCplusplus.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
	cout << "welcome to git\n" << endl;

	cout << "Please enter expression (we can handle + and �C): ";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval; // read something like 1 + 3
	if (op=='+')
		res = lval + rval; // addition
	else if (op == '�C')
		res = lval - rval; // subtraction


cout << "Result: " << res << '\n';
    return 0;
}

