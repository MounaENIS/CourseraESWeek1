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
 * @file <stats.h> 
 * @brief <it is the header file of the stats.c code>
 *
 * <This header file includes the declaration and description of all functions needed to run the stats.c program>
 
 * @author <Mouna Baklouti>
 * @date <11/05/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void swap(unsigned char* xp, unsigned char* yp);
/**
 * @brief exchange between two data in the array
 *
 * This function takes as input two data from the array and exchange them. The array will be     
 * modified so that the two varaibales are exchanged.
 *
 * @param xp The first variable
 * @param yp The second variable
 *
 * @return the two variables are exchanged
 */

double find_median(unsigned char *array, unsigned int length);
/**
 * @brief find_median
 *
 * This function finds the median of the array
 *
 * @param array The data array 
 * @param length The size of the array
 *
 * @return the median rounded down to the nearest integer
 */


void print_array(unsigned char *array, unsigned int length);
/**
 * @brief prints the data array
 *
 * This function prints the data array
 *
 * @param array The data array to print
 * @param length The size of the array
 *
 * @return the data array is printed
 */



int find_mean(unsigned char *array, unsigned int length);
/**
 * @brief Function: find_mean
 *
 * This function finds the mean of the array
 *
 * @param array The data array 
 * @param length The size of the array
 *
 * @return the mean rounded down to the nearest integer
 */


unsigned char find_maximum(unsigned char *array, int length);
/**
 * @brief Function: find_maximum
 *
 * This function finds the max of the array
 *
 * @param array The data array
 * @param length The size of the array
 *
 * @return the max of the array
 */

unsigned char find_minimum(unsigned char *array, int length);
/**
 * @brief Function: find_minimum
 *
 * This function finds the min of the array
 *
 * @param array The data array 
 * @param length The size of the array
 *
 * @return the min of the array
 */


void sort_array(unsigned char *array, int length);
/**
 * @brief sorts the array form the largest data to the smallest one
 *
 * This function reorders the data of the array from large to small
 *
 * @param array The data array to sort
 * @param length The size of the array
 *
 * @return the array is sorted
 */


#endif /* __STATS_H__ */
