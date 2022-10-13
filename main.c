#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>
#include "vector.h"
int main (int argc, char** args)
{
 vecta da;
 init(&da);
 printf("Initialization - count: %d, capacity: %d\n", da.itemcount, da.cap);
//Here you notice that our struct behaves like a class with the help of function pointers
 da.push(&da, "Gizem");
 da.push(&da, "NYU");
 da.push(&da, "CSCI");
 da.push(&da, "201");
 da.push(&da, "Fall");
 da.push(&da, "2022");
 da.push(&da, "Project201");
 printf("Step 2 - count: %d, capacity: %d\n", da.itemcount, da.cap);
 for (int i = 0; i < da.itemcount; i ++)
 {
 printf("%s\n", (char*)da.array[i]);
 }

 da.removeAt(&da, 2);
 printf("Step 3 - count: %d, capacity: %d\n", da.itemcount, da.cap);
 printf("\nDynamic Array data:\n\n");
 for (int i = 0; i < da.itemcount; i ++)
 {
 printf("%s\n", (char*)da.array[i]);
 }
 da.clear(&da);
 if(da.isEmpty)
 printf("The array is empty now\n");

 return 0;
}