#include <iostream>
using namespace std;
/** Questão 1: Faça um programa que leia um número inteiro e retorne seu
antecessor e seu sucessor.*/
void q1() {
    int num,sucessor,antecessor;
    
    cout << "Informe um numero inteiro:";
    cin >> num;

    sucessor = num + 1;
    antecessor = num - 1;

    cout << "Voce digitou: " << num << "\n";
    cout << "Antecessor: " << antecessor << "\n";
    cout << "Sucessor: " << sucessor << "\n";
    return ;
}
/** Questão 2: Leia quatro notas de 1 aluno. Calcule e exiba a média aritmética
dessas notas.*/
void q2() {
    double nota1,nota2,nota3,nota4,media;

    cout << "Informe a primeira Nota:";
    cin >> nota1;
    cout << "Informe a segunda Nota:";
    cin >> nota2;
    cout << "Informe a terceira Nota:";
    cin >> nota3;
    cout << "Informe a quarta Nota:";
    cin >> nota4;

    media = (nota1+nota2+nota3+nota4)/4;

    cout << "A media das notas: " << media << "\n";
    return ;
}
/** Questão 3: Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em dólares.*/
void q3() {
    double cotacao_dollar,valor_em_real,conversao;

    cout << "Informe a cotacao do dollar:";
    cin >> cotacao_dollar;
    cout << "Informe o valor em reais:";
    cin >> valor_em_real;

    conversao = valor_em_real/cotacao_dollar;
    cout << "Conversao:"<< conversao << "\n";
    return;
}
/** Questão 4: Leia um ângulo em graus e apresente-o convertido em radianos.
A fórmula de conversão é R = G * pi/180, sendo G o ângulo em
graus e R em radianos e pi = 3.141592.*/
void q4() {
    const double PI = 3.141592;
    double angulo, resultado_em_radianos;
    
    cout << "Informe o angulo em graus:";
    cin >> angulo;

    resultado_em_radianos = angulo*PI/180;

    cout <<"Resultado em radianos:" <<resultado_em_radianos<<"\n";
}

int main(){
    int questao;
        do{
            cout << "Questão desejada (0 para parar):";
            cin >>questao;
            switch(questao){
                case 0:
                    break;
                case 1:
                    q1();
                    break;
                case 2:
                    q2();
                    break;
                case 3:
                    q3();
                    break;
                case 4:
                    q4();
                    break;
                default:
                cout << "Opção invalida!, Selecione uma das 4 questões\n";
                break;
            }
    }while (questao !=0);
    return 0;
}