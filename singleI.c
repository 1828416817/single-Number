#include <stdio.h>
#include <math.h>
#include "stdlib.h"
int singleNumber(int* nums, int numsSize){
int n=nums[0];
    for(int i=1;i<numsSize;i++)
        {
           n^= nums[i];
        }
    return n;
}
int main(void) {
  int a[3]={1,1,2};
  int c=singleNumber(a,3);
  printf("%d",c);
  return 0;
}
 
