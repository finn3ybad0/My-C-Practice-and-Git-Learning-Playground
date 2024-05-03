// Name : Finney Bado
// Date : 03/05/2024
// Description : This program finds the maximum value in an array

#include <stdio.h>

// ==================   Function declaration ====================

int find_maximum(int array[], int length);

int main(){

    int list[]={3,4,5,7,24,74,2,6};
    find_maximum(list,8);

    return 0;
}

int find_maximum(int array[], int length){
    int max= array[0];
    printf("initial maximum is :%d\n", max);
    for (int i=0; i<length;i++){
        if (max<array[i]){
            max=array[i];
            printf(" new maximum : %d\n", max);

        }
    }
    return max;
}