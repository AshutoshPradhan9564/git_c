#include<stdio.h>
void main()
{ 
    int m, i, c=-1, j, f;
    printf("Enter the number of rows that you want in both the compact matrices: ");
    scanf("%d", &m);
    int a[m][3];
    int b[m][3];
    printf("\nEnter the elements into the first matrix: \n");
    for(i=0; i<m;i++)
       {for(j=0; j<3; j++)
           scanf("%d", &(a[i][j]));
       }
    printf("\nEnter the elements into the second matrix: \n");
    for(i=0; i<m; i++)
       {for(j=0; j<3; j++)
           scanf("%d", &(b[i][j]));
       }
    printf("\nPrinting the first matrix:\n\n");
    for(i=0;i<m;i++)
       {for(j=0;j<3;j++)
            printf("%d ",(a[i][j]));
        printf("\n");
       }
    printf("\nPrinting the second matrix:\n\n");
    for(i=0;i<m;i++)
       {for(j=0;j<3;j++)
            printf("%d ",(b[i][j]));
        printf("\n");
       }
    printf("\nPrinting the resultant matrix:\n\n");
    for(i=0;i<m;i++)
       {
        f=0;
        for(j=0;j<3;j++)
           {
            if((a[i][j] == b[i][j]) && (a[i][j+1] == b[i][j+1]) && ((j+1)!=3))
              {
                c=j+2;
                break;
              }
                else f++;
           }
       
    if(f==3)
      {for(j=0;j<3;j++)
          printf("%d ", (a[i][j]));
       printf("\n");
      for(j=0;j<3;j++)
          printf("%d ", (b[i][j]));
      }
    else
       {
        for(j=0;j<3;j++)
           {
            if(j==c)
                printf("%d ",((a[i][j])+(b[i][j])));
            else
                printf("%d ", (a[i][j]));
           }
       }
    printf("\n");
}
}