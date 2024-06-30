#include <stdio.h>

typedef struct{
    char nome[64];
    int idade;
    float nota;
} aluno_t;


int aluno_salva(const char *arquivo, aluno_t *aluno){
    FILE *fptr = fopen("arquivo2.txt", "ab"); 

    if(fptr != NULL){
        fprintf(arquivo, "Nome: %s\n Idade: %d\n Nota: %f\n\n", aluno->nome, aluno->idade, aluno->nota);
        fclose(arquivo);
        return 1;
    }
    return -1;
}

int aluno_carrega(const char *arquivo, aluno_t alunos[], int len){
    FILE *fptr = open("arquivo2.txt", "rb");

    if(fptr != NULL){

        int i = 0;
        while(i < len && fscanf(fptr, "Nome: %s\n Idade: %d\n Nota: %f\n\n", alunos[i].nome, alunos[i].idade, alunos[i].nota)){
            i++;
        }
        fclose(fptr);
    }
    
    return -1;

}



int main(){

    aluno_t aluno;
    aluno_t alunos[10];
    const char *arquivo = "arquivo2.txt";

    printf("Digite o nome do aluno:");
    scanf("%s", aluno.nome);
    printf("Digite a idade do aluno:");
    scanf("%d", &aluno.idade);
    printf("Digite a nota do aluno:");
    scanf("%f", &aluno.nota);

     if (aluno_salva(arquivo, &aluno) == 1) {
        printf("Aluno salvo com sucesso!\n");
    } else {
        printf("Erro ao salvar o aluno.\n");
    }

    int num_alunos = aluno_carrega(arquivo, alunos, 10);
    if (num_alunos > 0) {
        printf("Alunos carregados com sucesso!\n");
        for (int i = 0; i < num_alunos; i++) {
            printf("Nome: %s, Idade: %d, Nota: %.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
        }
    } else {
        printf("Erro ao carregar os alunos.\n");
    }









    return 0;
}