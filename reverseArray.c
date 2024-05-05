// Name : Finney Bado
// Date : 04/05/2024
// Description : program that reverse an array


#include <stdio.h>

void reverse(int array[], int length);

int main(){
    int list[]={1,2,3,4,5,6,7,8,9};
    reverse(list,10);
    printf("{ ");
    for (int i=1 ; i<10;i++){
        int number = list[i];
        printf("%i, ",number);
    }
    printf("}");
    return 0;
}

void reverse(int array[], int length){
    int temp;
    for (int i ; i<length/2; i++){
        temp = array[i];
        array[i]=array[length -i-1];
        array[length -i-1] = temp;

    }
}