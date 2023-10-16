#include <stdio.h>

int binary_search(int A[],int n, int target);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&A[i]);
    }
    int target;
    printf("Enter target you want to search: ");
    scanf("%d",&target);
    if(binary_search(A,n,target))
    {
        printf("Target present in array\n");
    }
    else
    {
        printf("Target not present in array:\n");
    }
    return 0;
}

int binary_search(int A[],int n, int target)
{
    if(A[n/2]==target)
    {
        return 1;
    }
    else if(A[n/2]<target)
    {
        int size = n-((n/2)+1);
        if (size==0)
        {
            return 0;
        }
        int P[size];
        for(int i=(n/2+1), j=0;i<n;i++,j++)
        {
            P[j]=A[i];
        }
        return binary_search(P,size,target);
    }
    else if(A[n/2]>target)
    {
        int size = (n/2-1)+1;
        if (size==0)
        {
            return 0;
        }
        int Q[size];
        for(int i=0, j=0;i<=(n/2-1);i++,j++)
        {
            Q[j]=A[i];
        }
        return binary_search(Q,size,target);
    }
    return 0;
}
