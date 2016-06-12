
#include "common/common.h"
#include "structs/header/queue.h"

int main(int argc, char *argv[]){

    int n, size = randIntB2in(5, 10);
    QueueInt q = newQueueInt(size);

    print("Tamanho maximo da fila: ");
    printLn(size);

    printLn("Emfileirando até encher:");
    while(!isFullQueueInt(q)){
        n = randInt(100);
        printLn(n);
        enqueue(q, n);
    }

    printLn("\nDesemfileirando metade:");
    while(q->size > size/2){
        dequeue(q, &n);
        printLn(n);
    }

    printLn("\nEmfileirando até encher novamente:");
    while(!isFullQueueInt(q)){
        n = randInt(100);
        printLn(n);
        enqueue(q, n);
    }

    printLn("\nDesemfileirando tudo:");
    while(!isEmptyQueueInt(q)){
        dequeue(q, &n);
        printLn(n);
    }

    deleteQueueInt(q);
    return 0;
}
