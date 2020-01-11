#include <stdio.h>









/*

int main()

{	

  char input[256], name[256];

  int age;

  

  printf("What is your name?\n");

  fgets(input, 256, stdin);

  sscanf(input, "%s", name);



  printf("Hello %s. How old are you?\n", name);

  while (1)

  {

    fgets(input, 256, stdin);

    if (sscanf(input, "%d", &age) == 1) break;

    printf("Not a valid age - try again!\n");

  }

  

  printf("Hi %s, you look young for %d…\n", name, age);

}

*/

int main(int argc, char* argv[])

{

  float arg1;

  float arg2;

  int check = 2;


 

   int lower =sscanf(argv[1],"%f", &arg1);
   int upper =sscanf(argv[2],"%f", &arg2); 

if (arg2<arg1){
float temp =arg1;
arg1 =arg2;
arg2 =temp;

}
   





printf("%f  %f\n",arg1,arg2);

  for(float i =arg1;i<arg2+1;i++)

  {

    float area = i*i*3.14;

    printf("The radius is %f and the area is %f\n", i,area); 

  }

}
