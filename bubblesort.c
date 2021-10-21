#define num_of_rand 100

#include <stdio.h>
#include <stdlib.h>

int randomizer(int);
void show_sorting_area(int sorting_area[]);

int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    int sorting_area[num_of_rand];
    int inital_value_buffer;
    int detection_flag;

    for (int i = 0; i < num_of_rand; i++) {
      //Generating random numbers -> assigning to sorting_area
      sorting_area[i] = randomizer(num_of_rand);
      printf("%d ", sorting_area[i]);
    }

    printf("\n\n\n");

    for (int z = 0; z < num_of_rand-1; z++) {

      detection_flag = 0;

      for (int j = 0; j < num_of_rand-1; j++) {

        if (sorting_area[j] > sorting_area[j + 1]){

          inital_value_buffer = sorting_area[j];
          sorting_area[j] = sorting_area[j + 1];
          sorting_area[j + 1] = inital_value_buffer;
          detection_flag = 1;
        }
      }
      if (detection_flag == 0) break;
      show_sorting_area(sorting_area);
      printf("\n");
      printf("\n\nItterations: %d\n", z);
    }


    show_sorting_area(sorting_area);
    return 0;
}

//Generates random number area
//input_rand_area determines max value for random numbers from
//0 .... input_rand_area
int randomizer(int num){

  //srand sets rand seed from current time to generate random number
  //srand(time(0));
  float rand_num = (rand() % num) + 1;

  return rand_num;
}

void show_sorting_area(int sorting_area[]){

  for (int k = 0; k < num_of_rand; k++) {
    printf("%d ", sorting_area[k]);
  }
  printf("\n"); 
}
