#include <stdio.h>

typedef struct{
    void* array = NULL; //array of generic type
    int cap; //initial capacity
    int itemcount; //amount of items
    void (*push)(vecta*, void*);
    int (*isEmpty)(vecta*);
    void (*removeAt)(vecta*, int);
    void (clear)(vecta*);
} vecta;

int isEmpty(vecta* dynarr);
void push(vecta* dynarr, void* item);
void removeAt(vecta* dynarr, int index);
void clear(vecta* dynarr);
void init(vecta* dynarr);
