#include "vector.h"
#include <stdio.h>

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
    //if array is empty, then put the item at index 0
    if(isEmpty(dynarr))
    {
        dynarr -> array[0] = item; 
        dynarr -> itemcount++;
    } else if((dynarr -> cap) = (dynarr -> itemcount))
    {
        //if the array's capacity has been reached, resize array
        expand(dynarr);
        dynarr -> array[itemcount] = item;
        dynarr -> itemcount++;
    }
}
void removeAt(vecta* dynarr, int index)
{

}
void clear(vecta* dynarr)
{

}
void init(vecta* dynarr)
{
    dynarr -> capacity = 3;
    dynarr -> array = malloc(sizeof(int) * 3);
    
}


/* additional functions */ 
// triples capacity of given arr
void expand(vecta* dynarr)
{

}