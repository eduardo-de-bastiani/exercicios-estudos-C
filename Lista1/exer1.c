#include <stdio.h>

int divisible(int *val){

    if(*val % 10 == 0){
        return 3;
    }
    else if(*val % 5 == 0){
        return 2;
    }
    else if(*val % 2 == 0){
        return 1;
    }
    return 0;

}


int main(){
    int val, res;

    printf("Digite o valor: ");
    scanf("%d", &val);

    res = divisible(&val);

    switch (res)
    {
    case 1:
        printf("O valor %d é divisível apenas por 2.\n", val);
        break;
    case 2:
        printf("O valor %d é divisível apenas por 5.\n", val);
        break;
    case 3:
        printf("O valor %d é divisível por 2, 5 e 10.\n", val);
        break;
    default:
        printf("O valor %d não é divisível por 2, 5 ou 10\n", val);
        break;
    }

    return 0;
}