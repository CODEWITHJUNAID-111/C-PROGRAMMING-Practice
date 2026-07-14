#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    char name[50];
    printf("Enter the name of the student: ");
    scanf("%s", name);
    printf("Enter marks of programming:");
    scanf("%d", &marks1);
    printf("Enter marks of mathematics:");
    scanf("%d", &marks2);
    printf("Enter marks of English:");
    scanf("%d", &marks3);
    //total marks and percentage calculation
    int total=marks1+marks2+marks3;
    float percentage=(total/300.0)*100;
    //displaying the result
    if(marks1<33 || marks2<33 || marks3<33){
        printf("Fail\n");
        return 0;
    }else{
        printf("Pass: \n");
        printf("Percentage: %.2f\n", percentage);

}
//grading system
if(percentage>=90){
        printf("Grade: A+\n");
    }else if(percentage>=80){
        printf("Grade: A\n");
    }else if(percentage>=70){
        printf("Grade: B\n");
    }else if(percentage>=60){
        printf("Grade: C\n");
    }else if(percentage>=50){
        printf("Grade: D\n");
    }else if(percentage>=40){
        printf("Grade: E\n");
    }else{
        printf("Grade: F\n");
    }
    //checking for excellence in mathematics and scholarship eligibility
    if(percentage>=50){
        if(marks2>=50){
            printf("Execellent in mathematics\n");
        }else{
            printf("Not execellent in mathematics\n");
        }
    }
    //checking for scholarship eligibility
    if(percentage>=85&&marks1>=85 &&marks2>=85&&marks3>=85){
        printf("Eligible for scholarship\n");

    }else{
        printf("Not eligible for scholarship\n");
    }
    return 0;
}