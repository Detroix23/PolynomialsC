#include <stdio.h>
#include <math.h>
#include <float.h>
#include "definitions.h"
#include "quadratic.h"


/*
 * Function: Solve a quadratic equation
 * Args:
 * @equation quadratic: list of a, b, c.
 * @result_buffer double[]: list of solutions x1, x2 or x0, x0
 */
void solve(struct quadratic equation, double result_buffer[]) {
	double delta = equation.b * equation.b - 4 * equation.a * equation.c;
	if (delta > 0) {
		result_buffer[0] = (-equation.b - sqrt(delta)) / 2 * equation.a;
		result_buffer[1] = (-equation.b + sqrt(delta)) / 2 * equation.a;
	} else if (delta == 0) {
		double x0 = -equation.b / 2 * equation.a;
		result_buffer[0] = x0;
		result_buffer[1] = x0;
	} else {
		result_buffer[0] = DBL_MAX;
		result_buffer[1] = DBL_MAX;
	}
}

