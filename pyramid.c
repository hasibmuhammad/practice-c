#include <stdio.h>

int main()
{
    int i, j;

    for( i = 0; i <= 3; i++ ) {
        for( j = 0; j <= i; j++ ) {
            printf("*");
        }
        printf("\n");
    }

    for( i = 1; i <= 4; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf("%d",j);
        }
        printf("\n");
    }

    for( i = 1; i <= 4; i++ ) {
        for( j = i; j >= 1; j-- ) {
            printf("%d",j);
        }
        printf("\n");
    }

    for( i = 4; i >= 1; i-- ) {
        for( j = 1; j <= i; j++ ) {
            printf("%d",j);
        }
        printf("\n");
    }

    for( i = 1; i <= 4; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf("%d ",j);
        }
        printf("\n");
    }

    int k=1;
    for( i = 1; i <= 4; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf("%d ",k++);
        }
        printf("\n");
    }

    return 0;
}
