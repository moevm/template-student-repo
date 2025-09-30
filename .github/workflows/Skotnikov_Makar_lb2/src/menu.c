#include <stdio.h>
#include <stdlib.h>
#include "index_first_negative.c"
#include "index_last_negative.c"
#include "sum_between_negative.c"
#include "sum_before_and_after_negative.c"


int main() {

    int choice;
    int arr[20];
    int size = 0;
    
    scanf("%d", &choice);  
   

    while (scanf("%d", &arr[size]) == 1) {
		size++;
		if (size >= 20) break;
    }

        
    
    
    switch(choice){
        case 0:
        printf("%d\n", index_first_negative(arr, size));
        break;

        case 1:
        printf("%d\n", index_last_negative(arr, size));
        break;

        case 2:
        printf("%d\n", multi_between_negative(arr, size));
        break;

        case 3:
        printf("%d\n", multi_before_and_after_negative(arr, size));
        break;
        default:
        printf("Данные некорректны\n");
        break;
    }
    return 0;
}
