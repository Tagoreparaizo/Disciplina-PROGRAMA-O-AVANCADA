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
int main()
{
    q1();

    return 0;
}