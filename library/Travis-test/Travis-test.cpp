#include "Travis-test.h"

Travis_test::Travis_test()
{
	a = 0;
	b = 0;
}

int Travis_test::calculate() {
	a++;
	b++;

	return product(a, b);
}

int Travis_test::product(int x, int y) {
	
	return x*y;
}

