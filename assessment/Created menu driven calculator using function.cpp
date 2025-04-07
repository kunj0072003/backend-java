#include<stdio.h>
main(){
int choice;
int num1, num2;

while(1){
    printf("\n-----MENU-----\n");
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.Multipalication\n");
    printf("4.Divison\n");
    
    printf("enter your choice: ");
    scanf("%d",&choice);
    
    if(choice<1 || choice>4){
        printf("invalid choice !!\n");
    }
    
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter second number;");
    scanf("%f",&num2);
    
    if(choice==1){
        printf("Addition = %d\n",num1+num2);
    }
    else if(choice==2){
        printf("subtraction = %d\n",num1-num2);
    }
    else if(choice==3){
        printf("Multiplication = %d\n",num1*num2);
    }
    else{
        if(num2!=0)
        {
            printf("Devison = %d\n",num1/num2);
        }
        else
        {
            printf("error : divison by zero is not allowed\n");
        }
    }
}    
}
