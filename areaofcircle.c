
#include <stdio.h>


float areaofCircle(float r)
{
  r =r*r*3.14;

  return r;
  
}

int main()
{
  for(float i=3.5; i<13; i=i+0.5){
     float c = areaofCircle(i);
     printf("The rad of a is %f The area is %f\n,",i, c );
  }
}
