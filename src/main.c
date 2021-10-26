#include <stdio.h>
#include <stdlib.h>
#include "../include/bubblesort.h"
#include "../include/randomizer.h"

void show_random_array(int *random_array, int sizeof_array){

  for (int i = 0; i < sizeof_array; i++) {
    printf("%d ", random_array[i]);
  }
  printf("\n");
}

int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    int *random_array;
    int abs_rand_range, sizeof_array;

    printf("Type total range of random numbers: \n");
    scanf("%d", &abs_rand_range);getchar();
    printf("Type number of elements to be sorted: \n");
    scanf("%d", &sizeof_array);getchar();

    random_array = (int*)malloc(abs_rand_range*sizeof(int));

    random_array = randomizer(abs_rand_range);

    printf("\nRandom Field: \n");
    show_random_array(random_array,sizeof_array);

    printf("\nBubble Sorted Increasing: \n");
    int* bubble_sort = bubblesort_increasing(random_array, sizeof_array);
    show_random_array(bubble_sort,sizeof_array);

    printf("\nBubble Sorted Decreasing: \n");
    int* bubble_sort_reverse = bubblesort_decreasing(random_array, sizeof_array);
    show_random_array(bubble_sort_reverse,sizeof_array);
    printf("\n");

    return 0;
}
