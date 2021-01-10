/**
 *  @file Commands.h
 *  @author Nathan Laundry
 *  @date Apr 2020
 *  @brief Holds function signatures for all parser commands
 */

#ifndef _COMMANDS_
#define _COMMANDS_

/**
 * IMPORTANT NOTE FOR IMPLEMENATION
 * Functions in the .c file should mostly just be making calls to
 * Sorted_List functions. These are essentially wrappers
 * Expect that these functions will be no more than a call to the 
 * Sorted_List and a print statement
 */

#include "Sorted_List.h"

/**
 * Remove the first node of the list by insertion order
 * Print the element's (the node you just removed) key and value pair
 * Example output
 * rem_first:  key  value
 * If empty
 * rem_first:  Nothing to remove
 */
void rem_first (Sorted_List * list);

/**
 * Remove the last node of the list by insertion order
 * Print the element's (the node you just removed) key and value pair
 * Example output
 * rem_last:  key  value
 * If empty
 * rem_last:  Nothing to remove
 */
void rem_last (Sorted_List * list);

/**
 * Remove the first node of the list by sort order
 * Print the element's (the node you just removed) key and value pair
 * Example output
 * rem_small:  key  value
 * If empty
 * rem_small:  Nothing to remove
 */
void rem_small (Sorted_List * list);

/**
 * Remove the last node of the list by sort order
 * Print the element's (the node you just removed) key and value pair
 * Example output
 * rem_large:  key  value
 * If empty
 * rem_large:  Nothing to remove
 */
void rem_large (Sorted_List * list);

/**
 * empty
 * Empty the list
 * Print output
 * empty:    size = 0
 */
void empty (Sorted_List * list);

#endif
