#include<stdio.h>
int main()
{
  int n,i,j,temp;
  int arr[100];
  printf("Enter the no. of elements in array:\t");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0; i<n; i++)
  {
    printf("Element[%d]\t",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=0; i<n-1 ; i++)
  {
    for(j=0; j<n-1-i; j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  printf("The desired sorted array is :\t");
  for(i=0; i<n ; i++)
  {
    printf("%d\t",arr[i]);
  }
  return 0;
}