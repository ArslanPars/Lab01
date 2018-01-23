
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float a = 16.01f , b = 2.19f , x = -8.23f  ;
	double y = sin(a*x) / (b - x) * exp(2 - powf(b-x, 1.0/5));
	printf("Result: %.5f\n", y);
	getchar();
	return 0;
}

