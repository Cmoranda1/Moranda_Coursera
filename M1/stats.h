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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints acquired statistics
 *
 * A function that prints the statistics of an array including minimum, maximum,
 * mean, and median of Char Values.
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 
 * @return No return value, just print statements
 */
void print_statistics(unsigned char array[], int length);

/**
 * @brief Prints input array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return No return value, just print statements
 */
void print_array(unsigned char array[], int length);

/**
 * @brief Finds median value
 * 
 * Given an array of data and a length, returns the median value
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return Returns the median value as a float
 */
unsigned char find_median(unsigned char array[], int length);

/**
 * @brief Finds maximum value
 * 
 * Given an array of data and a length, returns the maximum value
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return Returns the maximum value as a char
 */

float find_mean(unsigned char array[], int length);

/**
 * @brief Finds mean value
 * 
 * Given an array of data and a length, returns the average value
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return Returns the average value as a float
 */

unsigned char find_maximum(unsigned char array[], int length);

/**
 * @brief Finds minimum value
 * 
 * Given an array of data and a length, returns the minimum value
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return Returns the minimum value as a char
 */
unsigned char find_minimum(unsigned char array[], int length);

/**
 * @brief Sorts Array
 * 
 * Given an array of data and a length, sorts the array from largest to
 * smallest. (The zeroth Element should be the largest value, and the last 
 * element (n-1) should be the smallest value.)
 *
 * @param array: A static character array containing data values
 * @param length: The length of the character array
 *
 * @return No return, sorts the array
 */
void sort_array(unsigned char array[], int length);


#endif /* __STATS_H__ */
