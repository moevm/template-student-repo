#include "index_first_negative"
#include "index_last_negative"

int multi=0;
    int f = index_first_negative(arr,size);
    int l = index_last_negative(arr, size);
    for(int i = f; i<l; i++){
            multi*=arr[i];
        }
        return multi;