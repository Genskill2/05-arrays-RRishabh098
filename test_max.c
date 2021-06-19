#include <stdio.h>
#include <assert.h>


int max(int nums[], int size){
  int max = 0;
  for(int i = 0; i < size; i++){
    if(nums[i] > max) max = nums[i];
  }
  return max;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
