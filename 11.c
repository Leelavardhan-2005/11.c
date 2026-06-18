#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("entre the number:");
    scanf("%d%c%d",&num1,&op,&num2);
    if(num2==0 && op=='/')
    {
        printf("we cannot divisible by zero\n");
        return 1;
    }

    switch(op)
    {
        case '+':
        printf("sum=%d\n",num1+num2);
        break;
        case '-':
        printf("diff=%d\n",num1-num2);
        break;
        case'*':
        printf("mul=%d\n",num1*num2);
        break;
        case'/':
        printf("div=%d\n",num1/num2);
        break;
        default:
        printf("Invalid expression");

    }
}

