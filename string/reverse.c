#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%s", string);
    
    int length = strlen(string);
    for(int i = (length - 1); i >= 0; i--){
        printf("%c", string[i]);
    }
    return 0;
}