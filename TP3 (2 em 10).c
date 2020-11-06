#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;                        //Data of the node
    struct pessoa *filhos;           //Address of the next node
    int numFilhos;
}*stpessoa;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

struct pessoa* buscaPessoa (struct pessoa* pessoaAsc, char nomeProcurado[]){
  int i, nivel=0;
  struct pessoa* pessoaRetornada;
  if(pessoaAsc->numFilhos != 0){
    for (i = 0; i < pessoaAsc->numFilhos; i++) {
      if(strcmp(nomeProcurado, pessoaAsc->filhos->nome)==0){
        printf("%s", nomeProcurado);
        nivel += 1;
      }
      else{
      buscaPessoa(pessoaAsc->filhos, nomeProcurado);
      }
    }
  }
  printf("%d", nivel);
}




int main()
{
    int n, m, i, a;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    //Quantidade de consultas
    char p1[50];
    char p2[50];
    printf("Quantidade de consultas: ");
    scanf("%d", &m);
    for(i=0; i < m; i++){
      printf("Insira nome Anscestral e nomeProcurado: ");
      scanf("%s %s", p1, p2);
      //buscaPessoa(p1, p2);
      a = rand()%(1-5);
      printf("%d\n", a);
    }
    return 0;
}
void createNodeList(int n)
{
    struct pessoa *fnNode, *tmp;
    int numFilhos, i, idade;
    char nome[50];
    char nomeAsc[50];
    stpessoa = (struct pessoa *)malloc(sizeof(struct pessoa));

    if(stpessoa == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : \n");
        printf("Nome: ");
        scanf("%s", nome);
        strcpy(stpessoa->nome, nome);
        printf("Idade: ");
        scanf("%d", &idade);
        stpessoa->idade = idade;
        stpessoa->filhos = NULL; // links the address field to NULL
        stpessoa->numFilhos = 0;
        tmp = stpessoa;
        printf("Nome Anscestral: ");
        scanf("%s", nomeAsc);

// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct pessoa *)malloc(sizeof(struct pessoa));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : \n", i);
                printf("Nome: ");
                scanf("%s", nome);
                strcpy(fnNode->nome, nome);
                printf("Idade: ");
                scanf(" %d", &idade);
                printf("Nome Anscestral: ");
                scanf("%s", nomeAsc);

                fnNode->idade = idade;      // links the num field of fnNode with num
                fnNode->filhos = NULL; // links the address field of fnNode with NULL
                fnNode->numFilhos = 0;

                if((strcmp(tmp->nome,nomeAsc)==0)){
                tmp->numFilhos+=1;
                tmp->filhos = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->filhos;
                }
            }
        }
    }

}
void displayList()
{
    struct pessoa *tmp;
    if(stpessoa == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stpessoa;
        while(tmp != NULL)
        {
            printf(" Nome = %s\n", tmp->nome);       // prints the data of current node
            printf(" Idade = %d\n", tmp->idade);
            printf(" Nº de Filhos = %d\n", tmp->numFilhos);
            tmp = tmp->filhos;                     // advances the position of current node
        }
    }
}
