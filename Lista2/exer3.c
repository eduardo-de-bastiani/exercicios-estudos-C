#include <stdio.h>

int numRepetidos(int *array, int *size){
    int count = 0;
    for(int i = 0; i < *size; i++){
        for(int j = i + 1; j < *size; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
    }
    return count;
}



int main(){
    int count;
    int array[] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8};
    int size = sizeof(array) / sizeof(array[0]);

    count = numRepetidos(array, &size);

    printf("A quantidade de número que se repetem é: %d\n",count);


    return 0;
}