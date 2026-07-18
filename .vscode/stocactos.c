#include<stdio.h>
void Change(char str[]){
   int c=0;
   while(str[c]!='\0'){
    if(str[c]>='A'&&str[c]<='Z'){
        str[c]=str[c]+32;
    }else if(str[c]>='a'&&str[c]<='z'){
         str[c]=str[c]-32;

    }

    c++;
   }
   
   printf("The changed string is: %s",str);
   

   
   return ;

}
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    Change(str);
    
   

    return 0;
}