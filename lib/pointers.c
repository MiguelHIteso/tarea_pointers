//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"
void swap(int *a, int *b)
{
    int n = *a;
    *a = *b;
    *b = n;
}
int bubble_sort(int *target, int count)
{
  // aqui su implementación.
    for(int i = 0; i < count - 2; i++)
    {
        for(int j = 0; j < count - 1; j++)
        {
            if(*(target + j) > *(target + j + 1))
            {
                swap((target + j),(target + j + 1));
            }
        }
    }
  return 0;
}

void insertion_sort(int *collection, int count)
{
    int selection = 0, h = 0;
    for(int i =0; i < count; i++)
    {
        selection = *(collection + i);
        h = i;
        while(h > 0 && *(collection + h - 1) > selection)
        {
            *(collection + h) = *(collection + h -1);
            *(collection + h -1) = selection;
            h--;
        }
    }
}

void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
