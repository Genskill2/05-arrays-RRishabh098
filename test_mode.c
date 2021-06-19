#include <stdio.h>
#include <assert.h>


int mode(int array[], int size){
  int count[20] = {0};
  for(int i = 0; i < size; i++){
    if(array[i] < 0) count[(array[i]*(-1))+10]++;
    else count[array[i]]++;
  }
  int max = -1, mode;
  for(int i = 0; i < 20; i++){
    if(count[i] > max){
      max = count[i];
      mode = i;
    }
  }
  if (mode > 10) return (mode-10)*(-1);
  else return mode;
}

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
