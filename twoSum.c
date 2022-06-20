#include<stdio.h> 
#include<stdlib.h>
//solution of twoSum problem in C code 
void twoSum(int *p, int target, int lenght, int *solution){
    for(int i = 0; i < lenght; i++){
        for(int y = i + 1; y < lenght; y++){
            int sum = (*(p+i)) + (*(p+y));
            if(sum == target){
                *(solution) = i;
                *(solution + 1) = y;
            }
        }
    }
}
int main() {
    int inputArray[] = {3, 2, 4};
    int target = 6;
    int lenght = (sizeof(inputArray)/sizeof(int)); //calculate the lenght of the inputArray
    int solution[2]; //array to save the solution
    twoSum(&inputArray, target, lenght, &solution);
    for (int i =0; i < 2; i++){
        printf("%d \n", solution[i]);
    }

}



