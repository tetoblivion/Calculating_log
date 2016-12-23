#include<stdio.h>
#include<math.h>

int main(int argc, wchar_t* argv[]) {

	double a = 92992326, b = 11.562346;

	double r;  //9.553112

	r = log(a) / log(b);

	double aa = a;
	double ri = 0.0;

	double ib = 1.0 / b; // multiplying by an inverse is much faster than division

	while (aa > b){aa *= ib; ri++;}

	double p = 1.0;
	for (int i = 0; i < 60; i++) {
		aa *= aa;
		p /= 2.0;
		if (aa > b) { ri += p; aa *= ib; }
	}

	printf("\n%lf\n", ri);

	printf("\n%lf\n", r);

}