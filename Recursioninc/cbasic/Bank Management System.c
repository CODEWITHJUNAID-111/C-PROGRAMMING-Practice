#include<stdio.h>
int main(){
    int account_no=1234567,password=238967,Eaccount_no,Epassword, choice,balance=100000, deposit,withdraw,transfer;
    printf("Enter Account number:");
    scanf("%d",&Eaccount_no);
    printf("Enter Password:");
    scanf("%d",&Epassword);
    if(Epassword==password && Eaccount_no==account_no){
        printf("Login Successfully");
    }
    else{
        printf("Try Again");
        return 0;

    }
    printf("Enter 1 for check balance\n2 for Deposit Money\n3 for withdraw Money\n4 for Transfer Money\n5for change password\n6 for statement\n7 for Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Balance is=%d",balance);
        break;
        case 2:
        printf("Enter amount to deposit:");
        scanf("%d",&deposit);
        balance=balance+deposit;
        printf(" New Balance is=%d",balance);
        break;
        case 3:
        printf("Enter amount to withdraw:");
        scanf("%d",&withdraw);
        if(withdraw<=balance){
            balance=balance-withdraw;
            printf(" New Balance is=%d",balance);
        }
        else{
            printf("Insufficient Balance");
        }
        break;
        case 4:
        printf("Enter amount to transfer:");
        scanf("%d",&transfer);
        if(transfer<=balance){
            balance=balance-transfer;
            printf(" New Balance is=%d",balance);
        }
        else{
            printf("Insufficient Balance");
        }
        break;
        case 5:
        pritf("Enter old password:");
        scanf("%d",&Epassword);
        if(Epassword==password){
            
    
        }
        else{
            printf("Incorrect password");
        }
        printf("Enter new password:");
        scanf("%d",&password);
        printf("Password changed successfully");
        break;
        case 6:
        printf("Account number=%d\nPassword=%d\nBalance=%d\n Transfer money=%d\n Deposit money=%d\n Withdraw money=%d\n withdraw money=%d",account_no,password,balance,transfer,deposit,withdraw);
        break;
        case 7:
        printf("Exit");
        break;
        default:
        printf("Invalid choice");
        break;
    }
return 0;

}