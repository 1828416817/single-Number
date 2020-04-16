#include <stdio.h>
#include <math.h>
#include "stdlib.h"
int single(int* nums, int numsSize){

   int counts1[100]={0};
    int counts2[100]={0};
  for(int i;i<numsSize;i++)
  {
      if(nums[i]>=0)
      {
          counts1[nums[i]]++;
      }
      else
      {
          int t=abs(nums[i]);
          counts2[t]++;
      }
    
  }
 for(int i=0;i<numsSize;i++)
 {
     
   if(nums[i]>=0)
   {
       if(counts1[nums[i]]==1)
       {
           return nums[i];
       }
     
   }
     else
     {
        int  n=abs(nums[i]);
         if(counts2[n]==1)
         {
             return nums[i];
         }
     }
 }
return 0;
}
int main(void) {
  int a[3]={-1,-1,2};
  int c=single(a,3);
  printf("%d",c);
  return 0;
}

