#include <stdio.h>

typedef struct 
{
    int lenght;
    int width;
}rectangle;

typedef struct 
{
    int x;
    int y;
}position;


int main()
{
    rectangle numberuno = {5,10};
    printf("The Width of is: %d \n",numberuno.width);

    position path[] = {{1,2},{3,4},{5,6},{7,8}};
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        printf("Position X: %d and Position Y: %d",path[i].x, path[i].y);
        printf("\n");
    }
    /*position *structPointer = &path;
    printf("Postion of x %d\n", structPointer–>position.x); not working because arrow*/
    
    return 0;
}