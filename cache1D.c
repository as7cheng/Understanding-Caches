////////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c
// This File:        cache1D.c
// Other Files:      (name of all other files if any)
// Semester:         CS 354 Spring 2019
//
// Author:           Shihan Cheng
// Email:            scheng93@wisc.edu
// CS Login:         shihan
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          Identify persons by name, relationship to you, and email.
//                   Describe in detail the the ideas and help they provided.
//
// Online sources:   avoid web searches to solve your problems, but if you do
//                   search, be sure to include Web URLs and description of
//                   of any information you find.
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int arr[100000]; // Create a 1D array with size of 100000

int main(int argc, const char *argv[]) {
    // Iterate the loop
    for (int i = 0; i < 100000; i++) {
        arr[i] = i;
    }
    return 0;
}

