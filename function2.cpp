#include <iostream>
#include "utils.h"
using namespace std;

int fibo(int N) {
	int fibo1 = 1;
	int fibo2 = 2;
	int fibo3 = 3;
	if (N == 1 || N == 2)
	    return fibo1;
	else if (N == 3)
		return fibo2;
	else if (N == 4)
		return fibo3;
	else
	{
		for (int i = 5;i < N + 1;i++) {
			fibo1 = fibo2;
			fibo2 = fibo3;
			fibo3 = fibo1 + fibo2;
		}
	    return fibo3;
	}
}