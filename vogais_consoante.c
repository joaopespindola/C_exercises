#include<stdio.h>
#include<string.h>
    int main(){
        char s[50];
        int i;
        scanf("%s", s);
        printf("Vogais: ");
        for(i = 0; i < strlen(s); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] ==  'i' || s[i] == 'o' || s[i] == 'u'){
                printf("%c", s[i]);
            }
        }
        printf("\nConsoantes: "); 
        for(i = 0; i < strlen(s); i++){
            if(s[i] != 'a' && s[i] != 'e' && s[i] !=  'i' && s[i] != 'o' && s[i] != 'u'){  
                printf("%c", s[i]);            
            }
        }
    return 0;
}