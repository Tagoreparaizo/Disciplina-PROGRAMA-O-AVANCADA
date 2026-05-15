/*1) Crie um programa em C que cadastre até 50 alunos de uma
turma.
Cada aluno deve ter:

nome (string de até 50 caracteres)
matrícula (inteiro)
3 notas (float)
O programa deve:
1.Ler os dados de N alunos.
2.Calcular a média de cada aluno.
3.Exibir os dados dos alunos com média maior ou igual a 7.0. **/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
}aluno;

void cadastrarAluno(aluno classe[],int i){
    printf("Informe nome do aluno:\n");
    setbuf(stdin, NULL);
    fgets(classe[i].nome,50,stdin);
    printf("Informe matricula do aluno:\n");
    scanf("%d",&classe[i].matricula);
    printf("Informe a primeira nota do aluno:\n");
    scanf("%f",&classe[i].nota1);
    printf("Informe a primeira segunda do aluno:\n");
    scanf("%f",&classe[i].nota2);
    printf("Informe a primeira terceira do aluno:\n");
    scanf("%f",&classe[i].nota3);
}

void printarAluno(aluno classe[],int i){
    printf("Nome: %s\n", classe[i].nome);
    printf("Matricula: %d\n", classe[i].matricula);
    printf("Primeira nota: %.1f\n", classe[i].nota1);
    printf("Segunda nota: %.1f\n", classe[i].nota2);
    printf("Terceira nota: %.1f\n", classe[i].nota3);
}
int main()
{
    aluno classe[50];
    int entrada = 1;
    int i =0;
    while (entrada != 0 && i < 50){
        printf("Digite 1 para cadastrar aluno, 0 para parar:\n");
        scanf("%d",&entrada);
        if (entrada ==1){
            cadastrarAluno(classe,i);
            i++;
        }
        
    }
    for (int j =0; j<i;j++ ){
            float media = (classe[j].nota1+classe[j].nota2+classe[j].nota3)/3.0;
            if (media>7.0){
                printarAluno(classe,j);
                printf("Média: %.2f",media);
            }
        }

    return 0;
}
/*2) Crie um sistema de gerenciamento de estoque para uma loja.
Cada produto deve conter:

código (int)
nome (string até 40 chars)
preço (float)
quantidade em estoque (int)

O programa deve:
1.Permitir cadastrar até 100 produtos.
2.Exibir todos os produtos cadastrados.
3.Permitir buscar um produto pelo código e atualizar sua quantidade.
4.Exibir o valor total do estoque (somatório de preço × quantidade).**/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
  int codigo;
  char nome[40];
  float preco;
  int estoque;
}produto;

void cadastrarProduto(produto loja[],int i){
  printf("Informe nome do produto:\n");
  setbuf(stdin, NULL);
  fgets(loja[i].nome,40,stdin);
  printf("Informe o código do produto:\n");
  scanf("%d",&loja[i].codigo);
  printf("Informe o preço do produto:\n");
  scanf("%f",&loja[i].preco);
  printf("Informe o código do produto:\n");
  scanf("%d",&loja[i].estoque);
}
void printarProduto(produto loja[],int i){
  printf("Código: %d\n", loja[i].codigo);
  printf("Nome: %s\n", loja[i].nome);
  printf("Preço: %.2f\n", loja[i].preco);
  printf("Estoque: %d\n", loja[i].estoque);
}

void atualizarProduto(produto loja[], int totalCadastrados){
  int codigo;
  printf("Informe código do produto:\n");
  scanf("%d",&codigo);
  for (int j =0; j<totalCadastrados;j++){
    if (loja[j].codigo == codigo){
      printarProduto(loja,j);
      printf("Informe a nova quantidade em estoque:");
      scanf("%d",&loja[j].estoque);
      break;
    }
  }
}

int main()
{
  produto loja[100];
  int entrada = 1;
  int i =0;
  float totalLoja = 0;
  while (entrada != 0 && i < 100){
    printf("Digite 1 para cadastrar produto, 2 para buscar produto 0 para parar:\n");
    scanf("%d",&entrada);
    if (entrada ==1){
      cadastrarProduto(loja,i);
      i++;
    }
    else if (entrada ==2){
      atualizarProduto(loja,i);
    }
  }
  for (int j =0; j<i;j++ ){
      float totalProduto = loja[j].preco*loja[j].estoque;
      totalLoja += totalProduto;
      printarProduto(loja,j);
    }
  printf("Valor total do estoque: %.2f",totalLoja);
  return 0;
}