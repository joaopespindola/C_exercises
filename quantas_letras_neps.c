#include<stdio.h>
#include<string.h>
    int main(){
        char s[50], rep;
        int i, C;
        rep = 0;
        scanf("%s %c", s, &C);
        for(i = 0; i < strlen(s); i++){
            if(s[i] == C){
                rep ++;
            }
        }
        printf("%d\n", rep);
    return 0;
}

