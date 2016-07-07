#if !defined  _HASHTABLE
#define _HASHTABLE

    #include "RBTree.h"
    #include <stdbool.h>

    struct _HashTableInt_{
        RBTreeInt *table;
        unsigned int size;
    };

    typedef struct _HashTableInt_ *HashTableInt;

    HashTableInt newHashTableInt(unsigned int size);
    void deleteHashTableInt(HashTableInt ht);

    unsigned int calcHashHashTableInt(unsigned int size, int value);
    bool insertHashTableInt(HashTableInt ht, int value);
    bool hasValueHashTableInt(HashTableInt ht, int value);

    void printHashTableInt(HashTableInt ht);

#endif
