
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

// By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even - valued terms.

#include <iostream>
#include "utils.h"
using namespace std;




int main() {


	int N = 4000000;
	int sum = 0;
	int i = 1;

	while (fibo(i) <= N) {
		if (fibo(i) % 2 == 0) {
			sum = sum + fibo(i);
		}
	    i++;
	}
	
	cout << "The sum of even fibonaccie numbers is " << sum << endl;
	system("pause");
	return 0;

}