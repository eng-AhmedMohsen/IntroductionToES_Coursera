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
 * @file stats.c
 * @brief includes implementation 
 *
 * <Add Extended Description Here>
 *
 * @author Ahmed Mohsen
 * @date 2 - 6 - 2022
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

}

/* Add other Implementation File Code Here */
/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void print_statistics(unsigned char *_arr, unsigned int _size)
{
    unsigned char maxVal    = find_maximum(_arr,_size);
    unsigned char minVal    = find_minimum(_arr,_size);
    unsigned char meanVal   = find_mean(_arr,_size);
    unsigned char medianVal = find_median(_arr,_size);

    printf("max val = %d\n",maxVal);
    printf("min val = %d\n",minVal);
    printf("mean val = %d\n",meanVal);
    printf("median val = %d\n",medianVal);
}

/**
 * @brief   Given an array of data and a length, prints the array to the screen
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void print_array(unsigned char *_arr, unsigned int _size)
{
    unsigned int Counter = 0;
    for(Counter = 0; Counter < _size; Counter++)
    {
      printf("array[%u]   = %u \n",Counter , _arr[Counter]);
    }
}


/**
 * @brief   Given an array of data and a length, returns the median value
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the median value
 */
unsigned char find_median(unsigned char *_arr, unsigned int _size)
{
  unsigned char medianVal = 0;
  unsigned int tempIndex  = 0;


  /* Sort array*/
  sort_array(_arr,_size);

  if(_size % 2 == 0)
  {
    /* median is two number */
    medianVal = (_arr[_size / 2] + _arr[_size / 2 - 1]) / 2 ;
  }
  else
  {
    /* median is 1 number */
    tempIndex = _size / 2;

    medianVal = _arr[tempIndex];
  }
  
  return medianVal;
}

/**
 * @brief   Given an array of data and a length, returns the mean
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the mean value
 */
unsigned char find_mean(unsigned char *_arr, unsigned int _size)
{
  /* Sum of all numbers by it's number */
  unsigned long sum = 0;
  for(unsigned int Counter = 0; Counter < _size; Counter++)
  {
    sum = sum + _arr[Counter];
  }

  return (sum / _size);
}

/**
 * @brief   Given an array of data and a length, returns the maximum
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the maximum value
 */
unsigned char find_maximum(unsigned char *_arr, unsigned int _size)
{
  sort_array(_arr,_size);
  return _arr[_size - 1];
}

/**
 * @brief   Given an array of data and a length, returns the minimum
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the minimum value
 */
unsigned char find_minimum(unsigned char *_arr, unsigned int _size)
{
  sort_array(_arr,_size);
  return _arr[0];
}

/**
 * @brief   Given an array of data and a length, sorts the array from largest to smallest.
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void sort_array(unsigned char *_arr, unsigned int _size)
{
    /* 1- Sort array from smallest to largest */
    unsigned int CounterX = 0;
    unsigned int CounterY = 0;
    unsigned char tempVal = 0;

    for(CounterX = 0; CounterX < _size; CounterX++)
    {
      for(CounterY = CounterX + 1; CounterY < _size; CounterY++)
      {
        if(_arr[CounterY] < _arr[CounterX])
        {
           tempVal = _arr[CounterX];
           _arr[CounterX] = _arr[CounterY];
           _arr[CounterY] = tempVal;
        }
        
      }
    }
}