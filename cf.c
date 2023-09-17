#include <stdio.h>

void main()
{
    int k=0, f=0, i, j, n, m;
    printf("Enter the number ofrows and columns of the sparse matrix: ");
    scanf("%d%d", &m, &n);

    int a[m][n];
    printf("Enter the elements:\n");
    for (i=0; i<m; i++)
        {
         for (j=0; j<n; j++)   
            scanf("%d", &(a[i][j]));
        }
    
    printf("The entered sparse matrix is: \n");
    for (i=0; i<m; i++)
        {
         for (j=0; j<n; j++)   
         {
            if (a[i][j]!=0)
                f++;
        printf("%d ", (a[i][j]));
         }
        printf("\n");
        
        }
    
    int cf[f][3];
    for (i=0; i<m; i++)
        {
         for (j=0; j<n; j++)   
            {
                if (a[i][j]!=0)
                {
                    cf[k][0]=i;
                    cf[k][1]=j;
                    cf[k][2]=a[i][j];
                    k++;
                }
            }
        }
    printf("\nThe compact form is: \n");
    for (i=0; i<f; i++)
        {
         for (j=0; j<3; j++)   
            printf("%d ", (cf[i][j]));
            printf("\n");
        }


    

}