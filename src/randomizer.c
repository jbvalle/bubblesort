#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randomizer(int abs_rand_range) {

  int x;
  int* random_array;

  random_array = (int*)malloc(abs_rand_range*sizeof(int));

  srand(time(NULL));

  for (int i = 0; i < abs_rand_range;) {

    int r=rand()%abs_rand_range+1;

    for (x = 0; x < i; x++)
    {
        if(random_array[x]==r){
            break;
        }
    }
    if(x==i){
        random_array[i++]=r;
    }
  }

  return random_array;
}
