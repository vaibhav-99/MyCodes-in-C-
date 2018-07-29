#include<stdio.h>
// #sort_lgani_hai

int main()
{
printf("Enter Size of Array : ");
int n;

scanf("%d",&n);
int a[n];

printf("Enter elements of Array :");

for(int i=0 ; i<n ; i++)
 scanf("%d",&a[i]);

 bubbleSort(a,n);                               // Passing array by value still it's working (Although it's call by reference XD)
                                                // Hence Array can never be passed by value :o
 printf("Sorted Array : ");

 for(int i=0 ; i<n ; i++)
  printf("%d ",a[i]);

return 0;
}

void bubbleSort(int b[] , int size)
{
  for(int i=0 ; i < size-1 ; i++)
 {
   for(int ptr=0 ; ptr < size-i-1 ; ptr++)
  {
    if(b[ptr] > b[ptr+1])
    {
     int temp = b[ptr];
     b[ptr] = b[ptr+1];
     b[ptr+1] = temp;
    }
  }
 }
 printf("Sorted!\n");
}
