#include <iostream>
#include <cmath>
#include <iomanip>
/** 1)Escreva um programa que insere um inteiro de cinco dígitos, separa o
inteiro em seus dígitos individuais e imprime os dígitos separados
entre si por três espaços cada. [Dica: Utilize operadores de divisão de
inteiros e módulo.] Por exemplo, se o usuário digitar 42339, o
programa deve imprimir: 4 2 3 3 9*/
void q1(){
    int numero, atual, divisor =10000;
    std:: cout << "Informe o número de 5 digitos:";
    std:: cin >> numero;

    while(5){
        atual = numero/divisor;
        numero = numero%divisor;
        divisor /=10;
        std::cout << atual <<"   ";
    }
}

int main(){
    q1();
    return 0;
}