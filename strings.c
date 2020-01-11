#include <stdio.h>

#include <string.h>







int main()

{
/*
  // str1 is a pointer to a constant - cannot change the contents of str1

  char* str1 = "hello1";

  

  printf("str1 : %s\n", str1);



  // DO NOT DO THIS - attempt to modify a character in a string constant

  //   compiler will not complain though

  //*(str1 + 3) = 'c';





  

  // str2 is an array which holds a copy of the string constant

  char str2[7] = "hello2";

  

  printf("str2 : %s\n", str2);



  char* str2p = str2;

  *(str2p + 3) = 'c';  // OK to modify array

  printf("str2 : %s\n", str2p);

  



  

  // str3 is also an array which holds a copy of the constant

  //   intialized to hold the string length

  char str3[] = "this is a test";

  printf("str3 : %s\n", str3);



  str3[3] = 'f';

  printf("str3 : %s\n", str3);

*/

char mystr1[200];



for(int i=0;i<26;i++)

{  mystr1[i] = 'a'+i;

  

}

mystr1[28]="\0";



char mystr2[27]="abcdefghijklmnopqrstuvxyz\n";
 printf("Second String: %s\n",mystr2);
if(strcmp(mystr1,mystr2) == 0)

{

  printf("they are the same\n");

}

for(int i=0;i<26;i++) 

{

  mystr1[i] = 'A'+i;

 

}
 printf("Changed First String %s\n",mystr1);

mystr1[28]="\0";

if(strcmp(mystr1,mystr2) == 0)

{

  printf("something is wrong");

}
else{printf("they are different");}

char mystr3 [200];



strcpy(mystr3, mystr2);

 strcat(mystr3,mystr1);

printf("First String: %s , Second String: %s , Third String %s\n",mystr1,mystr2,mystr3);



}
