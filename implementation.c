#include "vector.h"
#include <stdio.h>

int isEmpty(vecta* dynarr)
{
    if(dynarr -> itemcount == 0)
    {
        return 1;
    } else {
        return 0;
    }
}
void push(vecta* dynarr, void* item)
{
    if(isEmpty(dynarr))
    {
        dynarr -> itemcount++;
        dynarr -> array = item; 
    } else if((dynarr -> cap) <= (dynarr -> itemcount))
    {

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

}