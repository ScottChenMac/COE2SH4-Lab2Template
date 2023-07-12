#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void sortDatabyBubble(struct Q4Struct array[], int size)
{
    // Recall: struct is a multi-datatype data collection.
    // With an array of structs, each element is a struct with multiple data members.
    // When operating on structs, you must consider all the relevant data members.
    
    // This is the same Bubble Sort question from Lab 1, except now you'd have to carry it out on 
    // an array of struct.  This question will help you get familiar with struct and operations on it.

    // No algorithm hints will be provided - well, because it's really the same question from Lab 1. ;)




}


void sortDatabySelection(struct Q4Struct array[], int size)
{
    // Selection Sort is an alternative to Bubble Sort, with the intention to lower the number of swapping operations.

    // Read the lab manual to understand the general process of Selection Sort, then implement it here:
    
    // Step 1:  From the start of the array, visit every element
    // Step 2:  For every visited element at index i (current element), check all the subsequent elements *AFTER* index i.  
    //          Find the element with the smallest value among the current element, and all the subsequent elements, and denote it as target element
    // Step 3:  If the target element is not the current element, swap the target element and the current element.
    // Step 4:  Move on to the next element, repeat Step 2 and 3.
    // When reaching the last element in the array, DONE.





}

