#include<stdio.h>

int main() {
    int arr[7] = {7,9,2,8,0,6,5};
    int i;

    //name of arr is nothing but address of 1st ele
    for(i=0; i<7; i++) {
        printf("%d ", *(arr+i));
    }

    // making small change
    for (i = 0; i < 7; i++)
    {
        printf("%d ", *(arr));
        // arr++; // arr = arr + 1 -> ERROR 
    }

    // The name od array is constant pointer, which once initialised to a mem loc and be changed to another mem loc
    // by default name of arr is const
    print("\n");
    return 0;
}
