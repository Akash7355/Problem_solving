// #include<stdio.h>
// void main()
// {
//     int m,n;
//     printf("Enter the number of element in set A:\n");
//     scanf("%d",&m);
//     printf("Enter the number of element in set B:\n");
//     scanf("%d",&n);
//     int A[m],B[n];
//     printf("Enter the elements of set A:\n");
//     for(int i=0;i<m;i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Enter the elements of set B:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&B[i]);
//     }
//     printf("Intersection of A and B:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(A[i]==B[j]){
//                 printf("%d ",A[i]);
//             }
//         }
//     }
// }

// //POWER SET

// #include<stdio.h>
// #include<math.h>
// void main()
// {
//  int a[100],c[100],i,j,m,size;
//  printf("Enter size of set A=");
//  scanf("%d",&m);
//  printf("Enter elements of set A:\n ");
//  for(i=0;i<m;i++)
//  {
//  scanf("%d",&a[i]);
//  }
//  printf("Power set of A:\n");
//  size=pow(2,m);
//  for(i=0;i<size;i++)
//  {
//  printf("(");
//  for(j=0;j<m;j++)
//  {
//  if(i & 1<<j)
//  {
//  printf("%d ",a[j]);
//  }
//  }
//  printf(")");
//  printf("\n");
//  }
// }

// UNION OF SETS

#include <stdio.h>
void main()
{
    int a[100], b[100], c[200], i, j, a1, b1, c1, k, found = 0, z = 0;
    printf("enter size of set A and B\n");
    scanf("%d%d", &a1, &b1);
    printf("enter elements of set A");
    for (i = 0; i < a1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter elements of set B");
    for (i = 0; i < b1; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Union of A and B:\n");
    z = a1;
    c1 = a1 + b1;
    for (i = 0; i < a1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < b1; i++)
    {
        for (j = 0; j < a1; j++)
        {
            if (b[i] == a[j])
                found = 1;
        }
        if (found == 0)
        {
            c[z] = b[i];
            z++;
        }
        found = 0;
    }
    for (i = 0; i < z; i++)
    {
        printf(" %d ", c[i]);
    }
}

// // DIFFERENCE OF TWO SETS

// #include<stdio.h>
// int main()
// {
//     int A[100],B[100],C[100],m,n,o,z=0,f=0,i,j;
//     printf("Enter the number of elements in set A= ");
//     scanf("%d",&m);
//     printf("Enter the number of elements in set B= ");
//     scanf("%d",&n);
//     printf("Enter the elements of set A:\n");
//     for(i=0;i<m;i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Enter the elements of set B:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&B[i]);
//     }
//     printf("Difference of two sets are:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             if(A[i]==B[j]){
//                 f++;
//             }
//         }
//         if(f==0){
//                 C[z]=A[i];
//                 z++;
//             }
//             f=0;
//     }
//     for(i=0;i<z;i++){
//         printf("%d\n",C[i]);
//     }
// }