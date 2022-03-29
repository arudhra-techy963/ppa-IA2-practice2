#include <stdio.h>

typedef struct _triangle
{
  float base;
  float altitude;
  float area;
}triangle;

triangle input();
void area(triangle *t);
void output(triangle t);

int main()
{
  triangle tri;
  tri = input();
  area(&tri);
  output(tri);

  return 0;
}

triangle input()
{
  triangle t;
  printf("Enter base: ");
  scanf("%f", &t.base);

  printf("Enter altitude: ");
  scanf("%f", &t.altitude);
  return t;
}

void area(triangle *t)
{
  t -> area = 0.5 * (t -> base)*(t -> altitude);
}

void output(triangle t)
{
  printf("Altitude = %.3f\n", t.altitude);
  printf("Base = %.3f\n", t.base);
  printf("The area of the triangle = %.3f", t.area);
}