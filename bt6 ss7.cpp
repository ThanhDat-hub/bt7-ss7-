#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) { 
            array[i] += 3;         
        } else {                 
            array[i] += 2;         
        }
    }
    printf("mang khi doi\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

