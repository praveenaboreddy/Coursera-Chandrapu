/******************************************************************************
 * Copyright (C) 2018 by Praveena Chandrapu
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. 
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Performing statistical analytics on a data set >
 *
 * <To print and sort the array, to find the max, min elements in the array and find mean and median of the array>
 *
 * @author <Praveena Chandrapu>
 * @date <06/09/2018 >
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


unsigned char max_valueOfArray, min_valueOfArray;
unsigned int mean, median;


	print_array(test); //To print the given array
	

	print_statistics(test);	//TO print the statistics
	

}

//Sub-routine to print the array
void print_array(unsigned char *array) {
	unsigned int i;
	//To print the array
        printf("****************Printing the elements in the unsigned char array below****************\n");
	for(i=0;i<SIZE;i++)
	printf("The elements in the array array[%d] = %u \n", i, array[i]);
}

//To swap two chars
void swap(unsigned char *a, unsigned char *b){
	unsigned char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

//Sub-routine to sort the given array
void sort_array(unsigned char array[]){
	unsigned int i,j;
	for(i=0;i<SIZE-1;i++){
		for(j=i+1;j<SIZE;j++){
			if(*(array+i) < *(array+j)){
			swap(&array[i],&array[j]);
			//printf("%u=",array[i]);
		}
		}
	}
	
	printf("\n***********************  Displaying The sorted elements in the array  *************************\n\n" );
	for(i=0;i<SIZE;i++)
	printf("%u\t\t",array[i]);
	

	
}

/* To print the maximum element in the array */
unsigned char find_maximum(unsigned char array[]){
//	sort_array(array);
	return array[0];
}

/* To print the minimum element in the array */
unsigned char find_minimum(unsigned char array[]){
	//sort_array(array);
	return array[SIZE-1];
}

/* To find the mean of the array */
unsigned int find_mean(unsigned char array[]){
	unsigned int total=0;
	unsigned int mean,i,temp;
	for(i=0;i<SIZE;i++)
	{
		temp=(int)array[i];
		total=total+temp;
	}
	
	mean=total/SIZE;
	return mean;
	
}

/* To Find the median of the array */

unsigned int find_median(unsigned char array[]) {
	 unsigned int median;

	
	if(SIZE%2==0) 
	{
		median= (int) ((array[SIZE/2])+ array[SIZE/2-1])/2;
        }
	else 
	{
        	median=(int) (array[SIZE/2]); 
	}

   return median;

}
  
void print_statistics(unsigned char array[])
{

unsigned char max_valueOfArray, min_valueOfArray;
unsigned int mean, median;

/* Printing the statistics of the array */

	/*------------- To print the sorted array-------------*/
	sort_array(array); 

	/*------------- To find the mean of the array-------------*/
	
	mean = find_mean(array);   			
	printf("\n\nMEAN of the Array = %d \n\n", mean);

	/*-------------To find the median of the array-------------*/
	
	median = find_median(array);  			
	printf("MEDIAN Of The Array is = %d\n\n", median);

	/*-------------To find the maximum element in the array-------------*/
	
	max_valueOfArray = find_maximum(array);    	
	printf("The MAXIMUM Value in the Array is = %u\n\n", max_valueOfArray);

	/*-------------To find the minimum element in the array-------------*/
	
	min_valueOfArray = find_minimum(array);    	
	printf("The MINIMUM Value in the Array is =  %u \n\n", min_valueOfArray);

}



