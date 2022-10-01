#include<stdio.h>
#include<stdlib.h>
int top = -1;
char stk[99],ans[99],words[99];
void push(char ch){
    if(top==98){
        exit(0) ;
    }
    stk[++top] = ch;
}
char pop(){
    if(top==-1){
        exit(0);
    }
    char ch = stk[top];
    top = top-1;
    return ch;
}
int main()
{
    printf("enter the string on which operation is to be performed = ");
    scanf("%s",words);
    int i=0,j=0;
    while(words[i]!='\0'){
        if(words[i]!='*'){
            push(words[i]);
        }
        else{
            char ch = pop();
            ans[j]=ch;
            j++;
        }
        i++;
    }
    i=0;
    while(i<j){
        printf("%c ",ans[i++]);
    }
    return 0;
}