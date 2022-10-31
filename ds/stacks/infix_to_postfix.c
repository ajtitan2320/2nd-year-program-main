#include<stdio.h>
#include<stdlib.h>
int top = -1;
char stk[30];
char exp[30];
char post[30];
void push(char item){
    if(top==29){
        printf("overflow");
    }
    else{
        stk[++top] = item;
    }
}
char pop(){
    if(top==-1){
        printf("overflow");
        exit(0);
    }
    else{
        char item = stk[top];
        top--;
        return item;
    }
}
int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='/' || ch=='*')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
}
int main()
{
    printf("enter the expression = ");
    gets(exp);
    int i=0,j=0;
    while(exp[i]!='\0'){
        char ch = exp[i];
        if(ch>='A' && ch<='Z'){
            post[j++]=ch;
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while(stk[top]!='('){
                char c = pop();
                post[j++]=c;
            }
            char ig = pop();
        }
        else{
            while(prec(ch) <= prec(stk[top]) && top!=-1){
                char d = pop();
                post[j++]=d;

            }
            push(ch);
        }
        i++;
    }
    while(top!=-1){
        char f = pop();
        post[j++]=f;
    }
    post[j]='\0';
    printf("%s",post);
    return 0;
}