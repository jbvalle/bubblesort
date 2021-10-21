#include <stdio.h>
#include <stdlib.h>
//#include <time.h> //for srand()
int randomizer(int);

int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    int sorting_area[100];
    int inital_value_buffer;
    int detection_flag = 0;

    for (int i = 0; i < 100; i++) {
      //Generating random numbers -> assigning to sorting_area
      sorting_area[i] = randomizer(100);
      printf("%d ", sorting_area[i]);
    }

    printf("\n\n\n");

    for (int z = 0; z < 100; z++) {
      for (int j = 0; j < 100; j++) {

        if (sorting_area[j] > sorting_area[j + 1]){

          inital_value_buffer = sorting_area[j];
          sorting_area[j] = sorting_area[j + 1];
          sorting_area[j + 1] = inital_value_buffer;
        }
      }
    }

    for (int k = 0; k < 100; k++) {
      printf("%d ", sorting_area[k]);
    }

    return 0;
}

//Generates random number area
//input_rand_area determines max value for random numbers from
//0 .... input_rand_area
int randomizer(int input_rand_area){

  //srand sets rand seed from current time to generate random number
  //srand(time(0));
  float rand_num = (rand() % 100) + 1;

  return rand_num;
}
