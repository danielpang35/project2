#include "vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEmpty(vecta* dynarr)
{
    //if there have been no items added, is empty
    if(dynarr -> itemcount == 0)
    {
        return 1;
    } else {
        return 0;
    }
}
void push(vecta* dynarr, void* item)
{
    //curr holds the index where item will be inserted
    int curr = dynarr -> itemcount;

    //if array is empty, then put the item at index 0
    if(isEmpty(dynarr))
    {
        dynarr -> array[curr] = item; 
        dynarr -> itemcount++;
    } else if((dynarr -> cap) == (dynarr -> itemcount))
    {
        //if the array's capacity has been reached, resize array
        expand(&dynarr);
        dynarr -> array[curr] = item;
        dynarr -> itemcount++;
    } else {
        //otherwise, just add the item to the array
        dynarr -> array[curr] = item;
        dynarr -> itemcount++;
    }
}
void removeAt(vecta* dynarr, int index)
{
    //curr holds the index of the last element
    int curr = (dynarr -> itemcount) - 1;

    //swap last element and element at index
    //remove last element
    dynarr -> array[index] = dynarr -> array[curr];
    dynarr -> array[curr] = NULL;
    dynarr -> itemcount--;
}
void clear(vecta* dynarr)
{
    dynarr -> array = memset(dynarr -> array, 0, dynarr -> cap);
}
void init(vecta* dynarr)
{
    //initialize capacity, allocate 3 bytes worth of space to array
    dynarr -> cap = 3;
    dynarr -> array = (void*)malloc(dynarr -> cap);
    //initialize pointers
    dynarr -> clear = &clear;
    dynarr -> push = &clear;
    dynarr -> isEmpty = &clear;
    dynarr -> removeAt = &clear;
}


/* additional functions */ 
// triples capacity of given arr
void expand(vecta* dynarr)
{
    int Newcap = dynarr -> cap * 3;
    dynarr -> cap = Newcap;
    dynarr -> array = realloc(dynarr -> array, Newcap);
}