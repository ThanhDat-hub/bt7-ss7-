#include <stdio.h>

int main() {
    int n;
    int array[n]; 
	printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
       do{ 
	    printf("nhap phan tu thu %d la so le: ", i + 1);
        scanf("%d", &array[i]);
        }while (array[i] % 2 == 0); 
    }

    printf("mang ban da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
