// Created by Adrian on 2/2/2024.

#include <stdio.h>

int total (int arr[], int count, int size); //function prototype

int main() {

    int count = 0;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); // this will calculate the size of the array even if it unknown

/*The sizeof operator is used to calculate the size (in bytes) of the array arr.
For the given array arr (with 5 elements), if sizeof(int) is 4 bytes (common on many systems),
then the value assigned to size will be 5, as sizeof(arr) would be 5 * sizeof(int) = 5 * 4 = 20,
and sizeof(arr[0]) would be sizeof(int) = 4. Therefore, size = 20 / 4 = 5.*/

    printf("\n%d", total(arr, count, size));

    return 0;
}


int total (int arr[], int count, int size){

    if (arr[count] > size) {
        return 0;

    } else return 1 + total (arr, count + 1, size);

    /* if we use count in the recursive call -- count + total (arr, count + 1) -- each time we call the function,
     * the value of count will be returned rather than each time we count. Ex. 1 + 2 + 3 + 4 +5 = 15.
     * This will incorrectly return 15 rather than 5.
     * To correctly count each item in the array, we use 1 -- 1 + total (arr, count + 1) --. Ex. 1 + 1 + 1 + 1 + 1 = 5. */
}

