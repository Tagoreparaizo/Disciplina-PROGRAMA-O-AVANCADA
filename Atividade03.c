#include <stdio.h>
#include <math.h>
/** Faça um programa que leia três números inteiros positivos e efetue o
cálculo de uma das seguintes médias de acordo com um valor numérico
digitado pelo usuário e mostrado na tabela a seguir:*/
void q1(){
    unsigned int numero1, numero2, numero3, selecionador;
    double resultado;
    printf("Informe 3 numeros positivos\n");
    scanf("%u %u %u",&numero1,&numero2,&numero3);
    
    printf("Selecione a media desejada:(1 a 4)\n");
    scanf("%u",&selecionador);
    
    switch (selecionador){
        case 1: resultado = pow((double)(numero1*numero2*numero3),1.0/3);
        printf("Resultado media geometrica:%.3lf",resultado); break;
        case 2: resultado = (numero1+ 2*numero2+ 3*numero3)/6.0;
        printf("Resultado media ponderada:%.3lf",resultado); break;
        case 3: resultado = 3.0/(1.0/numero1+ 1.0/numero2 + 1.0/numero3);
        printf("Resultado media harmonica:%.3lf",resultado); break;
        case 4: resultado = (numero1+numero2+numero3)/3.0;
        printf("Resultado media aritmetica:%.3lf",resultado); break;
        default: printf("Valor indefinido, por favor apenas de 1 a 4"); break;
    }
}
/** 1) Imprima todos os números inteiros compreendidos entre 23 a 50 em
ordem decrescente.
50, 49, 48, .. 23*/
void q2(){
    for(int contador = 50; contador>=23; contador--)
    printf("%d\n",contador);

}
/** 2) Imprima todos os números pares compreendidos entre 200 e 300.*/
void q3(){
    for(int contador = 200; contador<=300; contador+=2)
    printf("%d\n",contador);

}
/** 3) Crie um algoritmo para ler 3 notas de cada aluno de uma turma de 5
alunos e escreva a média de cada aluno. Escreva também o nome do aluno,
a média mais alta dessa turma e quantos alunos obtiveram média maior do
que 6.*/
void q4(){
    char nome[50];
    double nota, soma , maiorMedia = 0, media;
    int aprovados=0;
    for (int i =0;i<5;i++){
        soma =0;
        printf("Informe o nome do aluno:\n");
        scanf("%s",nome);
        for (int j =1;j<=3;j++){
            printf("Informe a %d° nota:\n",j);
            scanf("%lf",&nota);
            soma +=nota;
        }
        media = soma/3.0;
        printf("Média do aluno %s :%.1lf\n",nome,media);
        if (media>maiorMedia) maiorMedia=media;
        if (media>6.0) aprovados++;
    }
    printf("Maior média da turma:%.1lf\n",maiorMedia);
    printf("Média maior que 6:%d",aprovados);
}
/** 1) Calcule a exiba a soma dos números primos entre 200 a 300. Lembre
de escrever na tela cada um desses números.*/
void q5(){
    int stop,soma=0;
    for (int i=200;i<=300;i++){
        stop=1;
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                stop=0;
                break;
            }
        }
        if (stop==1) {
            soma +=i;
            printf("%i\n",i);
        }
        
    }
    printf("Soma total: %i",soma);
}
int main()
{
    q1();
    q2();
    q3();
    q4();
    q5();

    return 0;
}