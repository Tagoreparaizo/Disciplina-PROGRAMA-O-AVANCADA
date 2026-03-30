#include <stdio.h>
#include <math.h>
/** 1) Escreva um programa que insere um inteiro de cinco dígitos, separa o
inteiro em seus dígitos individuais e imprime os dígitos separados
entre si por três espaços cada. [Dica: Utilize operadores de divisão de
inteiros e módulo.] Por exemplo, se o usuário digitar 42339, o
programa deve imprimir: 4 2 3 3 9*/
void q1(){
    int numero, atual;
    int divisor = 10000;
    printf("informe o número de 5 digitos:");
    scanf("%d",&numero);
    do{
        atual = numero/divisor;
        numero = numero%divisor;
        printf("%d ",atual);
        divisor/=10;
    }while (5);
}

int main(){
    q1();
    return 0;
}