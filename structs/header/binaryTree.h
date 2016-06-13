#if !defined  _BINARYTREE
#define _BINARYTREE

    #include <stdbool.h>

    struct _BinaryTreeInt_{
        int *value;
        struct _BinaryTreeInt_ *left;
        struct _BinaryTreeInt_ *right;
    };

    typedef struct _BinaryTreeInt_ *BinaryTreeInt;

    BinaryTreeInt newBinaryTreeInt();
    void deleteBinaryTreeInt(BinaryTreeInt t);

    void setValueBinaryTreeInt(BinaryTreeInt t, int value);
    int getValueBinaryTreeInt(BinaryTreeInt t);

    BinaryTreeInt insertBinaryTreeInt(BinaryTreeInt t, int value);
    BinaryTreeInt searchBinaryTreeInt(BinaryTreeInt t, int value);

    bool _removeBinaryTreeInt(BinaryTreeInt t, BinaryTreeInt parent, int value);
    #define removeBinaryTreeInt(t, v) _removeBinaryTreeInt(t, NULL, v);

    BinaryTreeInt getSucessorBinaryTreeInt(BinaryTreeInt t);
    BinaryTreeInt getPredecessorBinaryTreeInt(BinaryTreeInt t);

    int heightBinaryTreeInt(BinaryTreeInt t);
    bool isEmptyBinaryTreeInt(BinaryTreeInt t);
    bool isLeafBinaryTreeInt(BinaryTreeInt t);

    void printBinaryTreeInt(BinaryTreeInt t, unsigned int spaces);

#endif
