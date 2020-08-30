#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor (int vetor[TAM])
{

    int cont;

    cout << "\n";

    for (cont = 0; cont<TAM; cont++)
        cout << vetor[cont]<< "-";

    
}

void pilha_push(int pilha[TAM], int valor, int *topo)
{
     //caso nao possa colocar mais valores
    if (*topo == TAM -1)
    {
        cout << "Pilha cheia";
    }
    else
    {
        *topo = *topo+1;
        pilha [*topo]=valor;
        
    }
    

}

int main()
{
    int pilha [TAM];
    int topo = -1;    //topo da pilha

    imprime_vetor (pilha);

    pilha_push(pilha,5,&topo);
    pilha_push(pilha,7,&topo);
   
    return 0;
}