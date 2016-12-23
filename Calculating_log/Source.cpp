#include<stdio.h>
#include<math.h>

int main(int argc, wchar_t* argv[]) {

	double a = 942992326, b = 11.562346;

	double r;  //9.553112

	r = log(a) / log(b);

	double aa = a;
	double ri = 0.0;

	while (aa > b){aa /= b; ri++;}

	double p = 1.0;
	for (int i = 0; i < 60; i++) {
		aa *= aa;
		p /= 2.0;
		if (aa > b) { ri += p; aa /= b; }
	}

	printf("\n%lf\n", ri);

	printf("\n%lf\n", r);

}