
#include "common/common.h"
#include "structs/header/hashTable.h"

int main(int argc, char *argv[]){

    int n, size = randIntB2in(30, 30);
    HashTableInt ht = newHashTableInt(15);

    for(int i = 0; i < size; i++){
        n = randInt(1000);
        print(n);
        print(", ");
        insertHashTableInt(ht, n);
    }

    printNewLine();
    printNewLine();

    printHashTableInt(ht);
    deleteHashTableInt(ht);
    return 0;
}
