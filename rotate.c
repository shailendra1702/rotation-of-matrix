#include<stdio.h>
void main()
{ 
    int b[4][4],a,i,j,k,temp,n;
    
    printf("Enter n for square matrix:\n");
    scanf("%d",&n);
    
    printf("\nEnter the matrix:\n ");
    for(j=0;j<n;j++)
    {for(i=0;i<n;i++)
    {scanf("%d",&b[i][j]);}
    }

     printf("\n The matrix is:\n");
     for(j=0;j<n;j++)
      {for(i=0;i<n;i++)
        {printf("%d \t",b[i][j]);}
        printf("\n");
      }
     

    for(a=0,k=n-1;a<n;a++,k--)
    {for(j=a;j<=a;j++)
    {for(i=a;i<k;i++)
        {
             temp=b[i][j];
             b[i][j]=b[i+1][j];
             b[i+1][j]=temp;
        }
    }
    
    for(i=k;i<=k;i++)
     { for(j=a;j<=k-1;j++)
        {
             temp=b[i][j];
             b[i][j]=b[i][j+1];
             b[i][j+1]=temp;
        }
     }
    
    for(j=k;j<=k;j++)
     { for(i=k;i>a;i--)
       {
             temp=b[i][j];
             b[i][j]=b[i-1][j];
             b[i-1][j]=temp;
       }
     }

    for(i=a;i<=a;i++)
     { for(j=k;j>a+1;j--)
        {
             temp=b[i][j];
             b[i][j]=b[i][j-1];
             b[i][j-1]=temp;
        }
     } 
    
    }

    printf("\n The matrix is:\n");
     for(j=0;j<n;j++)
      {  printf("\n");
           for(i=0;i<n;i++)
        {printf("%d \t",b[i][j]);}
	
      }
     


}


