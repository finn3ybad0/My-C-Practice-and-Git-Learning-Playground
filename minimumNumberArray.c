// Name : Finney Bado
// Date : 03/05/2024
// Description : This program finds the minimum value in an array


#include <stdio.h>

// ============================================== Function declaration ======================================

int find_minimum(int array[],int length);


// ============================================== Main Body ======================================

int main() {
    int list[]= {4,5,7,3,-7,8,-1,5,2};
    int result = find_minimum(list,9);
    printf("this is the result : %d", result);
    return 0;
};

// ============================================== Functions ======================================

int find_minimum(int array[],int length)
{
    int minimum = array[0];
    for (int i=0; i< length;i++){
        if (minimum>array[i]){
            minimum = array[i];
        };

    };
    return minimum;
};