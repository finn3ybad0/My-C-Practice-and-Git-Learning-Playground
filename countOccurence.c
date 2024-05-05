// Name : Finney Bado
// Date : 04/05/2024
// Description : This program count the occurence of a certain value in an array

#include <stdio.h>

void count(int value,int array[], int length);

int main(){
    int list[]= {1,2,3,4,5,1,2,3,1,1,1,1,1,1};
    count(1,list,14);
    return 0;
}

void count(int value,int array[],int length){
    int counter=0;
    for (int i=0;i<length;i++){
        if(array[i]==value){
            counter++;
        }
    }
    printf("the number of occurence of %d is : %d",value,counter);
}