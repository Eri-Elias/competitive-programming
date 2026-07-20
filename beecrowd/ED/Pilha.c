#include <stdio.h>
#define Tipo int

typedef struct pilha {
    int qtde;
    Tipo *p;
    int topo;
    int tamanho;
} Pilha;

void criarPilha(Pilha *pilha, int tamanho) {
    pilha->p = (Tipo*) malloc(tamanho * sizeof(Tipo));
    pilha->qtde = 0;
    pilha->topo = -1;
    pilha->tamanho = tamanho;
}

int push(Pilha *pilha, Tipo valor) {
    if (pilha->qtde == pilha->tamanho) {
        return 0; // pilha cheia
    }

    pilha->topo++;
    pilha->p[pilha->topo] = valor;
    pilha->qtde++;

    return 1;
}

int pop(Pilha *pilha, Tipo *valor) {
    if (pilha->qtde == 0) {
        return 0; // pilha vazia
    }

    *valor = pilha->p[pilha->topo];
    pilha->topo--;
    pilha->qtde--;
    
    return 1;
}

int main () {
    Pilha minhaPilha;

    criarPilha(&minhaPilha, 5);

    push(&minhaPilha, 10);
    push(&minhaPilha, 20);
    push(&minhaPilha, 30);

    int removido;

    pop(&minhaPilha, &removido);
    printf("Valor removido: %d\n", removido);

    return 0;

}