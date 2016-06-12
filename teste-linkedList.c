
#include "common/common.h"
#include "structs/header/linkedList.h"

int main(int argc, char *argv[]){

    int n, size;
    LinkedListInt l = newLinkedListInt();
    LinkedListIntNode node = NULL;

    size = 1;
    size = randIntB2in(1, 5);
    printf("Incerindo %d valores:\n", size);
    for(int i = 0; i < size; i++){
        n = randInt(100);
        print(n);
        print(", ");
        insetBackLinkedListInt(l, n);
    }
    printNewLine();

    size = randIntB2in(1, 5);
    printf("Incerindo %d valores no inicio:\n", size);
    for(int i = 0; i < size; i++){
        n = randInt(100);
        print(n);
        print(", ");
        insetFrontLinkedListInt(l, n);
    }
    printNewLine();

    printf("Lista resultante com  %d valores:\n", l->size);
    for(int i = 0; i < l->size; i++){
        n = getLinkedListIntValue(l, i);
        printf("l[%d] = %d, ", i, n);
    }
    printNewLine();

    readF(&n, "Remover valor: ");
    node = searchValueLinkedListInt(l, n);

    if(node != NULL){

        removeLinkedListNode(l, node);

        printf("Lista resultante com  %d valores:\n", l->size);
        for(int i = 0; i < l->size; i++){
            n = getLinkedListIntValue(l, i);
            printf("l[%d] = %d, ", i, n);
        }
        printNewLine();
    }
    else{
        printLn("O valor não está na lista");
    }

    deleteLinkedListInt(l);
    return 0;
}
