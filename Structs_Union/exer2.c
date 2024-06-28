#include <stdio.h>
#include <string.h>


int substring(char *str1, char *str2){
    int inicio_str2;

    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] == str2[0]){
            for(int j = 0; j < strlen(str2); j++){
                if(str1[i+j] != str2[j]){
                    break;
                }
                if(j == strlen(str2) -1){
                    return i;
                }
            }
        }
    }
    return -1;


}


int main(){
    char str1[15], str2[12];

    while(1){
        printf("Digite a string 1:\n");
        scanf("%s", str1);      //não precisa de '&' pois é uma string
        printf("Digite a string 2:\n");
        scanf("%s", str2);

        int res = substring(str1, str2);

        if(res != -1){
            printf("A palavra %s é substring da palavra %s\n", str2, str1);
            printf("A string %s começa na posição %d da string %s\n", str2, res, str1);
            break;
        }
        printf("A palavra %s não é substring da palavra %s", str2, str1);
        break;
    }


    return 0;
}