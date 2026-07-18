#include<stdio.h>
void Allsmall(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("String in all small letters: %s\n", str);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    Allsmall(str);
    return 0;
}