
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;


    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
   a=calloc(n, sizeof(float*));
   for (int i=0;i<n;i++){
     a[i]=calloc(n, sizeof(float));
   }
   b=calloc(n, sizeof(float));
   c=calloc(n, sizeof(float));
   for (int i=0;i<n;i++){
     b[i]=1.0f;
     for (int j=0;j<n;j++){
       a[i][j]=1.0f;
     }
   }
   for (int i=0;i<n;i++){
     for (int j=0;j<n;j++){
       c[i]+=a[i][j]*b[j];
     }
   }
   printf("Matrix-vector product:\n");
   for (int i=0;i<n;i++){
     printf("%.2f ", c[i]);
   }
   printf("\n");
   for (int i=0;i<n;i++){       
     free(a[i]);
   }
   free(a);
   free(b);
   free(c);
    
    return 0;
 }
