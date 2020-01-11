#include <stdio.h>
int main()

{



  int a;

  int* ptrtoa;



  ptrtoa = &a;



  a = 5;

  printf("The value of a is %d\n", a);



  *ptrtoa = 6;

  printf("The value of a is %d\n", a);



  printf("The value of ptrtoa is %d\n", ptrtoa);

  printf("It stores the value %d\n", *ptrtoa);

  printf("The address of a is %d\n", &a);



float d = 10;

float e =20;



float* ptrtod = &d;



printf("The value of d is %f  The address of d is %d \n", d, &d);

float* ptrtoe = &e;



printf("The value of e is %f  The address of e is %d\n", e, &e);



ptrtod = 10;

ptrtoe  =20;









int temp = ptrtod;



 ptrtod= ptrtoe;

 ptrtoe = temp;
printf("After Swap E is %d  and D is %d ", ptrtoe,ptrtod);




}
