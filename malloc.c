#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i;
    printf("input number of element ");
    scanf("%d",&n);
    a= (int*) malloc(n*sizeof(int));
    
    if(a==NULL)
    {
        printf("malloc error\n");
        return 1;
    }
    printf("Input array elements");
    for(i=0; i<n; i++)
    scanf("%d",a+i);
     printf("element are \n");
     for(i=0; i<n; ++i)
     {
        printf("%d",*(a+i));
     }
     printf("\n");
     free(a);
     return 0;
}