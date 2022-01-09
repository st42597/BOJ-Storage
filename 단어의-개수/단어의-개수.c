#include <stdio.h>

char str[1000003]; 


int main()
{
    int x = 0;
    
    gets(str); 
    
    int len = strlen(str);  
    
    for (int i = 0; i < len; i ++) {
        if (str[i] == 32) {
            x++;
        }
    }
    
    if (str[0] == 32) {
        x--; 
    }
    
    if (str[len - 1] == 32) {
        x--; 
    }
    
    printf("%d", x + 1);
    return 0;
}