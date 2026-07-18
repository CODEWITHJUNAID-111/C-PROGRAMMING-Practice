#include<stdio.h>
int Name(char name[]){
    int consonant = 0;
    int c = 0;
    while(name[c] != '\0'){
        if((name[c] >= 'a' && name[c] <= 'z') || (name[c] >= 'A' && name[c] <= 'Z')){
            if(!(name[c] == 'a' || name[c] == 'e' || name[c] == 'i' || name[c] == 'o' || name[c] == 'u' || name[c] == 'A' || name[c] == 'E' || name[c] == 'I' || name[c] == 'O' || name[c] == 'U')){
                consonant++;
            }
        }
        c++;
    }
    return consonant;
}
int main(){
    char name[100];
    printf("Enter your name: ");
    gets(name);
    int count_consonant = Name(name);
    printf("Number of consonants in your name: %d\n", count_consonant);
    return 0;
}