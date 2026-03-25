#include <stdio.h>
/** 1) Faça um programa que leia um número inteiro e retorne seu
antecessor e seu sucessor.*/
void q1(){
    int numero, antecessor, sucessor;
    printf("Informe o número:");
    scanf("%d",&numero);

    antecessor = numero-1;
    sucessor = numero +1;
    printf("Número:%d\nAntecessor:%d\nSucessor:%d",numero,antecessor,sucessor);
}
/** 2) Leia quatro notas de 1 aluno. Calcule e exiba a média aritmética
dessas notas.*/
void q2(){
    double nota1, nota2, nota3, nota4, media;
    printf("Informe as 4 notas:\n");
    scanf("%lf %lf %lf %lf",&nota1,&nota2, &nota3, &nota4);

    media = ((nota1+nota2+nota3+nota4)/4);
    printf("Média é : %2.f \n",media);
}
/** 3) Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em dólares.*/
void q3(){
    double cotacao, reais, valor;
    printf("Informe a cotação do dollar e em seguida o valor em reais:\n");
    scanf("%lf %lf",&cotacao, &reais);

    valor = reais/cotacao;
    printf("Valor em dolares:%3.f\n",valor);
}
/** 4) Leia um ângulo em graus e apresente-o convertido em radianos.
A fórmula de conversão é R = G * pi/180, sendo G o ângulo em
graus e R em radianos e pi = 3.141592.*/
void q4(){
    double angulo, radianos;
    const double  PI = 3.141592;
    printf("Informe o angulo em graus:\n");
    scanf("%lf",&angulo);

    radianos = angulo*PI/180;
    printf("Angulo em radianos:%lf\n",radianos);
}

int main(){
    short int questao;
    do{
        printf("Informe qual questão quer testar(0 para parar):\n");
        scanf("%hd",&questao);
        switch(questao){
            case 0: printf("Fechando..."); break; 
            case 1: q1(); break;
            case 2: q2(); break;
            case 3: q3(); break;
            case 4: q4();break;
            default:
                printf("Questão inexistente.\n");
                break;
        }
    }while(questao !=0);
    return 0;
}