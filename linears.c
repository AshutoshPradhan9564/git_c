#include <stdio.h>
#include "linears.h"

void main()
{
   int a[20], n, i, key, flag=0;
   printf("Enter n: ");
   scanf("%d", &n);

   printf("Enter the elements: ");
   for (i=0; i<n; i++)
      scanf("%d", &a[i]);
   
   printf("Enter the element to be searched: ");
   scanf("%d", &key);

   linear_search(key, n, a);
}