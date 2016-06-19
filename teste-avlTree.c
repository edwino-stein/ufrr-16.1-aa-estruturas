#include "common/common.h"
#include "structs/header/avlTree.h"

int main(int argc, char *argv[]){

    int n, size = randIntB2in(10, 15);
    AvlTreeInt t = newAvlTreeInt();

    for(int i = 0; i < size; i++){

        n = randInt(100);

        print(n);
        print(", ");

        insertAvlTreeInt(t, n);
    }

    printNewLine();
    print("Altura da arvore: ");
    printLn(heightAvlTreeInt(t));

    printAvlTreeInt(t);
    printNewLine();

    readF(&n, "Buscar e remover: ");
    printf("O sucessor de %d na arvore é %d\n", n, getValueAvlTreeInt(getSucessorAvlTreeInt(searchAvlTreeInt(t, n))));
    printf("O precessor de %d na arvore é %d\n", n, getValueAvlTreeInt(getPredecessorAvlTreeInt(searchAvlTreeInt(t, n))));

    removeAvlTreeInt(t, n);

    printNewLine();
    printAvlTreeInt(t);
    printNewLine();

    deleteAvlTreeInt(t);
    return 0;
}
