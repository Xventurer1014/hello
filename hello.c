#include <stdio.h>

int myNumber = 42;
int myArray[] = {0, 2, 3, 4, 5};


int main(void) {
    printf("Hello, World!\n");
    printf("Third value of data array is %d.\n", myArray[2]);
    printf("The array is %d bytes long.\n", sizeof(myArray));
}