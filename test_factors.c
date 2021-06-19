#include <stdio.h>
#include <assert.h>


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

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
