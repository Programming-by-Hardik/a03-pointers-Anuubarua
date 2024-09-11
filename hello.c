// pointers_assignment.c
// This program implements three functions using pointers: swap, findMax, and reverseArray.

#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void swap(int *a, int *b);
int findMax(int *arr, int length);
void reverseArray(int *arr, int length);

// Test functions
bool testSwap();
bool testFindMax();
bool testReverseArray();

int main() {
    // Run tests
    if (testSwap()) {
        printf("testSwap PASSED\n");
    } else {
        printf("testSwap FAILED\n");
    }

    if (testFindMax()) {
        printf("testFindMax PASSED\n");
    } else {
        printf("testFindMax FAILED\n");
    }

    if (testReverseArray()) {
        printf("testReverseArray PASSED\n");
    } else {