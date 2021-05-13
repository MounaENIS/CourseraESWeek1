/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <The main code>
 *
 * <This code can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. This code allows also to reorder this data set from large to small. All statistics are rounded down to the nearest integer. >
 *
 * @author <Mouna Baklouti>
 * @date <11/05/2021>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	
  print_statistics(test,SIZE);


  sort_array(test, SIZE);

  print_array(test, SIZE);
	

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *test,int size) {

	printf("Median is %d\n", find_median(test, size));
	printf("Mean is %d\n", find_mean(test, size));
	printf("Maximum is %d\n", find_maximum(test, size));
	printf("Minimum is %d\n", find_minimum(test, size));



}





void swap(unsigned char* xp, unsigned char* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_array(unsigned char *array, int length)
{
	int min_idx =0;
  /*SORT*/
  for (int i = 0; i <length - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (int j = i + 1; j < length; j++)
            if (array[j] > array[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&array[min_idx], &array[i]);
	}
}


double find_median(unsigned char *array, unsigned int length)
{
	double median =0;
	if (length % 2 != 0)
        median = array[length / 2];
  
    else median = (double)(array[(length - 1) / 2] + array[length / 2]) / 2.0;
   
    
    return median;
   
	
} 


int find_mean(unsigned char *array, unsigned int length) 
{
	int mean =0;
  for (int i=0;i<length;i++)
  {
	  mean = mean + array[i]  ;
  }
  
  mean = mean / length;
  return mean;
 	
}


unsigned char find_maximum(unsigned char *array, int length) 
{
	 unsigned char max = array[0];
  for (int i=1;i<length;i++)
  {
	  if (array[i] > max) max = array[i];
	 
	  
  }
   return max;
}

unsigned char find_minimum(unsigned char *array, int length)
{
	unsigned char min = array[0];
  for (int i=1;i<length;i++)
  {
	  if (array[i] < min) min = array[i];  
  }
  return min;
}


void print_array(unsigned char *array, unsigned int length) 
{
	for (int i=0;i<length;i++)
	{
		printf ("Array[%d]=%d \n",i,array[i]);
	}
}

