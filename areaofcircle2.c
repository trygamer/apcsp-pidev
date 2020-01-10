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
  int arg1 =1 ;
  int arg2 = 2;
  int check = 2;
  while(check==2||3)
  {
    if(sscanf(input, "%d",arg1){
    check++;
    } 
  } 


printf("%d  %d",argv[arg1],argv[arg2]);
  for(int i =argv[arg1];i<argv[arg2]+1;i++)
  {
    int area = i*i*3.14;
    printf("The radius is %d and the area is %d\n", i,area); 
  }
}
