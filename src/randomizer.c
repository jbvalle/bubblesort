#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randomizer(int abs_rand_range) {

  int matching_flag;
  int* random_array;

  random_array = (int*)malloc(abs_rand_range*sizeof(int));

  //Initializing random_array with NULL
  for (int i = 0; i < abs_rand_range; i++) random_array[i]= 0;

  //Assigning numbers 1 to abs_rand_range to random memory Locations
  for(int number = 1; (matching_flag != 1); number++){

      //Generating Random number from 0 to abs_rand_range
      srand(clock());
      int memory_location = (rand() % abs_rand_range);

      //Analyzing free random memory location
      for (int i = 1; (random_array[memory_location] != 0)&&(i < abs_rand_range); i++) {
        memory_location = (memory_location + 1) % abs_rand_range;
      }
      random_array[memory_location] = number;


      matching_flag = 0;
      //Checking for duplicates in random_array
      //Break if all memory location have been assigned
      for (int h = 0; h < abs_rand_range; h++){

        if(random_array[h] == 0){
          matching_flag = 0;
          break;
        }else {
          matching_flag = 1;
        }
      }

  }

  return random_array;
}
