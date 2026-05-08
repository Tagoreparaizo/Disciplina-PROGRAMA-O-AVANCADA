/*1) Crie um programa em C que cadastre até 50 alunos de uma
turma.
Cada aluno deve ter:

nome (string de até 50 caracteres)
matrícula (inteiro)
3 notas (float)
O programa deve:
1.Ler os dados de N alunos.
2.Calcular a média de cada aluno.
3.Exibir os dados dos alunos com média maior ou igual a 7.0. **/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
}aluno;

void cadastrarAluno(aluno classe[],int i){
    printf("Informe nome do aluno:\n");
    setbuf(stdin, NULL);
    fgets(classe[i].nome,50,stdin);
    printf("Informe matricula do aluno:\n");
    scanf("%d",&classe[i].matricula);
    printf("Informe a primeira nota do aluno:\n");
    scanf("%f",&classe[i].nota1);
    printf("Informe a primeira segunda do aluno:\n");
    scanf("%f",&classe[i].nota2);
    printf("Informe a primeira terceira do aluno:\n");
    scanf("%f",&classe[i].nota3);
}

void printarAluno(aluno classe[],int i){
    printf("Nome: %s\n", classe[i].nome);
    printf("Matricula: %d\n", classe[i].matricula);
    printf("Primeira nota: %.1f\n", classe[i].nota1);
    printf("Segunda nota: %.1f\n", classe[i].nota2);
    printf("Terceira nota: %.1f\n", classe[i].nota3);
}
int main()
{
    aluno classe[50];
    int entrada = 1;
    int i =0;
    while (entrada != 0 && i < 50){
        printf("Digite 1 para cadastrar aluno, 0 para parar:\n");
        scanf("%d",&entrada);
        if (entrada ==1){
            cadastrarAluno(classe,i);
            i++;
        }
        
    }
    for (int j =0; j<i;j++ ){
            float media = (classe[j].nota1+classe[j].nota2+classe[j].nota3)/3.0;
            if (media>7.0){
                printarAluno(classe,j);
                printf("Média: %.2f",media);
            }
        }

    return 0;
}