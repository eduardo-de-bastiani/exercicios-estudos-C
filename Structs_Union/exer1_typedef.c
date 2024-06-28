#include <stdio.h>

typedef struct{
    float nominador;
    float denominador;

} fracao_t;

fracao_t multiplica(fracao_t a, fracao_t b){
    float nominador, denominador;

    nominador = a.nominador * b.nominador;
    denominador = a.denominador * b.denominador;

    fracao_t fracao_mult = {nominador, denominador};

    return fracao_mult;
}


int main(){

    fracao_t a, b;

    while(1){

        printf("Defina o nominador da fração 1:\n");
        scanf("%f", &a.nominador);
        printf("Defina o denominador da fração 1:\n");
        scanf("%f", &a.denominador);

        printf("Defina o nominador da fração 2:\n");
        scanf("%f", &b.nominador);
        printf("Defina o denominador da função 2:\n");
        scanf("%f", &b.denominador);

        break;
    }

    fracao_t fracao_mult = multiplica(a,b);

    printf("Fração multiplicada entre %.2f/%.2f e %.2f/%.2f:\n", a.nominador, a.denominador, b.nominador, b.denominador);

    printf("\n%.2f/%.2f", fracao_mult.nominador, fracao_mult.denominador);

    return 0;
}