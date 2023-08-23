#include<stdio.h>
int main()
{
    int n1,n2,ans;
    char ch;
    printf("enter + for addition\n enter - for subtraction\n enter* for multiplication\n enter / for division\n ");
    printf("Enter you choice");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        ans=n1+n2;
        printf("your ans for addition is %d",ans);
         printf("Enter first no.");
    scanf("%d",&n1);
    printf("Enter second no.");
    scanf("%d",&n2);
        break ;
        
        case '-':
        ans=n1-n2;
        printf("your ans for subtraction is %d",ans);
         printf("Enter first no.");
    scanf("%d",&n1);
    printf("Enter second no.");
    scanf("%d",&n2);
        break ;
    
        case '*':
        ans=n1*n2;
        printf("your ans for multiplication is %d",ans);
         printf("Enter first no.");
    scanf("%d",&n1);
    printf("Enter second no.");
    scanf("%d",&n2);
        break ;
    
        case '/':
        ans=n1/n2;
        printf("your ans for multiplication is %d",ans);
         printf("Enter first no.");
    scanf("%d",&n1);
    printf("Enter second no.");
    scanf("%d",&n2);
        break ;
        
        default: {
            printf("invalid option");
        }
    }
    
    
    return 0;
}