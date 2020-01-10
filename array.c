#include <stdio.h>





int arrayAdd(int* arr, int s, int n)
{
  
  for(int i = 0; i<s+1;i++){
    arr[i]=i*n; 
    printf("function running %d\n",arr[i]);

  }
}

int main()
{
int arr[100];
  for(int i=0;i<100;i++)
  {
  arr[i]=i*i;
  }
  printf("index 4: %d index 8: %d\n", arr[4],arr[8]);
  arrayAdd(arr,50,10);
  return 0;
}
