#include <stdio.h>
#include "binarys.h"

void main()
{
    int a[20], temp=0, i, j, n, ele, high, mid, low, flag=0;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nenter element to be searched: ");
    scanf("%d",&ele);

    binary_search(ele, n, a);
}