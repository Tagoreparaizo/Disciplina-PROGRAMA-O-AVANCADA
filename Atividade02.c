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

/** 3) Escrever programa que receba a medida de dois ângulos internos de um
triângulo, calcule e mostre a medida do terceiro ângulo; sabendo que a
soma dos ângulos internos de um triângulo é 180. */
void q3(){
    double angulo1,angulo2,angulo3;
    printf("Informe a medida dos 2 angulos separadamente:\n");
    scanf("%lf %lf",&angulo1, &angulo2);
    if (angulo1+angulo2 >180){
       printf("Triangulo Inválido.");
        return;
    }
    angulo3 = 180 - angulo1- angulo2;
    printf("Medida do terceiro angulo:%.2lf",angulo3);
}
/** 4) Escreva um programa que lê um inteiro e determina e imprime se ele é
ímpar ou par.
 */
void q4(){
    int numero;
    printf("Informe um inteiro:\n");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("Numero %d e par",numero);
    }else{
        printf("Numero %d e impar",numero);
    }
}
/** 3) Escreva um programa que lê dois inteiros e determina e imprime se o
primeiro é um múltiplo do segundo */
void q5(){
    int numero1, numero2;
    printf("Informe dois inteiros:\n");
    scanf("%d %d", &numero1, &numero2);
    if(numero1%numero2 ==0){
        printf("%d é multiplo de %d", numero1, numero2);
    }else{
        printf("%d não é multiplo de %d", numero1, numero2);
    }
}
/**1) Criar um algoritmo para ler um número e emitir se o mesmo é positivo,
negativo ou nulo. */
void q6(){
    double numero;
    printf("informe um número:\n");
    scanf("%lf", &numero);

    if(numero<0){
        printf("Número é negativo");
    }else if (numero == 0){
        printf("Número é nulo");
    }else if (numero>0){
        printf("Número é positivo");
    }
}
/** 1) Escreva um programa que lê cinco inteiros e determina e imprime o
maior e o menor inteiro no grupo */
void q7(){
    int n1,n2,n3,n4,n5,maior,menor;
    printf("Informe os 5 inteiros separadamente:");
    scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);

    maior = menor = n1;

    if (n2>maior) maior = n2;
    else menor=n2;
    if (n3>maior) maior = n3;
    else if (n3<menor) menor = n3;
    if (n4>maior) maior = n4;
    else if (n4<menor) menor = n4;
    if (n5>maior) maior = n5;
    else if (n5<menor) menor =n5;
    
    printf("Maior inteiro:%d\nMenor Inteiro:%d",maior, menor);
}
/** 3) Confeccionar um algoritmo para ler um número e emitir se o mesmo
está compreendido no intervalo de 10 a 20 inclusive. */
void q8(){
    double numero;
    printf("Insira um número:");
    scanf("%lf",&numero);

    if(10<=numero){
        if(numero<=20){
        printf("%lf está dentro do intervalo de 10 a 20",numero);
        }else{printf("%lf está fora do intervalo de 10 a 20",numero);}
    }else{
        printf("%lf está fora do intervalo de 10 a 20",numero);
    }

}
int main(){
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    return 0;
}