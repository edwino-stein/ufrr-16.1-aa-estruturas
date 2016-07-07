#include "../header/hashTable.h"
#include <stdlib.h>
#include <stdio.h>

HashTableInt newHashTableInt(unsigned int size){

    HashTableInt ht = (HashTableInt) malloc(sizeof(struct _HashTableInt_));
    if(!ht){
    	perror("malloc");
    	exit(1);
	}

    ht->table = (RBTreeInt*) malloc(sizeof(RBTreeInt) * size);
    if(!ht->table){
    	perror("malloc");
    	exit(1);
	}

    for(int i = 0; i < size; i++)
        ht->table[i] = NULL;

    ht->size = size;
    return ht;
}

void deleteHashTableInt(HashTableInt ht){

    for(int i = 0; i < ht->size; i++){
        if(ht->table[i] != NULL) deleteRBTreeInt(ht->table[i]);
        ht->table[i] = NULL;
    }

    free(ht->table);
    ht->table = NULL;
    free(ht);
}

unsigned int calcHashHashTableInt(unsigned int size, int value){
    return value % size;
}

bool insertHashTableInt(HashTableInt ht, int value){
    unsigned int hash = calcHashHashTableInt(ht->size, value);

    if(ht->table[hash] == NULL) ht->table[hash] = newRBTreeInt();
    insertRBTreeInt(ht->table[hash], value);

    return true;
}

bool hasValueHashTableInt(HashTableInt ht, int value){
    unsigned int hash = calcHashHashTableInt(ht->size, value);

    if(ht->table[hash] == NULL) return false;
    RBTreeNodeInt node = searchRBTreeInt(ht->table[hash], value);
    return node != NULL;
}

void printERDRBTreeInt(RBTreeNodeInt t){
    if(t == NULL) return;
    printERDRBTreeInt(t->left);
    printf(" %d,", t->value);
    printERDRBTreeInt(t->right);
}

void printHashTableInt(HashTableInt ht){
    for(int i = 0; i < ht->size; i++){
        printf("%d ->", i);
        if(ht->table[i] == NULL) printf(" null;\n");
        else if(isEmptyRBTreeInt(ht->table[i])) printf(" null;\n");
        else{
            printERDRBTreeInt(ht->table[i]->root);
            printf("\b;\n");
        }
    }
}
