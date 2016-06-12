#include "../header/queue.h"
#include <stdio.h>
#include <stdlib.h>

QueueInt newQueueInt(unsigned int maxSize){

    QueueInt q = malloc(sizeof(struct _QueueInt_));
    if(!q){
    	perror("malloc");
    	exit(1);
	}

    if(maxSize <= 0) maxSize = DEFAULT_MAX_QUEUE_SIZE;
    q->data = calloc(maxSize, sizeof(int));

    if(!q->data){
    	perror("calloc");
    	exit(1);
	}

    q->front = 0;
    q->back = 0;
    q->size = 0;
    q->maxSize = maxSize;

    return q;
}

void deleteQueueInt(QueueInt q){
    free(q->data);
    q->data = NULL;
    free(q);
}

bool pushQueueInt(QueueInt q, int value){

    if(isFullQueueInt(q)) return false;

    q->data[q->back++] = value;
    q->size++;

    if(q->back >= q->maxSize) q->back = 0;

    return true;
}

bool popQueueInt(QueueInt q, int *value){

    if(isEmptyQueueInt(q)) return false;

    *value = q->data[q->front++];
    q->size--;

    if(q->front >= q->maxSize) q->front = 0;

    return true;
}

bool isFullQueueInt(QueueInt q){
    return q->size >= q->maxSize;
}

bool isEmptyQueueInt(QueueInt q){
    return q->size == 0;
}
