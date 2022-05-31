#include<stdio.h>
float sum(int n, double* x_p);

int main(void)
{
	double a[5] = { 1.56, 3.24,5.24,3.24,6.23 };
	int count = 5;
	float value;
	value = sum(count, &a[0]);
	printf("‘˜a@@%f\n", value);
	return 0;
}

float sum(int n, double* x_p)
{
	int i;double s;
	s = 0;
	for (i = 0; i < n; i++)
	{
		s += *x_p;
		x_p++;
	}
	return s;
}