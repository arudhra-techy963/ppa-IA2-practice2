#include <stdio.h>

int input();
int is_composite(int n);
void output(int n, int composite);

int main()
{
    int x, result;
    x = input();
    result = is_composite(x);
    output(x, result);
	return 0;
}

int input()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  return a;
}

int is_composite(int n)
{
    int composite;

    if(n == 2 || n == 3 || n == 5 || n == 7)
		composite=0;

	else if(n%2==0)
		composite=1;

	else if(n%3==0)
		composite=1;

	else if(n%5==0)
		composite=1;

	else if(n%7==0)
		composite=1;

	else
		composite=0;

    return composite;
}

void output(int n, int composite)
{
    (composite?printf("%d is a composite number",n):(printf("%d is not a composite number",n)));
}








