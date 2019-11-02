#include <stdio.h>
int main()
{
    int iterator, largeNumber, numberOne, numberTwo;

    printf("Enter two numbers : \n");

    scanf( "%d%d", &numberOne, &numberTwo );

    largeNumber = ( numberOne > numberTwo ) ? numberOne : numberTwo;

    for( iterator = largeNumber; iterator <= numberOne * numberTwo; iterator++ ) {
        if( iterator % numberOne == 0 && iterator % numberTwo == 0 ) {
            printf("L.C.M of %d and %d is : %d", numberOne, numberTwo, iterator);
            break;
        }
    }

    return 0;
}
