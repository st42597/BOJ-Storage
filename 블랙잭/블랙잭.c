#include <stdio.h>

int main()
{
    int a, b, x, y = 0, arr[100];
    
    scanf("%d %d", &a, &b); 
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < a; i++) {
        for (int k = i + 1; k < a; k++) {
            for (int j = k + 1; j < a; j++) {
                x = arr[i] + arr[k] + arr[j]; 
                if (x > y && x <= b) {
                    y = x; 
                }
            }
        }   
    }
    
    printf("%d", y); 
    
    

    return 0;
}