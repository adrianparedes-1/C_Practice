#include <stdio.h>
#include <stdlib.h>


int sum(int arr[], int size);

int main()
{
    int size = 5;
    int arr[] = {1,2,3,4,5};

    printf("%d", sum(arr, size));
    return 0;
}

int sum (int arr[], int size) {

    if (size == 0) { //base case -- when array is empty
        return 0;

    } return arr[size - 1] + sum(arr,size - 1);

    /*sum(arr,size - 1) is the recursive call -- we are calling the sum function again with a reduced size
    effectively moving to the previous element until size == 0*/

    /* This recursive process continues until the base case is reached (when size becomes 0),
     * and the function starts to return values back up the call stack, summing up the elements along the way.
     * The recursion allows the function to repeatedly apply the same logic on smaller portions of the array until it
     * covers all elements.
     *
     *
       In C, the syntax for passing an array to a function involves specifying the array name without square brackets.
       So, when you write sum(arr, size - 1), you are passing the array arr to the sum function, and size - 1 is being passed as the second argument.
       The square brackets ([]) are used in the array declaration and definition, not when passing an array to a function.
       In the function parameter list, you simply use the array name without the square brackets.

     * */

}
