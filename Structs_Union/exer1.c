#include <stdio.h>

struct fracao_s{
    float nominador;
    float denominador;
};

struct fracao_s soma(struct fracao_s a, struct fracao_s b){
    float denominador, nominador, nominador_a, nominador_b;

    denominador = a.denominador * b.denominador;

    nominador_a = a.nominador * b.denominador;

    nominador_b = b.nominador * a.denominador;

    nominador = nominador_a + nominador_b;

    struct fracao_s fracao_somada = {nominador, denominador};

    return fracao_somada;

}



int main(){
    struct fracao_s a, b;

    while(1){
        printf("Defina o nominador da fracao 1:\n");
        scanf("%f", &a.nominador);
        printf("Defina o denominador da fracao 1:\n");
        scanf("%f", &a.denominador);

        printf("Defina o nominador da fracao 2:\n");
        scanf("%f", &b.nominador);
        printf("Defina o denominador da fracao 2:\n");
        scanf("%f", &b.denominador);

        break;
    }

    struct fracao_s fracao_somada = soma(a,b);

    printf("Fração somada entre %.2f/%.2f e %.2f/%.2f\n", a.nominador, a.denominador, b.nominador, b.denominador);
    printf("\n%.2f / %.2f", fracao_somada.nominador, fracao_somada.denominador);


    return 0;
}