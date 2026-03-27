#include <iostream>
#include <cmath>
#include <iomanip>
/** 1) Escreva um programa que insere um inteiro de cinco dígitos, separa o
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
/** 2) Escreva um programa que calcula os quadrados e cubos dos inteiros
de 0 a 10 e usa tabulações para imprimir as seguintes tabelas de
valores */
void q2(){
    int quadrado, cubo , numero =0;
    std::cout << std::left << std::setw(10) << "Numero" 
              << std::setw(12) << "Quadrado" 
              << "Cubo" << std::endl;
    do{
        quadrado = round(pow(numero,2));
        cubo = round(pow(numero,3));
        
        std::cout << std::left << std::setw(10) << numero 
                  << std::left << std::setw(12) << quadrado
                  << cubo << std::endl;
        numero++;
    }while (numero<=10);
}

/** 3) Escrever programa que receba a medida de dois ângulos internos de um
triângulo, calcule e mostre a medida do terceiro ângulo; sabendo que a
soma dos ângulos internos de um triângulo é 180. */
void q3(){
    double angulo1,angulo2,angulo3;
    std::cout << "Informe a medida dos 2 angulos separadamente:" <<std::endl;
    std::cin >> angulo1 >> angulo2;
    if (angulo1+angulo2 >180)
        std::cout <<"Triangulo Inválido." <<std:: endl;
        return;
    angulo3 = 180 - angulo1- angulo2;
    std::cout << "Medida do terceiro angulo:" <<angulo3<< std::endl;
}

int main(){
    q1();
    q2();
    q3();
    return 0;
}