#include "pointers.h"
void print_collection(int a[], int n)
{
    for(int i = 0; i < 13; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(void)
{
    int a[]= {3,4,5,2,1,8,9,10,7,2,11,45,6,9};
    print_collection(a,13);
    bubble_sort(&a,13);
    print_collection(a,13);


    return 0;
}
