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
 * @file stats.h
 * @brief Header file for the stats.c programming assignment.
 *
 * This file contains the declarations for the 8 functions defined in stats.c
 *
 * @author Wauters Laurens
 * @date June 19th, 2022
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics of a given input array with a given length.
 *
 * This function prints out the minimum, maximum, mean and median of the input array.
 * It does not return anything.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return Null.
 */

void print_statistics(unsigned char inputArray[], unsigned int size);

/**
 * @brief Prints a given input array with a given length to the screen.
 *
 * This function prints out the given input array.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return Null.
 */


void print_array(unsigned char inputArray[], unsigned int size);

/**
 * @brief Finds the minimum of an unsigned char array
 *
 * This function finds the minimum value of an unsigned char array, and returns an unsigned char, the
 * minimum value of the array.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return An unsigned char representing the minimum value of inputArray.
 */


unsigned char find_median(unsigned char inputArray[], unsigned int size);

/**
 * @brief Finds the median of an unsigned char array
 *
 * This function finds the median value of an unsigned char array, and returns an unsigned char, the
 * median value of the array.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return An unsigned char representing the median value of inputArray.
 */


unsigned float find_mean(unsigned char inputArray[], unsigned int size);

/**
 * @brief Finds the mean of an unsigned char array
 *
 * This function finds the mean of an unsigned char array, and returns an unsigned float, the
 * mean value of the array.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return An unsigned float representing the mean value of inputArray.
 */

unsigned char find_minimum(unsigned char inputArray[], unsigned int size);


/**
 * @brief Finds the maximum of an unsigned char array
 *
 * This function finds the maximum value of an unsigned char array, and returns an unsigned char, the
 * minimum value of the array.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return An unsigned char representing the maximum value of inputArray.
 */

unsigned char find_maximum(unsigned char inputArray[], unsigned int size);

/**
 * @brief Sorts an unsigned char array in descending order.
 *
 * This function takes an unsigned char array as input, and modifies it such that is becomes
 * ordered from largest to smallest.
 *
 * @param inputArray The input array, in unsigned char format
 * @param size The length of the input array
 *
 * @return Null.
 */

void sort_array(unsigned char inputArray[], unsigned int size);


#endif /* __STATS_H__ */
