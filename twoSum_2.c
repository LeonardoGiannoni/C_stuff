#include<stdio.h> 
#include<stdlib.h>
//rewrite the twoSum problem in C using malloc and pointers to contain the final result and return it to the main function.
int *twoSum(int *p, int target, int lenght){
    int *solution = malloc(2 * sizeof(int) );
    if (solution == NULL){
        puts("ERRORE");
    }
    for(int i = 0; i < lenght; i++){
        for(int y = i + 1; y < lenght; y++){
            int sum = (*(p+i)) + (*(p+y));
            if(sum == target){
                *(solution)= i + 1;
                *(solution + 1 ) = y;
            }
        }
    }
    printf("%d, %d ", *(solution),*(solution +1));
    puts("Close the for loop");
    return solution;
}

void main() {
    int inputArray[] = {2,3,4};
    int target = 6;
    int lenght = (sizeof(inputArray)/sizeof(int)); //calculate the lenght of the inputArray
    int *s = twoSum(inputArray, target, lenght);
    for (int i =0; i < 2; i++){
        printf("%d ", *(s + i));
    }
}
