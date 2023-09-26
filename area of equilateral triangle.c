#include<stdio.h>
int main()
{
  float area,a;
  printf("enter the side: ");
  scanf("%f",&a);
  area=(sqrt(3)/4)*a*a;
  printf("Area of triangle:%f\n",area);
  return 0;
}
