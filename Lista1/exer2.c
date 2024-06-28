#include <stdio.h>
#include <string.h>


double tempConvert(char *measure, double *temp){
    double res = 0.0;
    if (strcmp(measure, "Fahrenheit") == 0){
        res = 5.0/9.0 * (*temp - 32);
    }
    return res;
}


int main(){
    char measure[11]; // +1 para o \0
    double temp, res;

    printf("Escreva a sua medicao de temp:");
    printf("\nCelsius\nFahrenheit:\n");
    scanf("%s", measure);
    printf("Escolha a temperatura que deseja converter: ");
    scanf("%lf", &temp);

    res = tempConvert(measure, &temp);
    printf("%lf\n",res);

    return 0;
}