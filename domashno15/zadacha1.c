#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned uIdx = 0;
    unsigned uNumOfElem = 0;
    int* piValues = NULL;
    int iSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &uNumOfElem);

    piValues = (int*) malloc(uNumOfElem * sizeof(int));
    if(NULL == piValues){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("\nAddress of iSum: %p, Pointer piValues: %p\n", &iSum, piValues);
    printf("Elements after malloc: %u \n", uIdx);

    for(uIdx = 0; uIdx < uNumOfElem; uIdx++){
        printf("%p, ", (piValues + uIdx));
    }

    printf("\n\n");

    for(uIdx = 0; uIdx < uNumOfElem; uIdx++){
        printf("Enter %dth element: ", uIdx);
        scanf("%d", piValues + uIdx);
        iSum += *(piValues + uIdx);
    }

    printf("\nSum of elements: %d\n", iSum);
    return 0;
}
