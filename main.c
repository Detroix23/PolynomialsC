#include "main.h"

int main() {
	printf("# Polynomials.\n");	
	struct quadratic e1 = {
		1,
		2,
		0,
	};
	double r1[2];
	printf("In:  %lfx^2 + %lfx + %lf;\n", e1.a, e1.b, e1.c);

	solve(e1, r1);
	printf("Results: %lf, %lf;\n", r1[0], r1[1]);
	return 0;
}

