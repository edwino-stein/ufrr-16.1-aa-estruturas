#if !defined  _STACK
#define _STACK

    #include <stdbool.h>

    #define DEFAULT_MAX_STACK_SIZE 255

    struct _StackInt_{
        unsigned int top;
        int *data;
        unsigned int maxSize;
    };

    typedef struct _StackInt_ *StackInt;

    StackInt newStackInt(unsigned int maxSize);
    void deleteStackInt(StackInt s);

    bool pushStackInt(StackInt s, int value);
    bool popStackInt(StackInt s, int *value);

    bool isFullStackInt(StackInt s);
    bool isEmptyStackInt(StackInt s);

#endif
