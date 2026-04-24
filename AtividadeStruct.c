#include <stdio.h>
#include <math.h>
/*1) Faça um programa que receba dados de dois alunos (nome,
nota 1, nota2, matricula) e informe qual dos dois possui média
maior. Realize essa tarefa utilizando structs/registros.**/
typedef struct {
    char nome[20];/*Usando %c para o nome pega apenas o primeiro caractere**/
    float nota1;
    float nota2;
    long long int matricula;
    } aluno;
    

int main()
{
    aluno aluno1,aluno2;
    float media;
    
    printf("Informe Nome e Matrícula do aluno1:\n");
    scanf("%s %lld",aluno1.nome,&aluno1.matricula);
    printf("Informe a primeira e segunda nota do aluno:\n");
    scanf("%f %f",&aluno1.nota1,&aluno1.nota2);
    printf("Informe Nome e Matrícula do aluno1:\n");
    scanf("%s %lld",aluno2.nome,&aluno2.matricula);
    printf("Informe a primeira e segunda nota do aluno:\n");
    scanf("%f %f",&aluno2.nota1,&aluno2.nota2);
    
    media = (aluno1.nota1 + aluno1.nota2)/2;
    
    if (media > ((aluno2.nota1+aluno2.nota2)/2))
        printf("Aluno com maior média:\nNome:%s\n:Matricula:%lld\nMédia:%.2f",aluno1.nome,aluno1.matricula,media);
        
    else if (media < ((aluno2.nota1+aluno2.nota2)/2)){
        media = ((aluno2.nota1+aluno2.nota2)/2);
        printf("Aluno com maior média:\nNome:%s\n:Matricula%lld\nMédia:%2.f",aluno2.nome,aluno2.matricula,media);
    }else
        printf("Empate ambos possuem a mesma média");
    return 0;
}