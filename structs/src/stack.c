#include "../header/stack.h"
#include <stdio.h>
#include <stdlib.h>

StackInt newStackInt(unsigned int maxSize){

    StackInt s = malloc(sizeof(struct _StackInt_));
    if(!s){
    	perror("malloc");
    	exit(1);
	}


    if(maxSize <= 0) maxSize = DEFAULT_MAX_STACK_SIZE;
    s->data = calloc(maxSize, sizeof(int));
    if(!s->data){
    	perror("calloc");
    	exit(1);
	}

    s->top = 0;
    s->maxSize = maxSize;

    return s;
}

void deleteStackInt(StackInt s){
    free(s->data);
    s->data = NULL;

    free(s);
}

bool pushStackInt(StackInt s, int value){
    if(isFullStackInt(s)) return false;
    s->data[s->top++] = value;
    return true;
}

bool popStackInt(StackInt s, int *value){
    if(isEmptyStackInt(s)) return false;
    *value = s->data[--s->top];
    return true;
}

bool isFullStackInt(StackInt s){
    return s->top > s->maxSize;
}
bool isEmptyStackInt(StackInt s){
    return s->top == 0;
}
