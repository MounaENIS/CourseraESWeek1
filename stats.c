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

  sort_array(test, SIZE);

  print_array(test, SIZE);
  
  
 
  printf ("max = %d \n", find_maximum(test, SIZE));
  
  
  printf ("min = %d \n", find_minimum(test, SIZE));
  
  printf ("mean = %d \n", find_mean(test, SIZE));
  
  printf ("median = %d \n", (int)(find_median(test, SIZE)));
	

}

/* Add other Implementation File Code Here */
void swap(unsigned char* xp, unsigned char* yp)
{
    
}

void sort_array(unsigned char *array, int length)
{
	
}


double find_median(unsigned char *array, unsigned int length)
{
	
	
} 


int find_mean(unsigned char *array, unsigned int length) 
{
	
}


unsigned char find_maximum(unsigned char *array, int length) 
{
}

unsigned char find_minimum(unsigned char *array, int length)
{
	
}


void print_array(unsigned char *array, unsigned int length) 
{
	
}

