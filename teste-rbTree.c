
#include "common/common.h"
#include "structs/header/RBTree.h"

int main(int argc, char *argv[]){

    int n, size = randIntB2in(5, 10);
    RBTreeInt t = newRBTreeInt();

    for(int i = 0; i < size; i++){
        n = randInt(100);
        print(n);
        print(", ");
        insertRBTreeInt(t, n);
    }

    printRBTreeInt(t);

    readF(&n, "Buscar: ");

    if(searchRBTreeInt(t, n) == NULL)
        printLn("O valor não existe na arvore");
    else
        printLn("O valor existe na arvore");

    deleteRBTreeInt(t);
    return 0;
}
