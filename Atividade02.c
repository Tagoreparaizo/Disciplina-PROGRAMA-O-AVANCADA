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
/** 2) Escreva um programa que calcula os quadrados e cubos dos inteiros
de 0 a 10 e usa tabulações para imprimir as seguintes tabelas de
valores */
void q2(){
    int quadrado, cubo , numero =0;
    printf("%-10s %-10s %-10s\n", "Numero", "Quadrado", "Cubo");
    do{
        quadrado = round(pow(numero,2));
        cubo = round(pow(numero,3));
        
        printf("%-10d %-10d %-10d\n",numero,quadrado,cubo);
        numero++;
    }while (numero<=10);
}


int main(){
    q1();
    return 0;
}