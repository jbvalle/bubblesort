#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"
#include "randomizer.h"

void show_random_array(int *random_array, int abs_rand_range){

  for (int i = 0; i < abs_rand_range; i++) {
    printf("%d ", random_array[i]);
  }
  printf("\n");
}

int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    int *random_array;
    int abs_rand_range;

    printf("Type number of elements: \n");
    scanf("%d", &abs_rand_range);getchar();

    random_array = (int*)malloc(abs_rand_range*sizeof(int));
    random_array = randomizer(abs_rand_range);

    printf("\nRandom Field: \n");
    show_random_array(random_array,abs_rand_range);

    printf("\nBubble Sorted Increasing: \n");
    int* bubble_sort = bubblesort_increasing(random_array, abs_rand_range);
    show_random_array(bubble_sort,abs_rand_range);

    printf("\nBubble Sorted Decreasing: \n");
    int* bubble_sort_reverse = bubblesort_decreasing(random_array, abs_rand_range);
    show_random_array(bubble_sort_reverse,abs_rand_range);
    printf("\n");

    return 0;
}
