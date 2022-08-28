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
    int swag = 0;
    for(int i = 0; i < count - 2; i++)
    {
        for(int j = 0; j < count - 1; j++)
        {
            if(*(target + j) > *(target + j + 1))
            {
                swap((target + j),(target + j + 1));
                swag++;
            }
        }
    }
    return swag;
}

void insertion_sort(int *collection, int count)
{
    int selection = 0, h = 0;
    for(int i = 0; i < count; i++)
    {
        selection = *(collection + i);
        h = i;
        while(h > 0 && *(collection + h - 1) > selection)
        {
            *(collection + h) = *(collection + h - 1);
            *(collection + h - 1) = selection;
            h--;
        }
    }
}

void reverse(int *collection, int count)
{
    int selection = 0, h = 0;
    for(int i = count - 1; i >= 0; i--)
    {
        selection = *(collection + i);
        h = i;
        while(h < count - 1 && *(collection + h + 1) > selection)
        {
            *(collection + h) = *(collection + h + 1);
            *(collection + h + 1) = selection;
            h++;
        }
    }
}

int calulate_frequency(int *collection, int count, int target)
{
    int freq = 0;
    for(int i = 0; i < count; i++)
    {
        if(*(collection + i) == target)
            freq++;
    }
    return target;
}
