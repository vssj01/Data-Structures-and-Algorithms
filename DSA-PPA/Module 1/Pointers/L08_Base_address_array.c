#include <stdio.h>

int main()
{
    int arr[3] = {7, 9, 2};
    // directly trying to print address of elements in array

    printf("%lld %lld %lld %lld\n", arr, &arr[0], &arr[1], &arr[2]);
    // shows elements are stored in contiguous manner
    // arr = &arr[0] : Name of array => address of 1st element => base address

    // assign address of 1st ele to pointer
    int *p = &arr[0];
    printf("%lld %lld %lld\n", p, p + 1, p + 2);

    // values of pointer p
    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));


    // p= arr and *p=*arr, we can avoid taking new pointer and user *arr directly
    printf("%lld %lld %lld\n", arr, arr + 1, arr + 2);
    printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2));

    // for-loop with using arr[i]

    for(int i=0; i<3; i++) {
        printf("%d\n", *(arr+i) );
    }
    return 0;
}
