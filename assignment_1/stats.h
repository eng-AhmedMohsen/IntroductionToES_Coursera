/******************************************************************************
 * Copyright (C) 2022 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief include prototypes of functions
 *
 *
 * @author Ahmed Mohsen
 * @date 2 - 6 - 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void print_statistics(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, prints the array to the screen
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void print_array(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, returns the median value
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the median value
 */
unsigned char find_median(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, returns the mean
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the mean value
 */
unsigned char find_mean(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, returns the maximum
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the maximum value
 */
unsigned char find_maximum(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, returns the minimum
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return unsigned char as the minimum value
 */
unsigned char find_minimum(unsigned char *_arr, unsigned int _size);

/**
 * @brief   Given an array of data and a length, sorts the array from largest to smallest.
 *
 *
 * @param _arr  A unsigned char pointer to an n-element data array
 * @param _size An unsigned integer as the size of the array
 *
 * @return none
 */
void sort_array(unsigned char *_arr, unsigned int _size);

#endif /* __STATS_H__ */
