#include <stdio.h>











void arrayAdd(int* arr, int s, int n)

{

  

  for(int i = 0; i<s+1;i++){

    arr[i]=i*n; 

  


  }

}



int main()

{

int arr[100];

  for(int i=0;i<100;i++)

  {

  arr[i]=i*i;

  }

  printf("For first Assignment index 4: %d index 8: %d\n", arr[4],arr[8]);

  arrayAdd(arr,50,10);
  
  printf("Testing Array Function with incremenent 10 index 4: %d index 8: %d\n",arr[4],arr[8]); 
  
  

  return 0;

}
