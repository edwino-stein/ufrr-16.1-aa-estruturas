
#include "common/common.h"
#include "structs/header/stack.h"

int main(int argc, char *argv[]){

    int n = randIntB2in(5, 10);
    StackInt s = newStackInt(n);

    print("Tamanho maximo da pilha: ");
    printLn(n);

    printLn("Empilhando:");
    while(!isFullStackInt(s)){
        n = randInt(100);
        printLn(n);
        pushStackInt(s, n);
    }

    printLn("\nDesempilhando:");
    while(!isEmptyStackInt(s)){
        popStackInt(s, &n);
        printLn(n);
    }

    deleteStackInt(s);
    return 0;
}
