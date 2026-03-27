/** 1) Escreva um programa que lê cinco inteiros e determina e imprime o
maior e o menor inteiro no grupo */
void q4(){
    int n1,n2,n3,n4,n5,maior,menor;
    std:: cout<< "Informe os 5 inteiros separadamente:" <<std:: endl;
    std:: cin >> n1>>n2>>n3>>n4>>n5;

    maior = n1;
    menor = n1;

    if (n2>maior) maior = n2;
    else menor=n2;
    if (n3>maior) maior = n3;
    else if (n3<menor) menor = n3;
    if (n4>maior) maior = n4;
    else if (n4<menor) menor = n4;
    if (n5>maior) maior = n5;
    else if (n5<menor) menor =n5;
    
    std::cout<<"Maior inteiro:"<< maior <<"\nMenor Inteiro:"<<menor <<std::endl;
}