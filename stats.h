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
 * @file <STATS.H> 
 * @brief <STATS.H is a header file for STATS.C, All the methods declarations are mentioned in this file >
 *
 * @author <Praveena Chandrapu>
 * @date <06/09/1028 >
 *
 */
#ifndef STATS_H_
#define STATS_H_


/**
*	@brief Prints the unsigned char array with its index and values explicitly
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will print all the elements in the array based on the size of the array
*
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return no return value.
*/
void print_array(unsigned char array[]);
//void print_array(unsigned char array[], unsigned int len);


/**
*	@brief Swaps or interchanges the two char values passed as arguments.
*
*	This function takes inputs as two unsigned char values 
*	This will swap the two char values
*
* 	@param  two unsigned char pointers, eg; a, b
*   @return no return value.
*/
void swap(unsigned char *a, unsigned char *b);


/**
*	@brief Sorts the unsigned char array with first element being the highest and last element being the lowest
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will sort the elements in the array from highest to lowest or maximum to minimum in descending order.
*
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return no return value.
*/
void sort_array(unsigned char array[]);
//void sort_array(unsigned char array[], unsigned int len);


/**
*	@brief Finds the highest maximum value in the array
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will sort the elements in the array in descending order and returns the first element, which is the maximum value.
*
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return unsigned char highest or maximum value in the array.
*/
unsigned char find_maximum(unsigned char array[]);
//unsigned char find_maximum(unsigned char array[], unsigned int len);


/**
*	@brief Finds the lowest minimum value in the array
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will sort the elements in the array in descending order and returns the last element, which is the minimum value.
*
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return unsigned char lowest or minimum value in the array.
*/
unsigned char find_minimum(unsigned char array[]);


/**
*	@brief Finds the mean/average value of the array
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will add all the elements in the array and divides with the size of the array.
*
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return integer The mean/average of the array
*/
unsigned int find_mean(unsigned char array[]);
//unsigned int find_mean(unsigned char array[], unsigned int len);


/**
*	@brief Finds the median value of the array
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will sort the elements first and then find the mid value in the array.
*	Depending on whether the length of the array is odd or even value, the median is calucalted.
*	If the length of array is odd, then median is the exact middle, else for even it is the average of the two middle values from the array.
* 	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*   @return integer The median of the array
*/
unsigned int find_median(unsigned char array[]);


/**
*	@brief Prints the statistics of the array
*
*	This function takes inputs as an unsigned char array and an integer which indicates the array size
*	This will print the elements in the array, sorts the elements in descending order, finds the max and min values in the array.
*	finds the mean and median of the array
*	@param array The unsigned char array
*	@param integer The integer to tell the size of the array
*       @return no return value
*/
void print_statistics(unsigned char array[]);


#endif /* __STATS_H__ */
