// main.cpp
// find the next triangular and perfect square number, that is larger than 1225.

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

const long int START = 1225;

bool isSquare(long int n);
bool isTriangular(long int n);

int main() {
	bool pass = false;
	long int n = START;
	while (!pass) {
		n++;
		pass = isSquare(n) && isTriangular(n);
	}
	cout << n << endl;
	return 0;
}

bool isTriangular(long int s) {
	long int n = (long int)(sqrt(2 * s));
	if (n * (n +1) / 2 == s)
		return true;
	return false;
}

bool isSquare(long int n) {
	long int i = (long int)(sqrt(n));
	if (i * i == n)
		return true;
	return false;
}
