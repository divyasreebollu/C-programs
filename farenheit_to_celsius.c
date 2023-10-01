#include<stdio.h>
float farenheit_to_celsius(float f)
{
	return ((f-32.0)*5.0/9.0);
}
int main()
{
	float f=40;
	printf("Temperature in degree of farenheit_to_celsius: %0.2f",farenheit_to_celsius(f));
	return 0;
}

Temperature in degree of farenheit_to_celsius: 4.44
