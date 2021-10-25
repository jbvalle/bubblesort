#include <stdio.h>
#include <stdlib.h>

int *bubblesort_increasing(int *random_array, int abs_rand_range){

  for (int i = 0; i < abs_rand_range-1; i++) {

    int allignment_flag = 0;

    for (int j = 0; j < abs_rand_range-1; j++) {

      if (random_array[j] > random_array[j + 1]){

        int initial_value_buffer = random_array[j];
        random_array[j] = random_array[j + 1];
        random_array[j + 1] = initial_value_buffer;
        allignment_flag = 1;
      }
    }
    //Once all numbers have been ordered break the loop
    if (allignment_flag == 0) break;
  }
  return random_array;
}

int *bubblesort_decreasing(int *random_array, int abs_rand_range){

  for (int i = 0; i < abs_rand_range-1; i++) {

    int allignment_flag = 0;

    for (int j = 0; j < abs_rand_range-1; j++) {

      if (random_array[j] < random_array[j + 1]){

        int initial_value_buffer = random_array[j];
        random_array[j] = random_array[j + 1];
        random_array[j + 1] = initial_value_buffer;
        allignment_flag = 1;
      }
    }
    //Once all numbers have been ordered break the loop
    if (allignment_flag == 0) break;
  }

  return random_array;
}
