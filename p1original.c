#include <stdio.h>

/* p is base 
   q is height
   
   r is area */

void input(float *p, float *q);
float areaTriangle(float p , float q, float *r);
void output(float p, float q, float r);

int main()
{
  float a,b,c;

  input(&a,&b);
  areaTriangle(a,b,&c);

  output(a,b,c);

  return 0;
}

void input(float *p, float *q)
{
  printf("Enter the base of the triangle: ");
  scanf("%f",p);

  printf("\nEnter the height of the triangle: ");
  scanf("%f",q);
}


float areaTriangle(float p , float q, float *r)
{
  *r = ( (p*q) / 2);

   return *r;
}


void output(float p, float q, float r)
{
  printf("\nThe height is %.2f and base is %.2f.\n",p ,q );
  printf("\nThe area of the triangle = %.2f\n",r);
}
