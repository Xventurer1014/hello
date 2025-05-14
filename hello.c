#include <stdio.h>

int myNumber = 42;
int myArray[] = {0, 2, 3, 4, 5};


int main(void) {
    printf("Hello, World!\n");
    printf("The value of data array is %d.\n", myArray[2]);
    /*printf("The array is percent sign ld bytes long.\n", sizeof(myArray));*/
    printf("The location of the first array is \t%p\n", myArray);
    printf("The location of the first element is \t%p\n", &myArray[0]);
    printf("The location of the secong element is at \t%p\n", &myArray[1]);
    printf("The largest value of a float is %E\n", __FLT_MAX__);
    printf("The shortest value of a float is %E\n", __FLT_MAX__);
}