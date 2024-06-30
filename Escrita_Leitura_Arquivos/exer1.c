#include <stdio.h>





int main(){

    char palavra[10];
    int num;
    FILE *fptr;

    fptr = fopen("arquivo.txt", "w");

    printf("Digite a string:");
    scanf("%s", palavra);
    fprintf(fptr, "String: %s\n", palavra);

    printf("Digite o valor:");
    scanf("%d", &num);
    fprintf(fptr, "Valor: %d\n", num);

    fclose(fptr);



    return 0;
}