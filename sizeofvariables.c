#include<stdio.h>

int main()
{
  int a = 545;
float f=5.45;
char c='a';
double d =5.45;
short int s=545;
long int l=545;



  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
 printf("float f value: %f and size: %f bytes\n", f, sizeof(f));
 printf("char c value: %c and size: %c bytes\n", c, sizeof(c));
 printf("double d value: %if and size: %if bytes\n", d, sizeof(d));
 printf("short int s value: %d and size: %d bytes\n", s, sizeof(s));
 printf("long int l value: %d and size: %d bytes\n", l, sizeof(l));
}

