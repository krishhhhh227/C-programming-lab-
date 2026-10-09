#include<stdio.h>
char stack[100];
int top=-1;
char pop()
{
    return stack[top--];
}
void push(char x)
{
    stack[++top]=x;
}
int priority(char x)
{
    if(x=='^')
        return 3;
    
    if(x=='/'|| x=='*')
        return 2;
    
    if (x=='+'|| x=='-')
        return 1;
    
    return 0;
}
int main()
{
    char infix[100];
    char ch;
    printf("Infix expression:");
    scanf("%s",infix);
    for(int i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if((ch>='A' && ch<='Z')||(ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
        {
            printf("%c",ch);
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')')
        {
            while(stack[top]!='(')
                printf("%c",pop());

            pop();
            
        }
        else
        {
            while(top!=-1 && stack[top]!='('&& priority(stack[top])>=priority(ch)){
                printf("%c",pop());
            }
            push(ch);


    }
}
while(top!=-1)
    printf("%c",pop());

return 0;
}