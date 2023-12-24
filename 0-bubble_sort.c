#include "sort.h"

/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */

void bubble_sort(int *array, size_t size){


    int t ;
    size_t i , x;

    if (!array || !size){
        return;
    }

    i = 0;
    while (i < size)
    {
        for (x = 0 ; x < size - 1 ; x++)
        {
            if (array[x] > array[x + 1])
            {
                t = array[x];
                array[x] = array[x + 1];
                array[x + 1] = t;
                print_array(array, size);
            }
            
        }
        i++;
    } 
}

