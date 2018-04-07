#include <cmath>

int factorial(int n)
{
    int i, x = 1;
    for (i = 1; i <= n; i++)
    {
        x *= i;
    }
    return x;
}

float pythagoreanTheorem ( float a,float b)
{

float result;


       result =  sqrt(a*a+b*b);

       return result;
}

int delta (float a, float b, float c)
{
    double delta;

    delta=(b*b)-(4*a*c);

    return delta;
}

int tribonacciSequence(int n)
{
	int a=0,b=1,c=2,d;

	for(int i=0;i<n-3;i++){
		d = a + b + c;

		a = b;
		b = c;
		c = d;

	}
	return d;
}

float Power(float b, int p)
{
        float Return = 1;
        if ( p > 0)
               for (int i = 0; i < p; i++)
                      Return *= b;
        else
               for (int i = 0; i > p; i--)
                      Return /= b;
        return Return;
}
