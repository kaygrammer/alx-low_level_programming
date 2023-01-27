#include <stdio.h>

void main(){
    int LA[] = {1, 3, 5, 7, 8};
    int item = 10, k = 3, n= 5; //k = position where the new element will be inserted
    int i = 0, j = n;
    printf("the original array element are :\n");
    for (i = 0; i<n; i++){
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    n = n + 1;
    while(j >= k){
        LA[j+1] = LA[j];
        j = j- 1;
    }
    LA[k] = item;
    printf("the array elements after insertion :\n");

    for(i = 0; i<n; i++){
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    
    
    }

