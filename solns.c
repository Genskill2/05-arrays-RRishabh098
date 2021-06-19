/* Enter your solutions in this file */
#include <stdio.h>

float average(int array[], int size){
  int sum = 0;
  for(int i = 0;  i < size; i++) sum += array[i];
  return (float)sum/size;
}

int factors(int num, int factors[]){
  int primes[6] = {2, 3, 5, 7, 11, 13};
  int index_factors = 0, index_primes = 0;
  int count_factors = 0;

  while (num > 1){
    if(num % primes[index_primes] == 0){
      factors[index_factors++] = primes[index_primes];
      count_factors++;
      num /= primes[index_primes];
    }
    else
      index_primes++;
  }
  
  return count_factors;
}

int max(int nums[], int size){
  int max = 0;
  for(int i = 0; i < size; i++){
    if(nums[i] > max) max = nums[i];
  }
  return max;
}

int min(int nums[], int size){
  int min = 10000;
  for(int i = 0; i < size; i++){
    if(nums[i] < min) min = nums[i];
  }
  return min;
}

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
