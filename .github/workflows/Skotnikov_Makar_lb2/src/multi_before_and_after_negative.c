#include "index_first_negative"
#include "index_last_negative"


multi_before_and_after_negative(int arr[], int size) {
    int f = index_first_negative(arr, size);
    int l = index_last_negative(arr, size);


    for (int i = 0; i < f; i++) {
        multi*= arr[i];
    }

    for (int i = l + 1; i < size; i++) {
        multi*= arr[i];
    }
    return multi;
}