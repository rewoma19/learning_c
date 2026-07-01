#include "math.h"
#include "diff.h"

unsigned int sum_of_squares(unsigned int n){
  return (n * (n + 1) * ((2 * n) + 1)) / 6;
}

unsigned int square_of_sum(unsigned int n){
  unsigned int sum_of_n_nums = (n * (n + 1)) / 2;
  return pow(sum_of_n_nums, 2);

}

unsigned int difference_of_squares(unsigned int n){
  return square_of_sum(n) - sum_of_squares(n);
}