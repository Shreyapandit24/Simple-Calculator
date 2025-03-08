#include<stdio.h>
#include<conio.h>

    float add(float a,float b){
        return a+b;
    }
    float subtract(float a,float b){
        return a-b;
    }
    float multiply(float a,float b){
        return a*b;
    }
    float divide(float a,float b){
       if(b!=0){
        return a/b; 
    }
    else{
        printf("Error! Divison by zero\n");
    }
}
int main(){
    float num1,num2,result;
    int choice;
    while(1){
        printf("\n Simple Calculator \n");
        printf("1.Add \n");
        printf("2.Subtract \n");
        printf("3.Multiply \n");
        printf("4.Divide \n");
        printf("Exit");
        printf("Enter your choice :");
        scanf("%d",&choice);
        if(choice==5){
            printf("Exiting the program \n");
            break;
        }

        printf("Enter two numbers :");
        scanf("%f %f",&num1,&num2);

        switch(choice){
            case 1:
            result=add(num1,num2);
            printf("Result : %2.f \n",result);
            break;

            case 2:
            result=subtract(num1,num2);
            printf("Result : %2.f \n",result);
            break;

            case 3:
            result=multiply(num1,num2);
            printf("Result : %.2f \n",result);
            break;

            case 4:
            result=divide(num1,num2);
            printf("Result : %.2f \n",result);
            break;

            default : 
            printf("Invalid");
            break;
        }
    }
    getch();
    return 0;
}