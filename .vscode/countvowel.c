#include<stdio.h>
int Name(char name[]){
    int vowel = 0;
    int c = 0;
    while(name[c] != '\0'){
        if(name[c] == 'a' || name[c] == 'e' || name[c] == 'i' || name[c] == 'o' || name[c] == 'u' || name[c] == 'A' || name[c] == 'E' || name[c] == 'I' || name[c] == 'O' || name[c] == 'U'){
            vowel++;
        }
        c++;
    }
    return vowel;
}

int main(){
     char name[100];
     printf("Enter your name: ");
     gets(name);
    
     int vowel_count = Name(name);
     printf("Number of vowels in your name: %d\n", vowel_count);
     return 0;

}