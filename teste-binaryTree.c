
#include "common/common.h"
#include "structs/header/binaryTree.h"

int main(int argc, char *argv[]){

    int n, size = randIntB2in(10, 15);
    BinaryTreeInt t = newBinaryTreeInt();

    for(int i = 0; i < size; i++){

        n = randInt(100);
        print(n);
        print(", ");

        insertBinaryTreeInt(t, n);
    }

    printNewLine();
    print("Altura da arvore: ");
    printLn(heightBinaryTreeInt(t));

    printBinaryTreeInt(t);
    printNewLine();

    readF(&n, "Buscar e remover: ");
    printf("O sucessor de %d na arvore é %d\n", n, getValueBinaryTreeInt(getSucessorBinaryTreeInt(searchBinaryTreeInt(t, n))));
    printf("O precessor de %d na arvore é %d\n", n, getValueBinaryTreeInt(getPredecessorBinaryTreeInt(searchBinaryTreeInt(t, n))));

    removeBinaryTreeInt(t, n);

    printNewLine();
    printBinaryTreeInt(t);
    printNewLine();

    deleteBinaryTreeInt(t);
    return 0;
}
