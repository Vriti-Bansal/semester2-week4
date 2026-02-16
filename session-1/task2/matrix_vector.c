
/*
 * Matrix-vector product
 */

#include <stdio.h>

int main(void) {
    float a[4][4];
    float b[4];
    float c[4];

    for(int j=0;j<4;j++)
        b[j]=1.0;

    for(int k=0;k<4;k++){
        c[k]=0.0;
        for(int j=0;j<4;j++){
            a[k][j]=1.0;
            c[k]+=a[k][j]*b[j];
        }
        printf("%.1f\n",c[k]);
    }

    return 0;
}
