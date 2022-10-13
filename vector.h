#include <stdio.h>

typedef struct
{
    int cap; //initial capacity
    int itemcount; //amount of items
    typedef void (*push)(vecta*, void*);
    typedef int (*isEmpty)(vecta*);
    typedef void (*removeAt)(vecta*, int);
    typedef void (*clear)(vecta*);
    void* array[]; //array of generic type, default capacity is 3

} vecta;

int isEmpty(vecta* dynarr);
void push(vecta* dynarr, void* item);
void removeAt(vecta* dynarr, int index);
void clear(vecta* dynarr);
void init(vecta* dynarr);