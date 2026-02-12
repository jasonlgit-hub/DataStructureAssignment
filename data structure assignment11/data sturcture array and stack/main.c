#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};
    printf("Original array elements:\n");
for(int i = 0; i < 5; i++) {
    printf("%d ", myArray[i]);
}
printf("\n");

    myArray[1] = 25;


    printf("Modified array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

     printf("First element: %d\n", myArray[0]);
    printf("Last element: %d\n", myArray[4]);
    return 0;
}
