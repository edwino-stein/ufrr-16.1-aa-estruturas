#if !defined  _QUEUE
#define _QUEUE

    #include <stdbool.h>

    #define DEFAULT_MAX_QUEUE_SIZE 255

    struct _QueueInt_{
        unsigned int front;
        unsigned int back;
        int *data;
        unsigned int size;
        unsigned int maxSize;
    };

    typedef struct _QueueInt_ *QueueInt;

    QueueInt newQueueInt(unsigned int maxSize);
    void deleteQueueInt(QueueInt q);

    bool pushQueueInt(QueueInt q, int value);
    bool popQueueInt(QueueInt q, int *value);

    bool isFullQueueInt(QueueInt q);
    bool isEmptyQueueInt(QueueInt q);

    #define enqueue(q, v) pushQueueInt(q, v);
    #define dequeue(q, v) popQueueInt(q, v);

#endif
