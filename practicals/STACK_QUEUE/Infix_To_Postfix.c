#include<stdio.h>
#include<stdlib.h>

#include<string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int precedence(char ch)
{
    if(ch=='*'||ch=='/')
    {
        return 3;
    }
    else if(ch=='+' || ch=='-')
    {
        return 2;
    }
    else{
        return 0;
    }
}

int isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char * infixtoPostfix(char*infix)
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char * postfix =(char *)malloc((strlen(infix)+1)* sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0')
        {
            if(!isOperatoter(infix[i]))
            {
                postfix[j]=infix[i];
                j++;
                i++;
            }
            else
            {
                if(precedence(infix[i])> precedence(stackTop(sp)))
                {
                    push(sp,infix[i]);
                    i++;
                }
                else{
                    postfix[j]= pop(sp);
                    j++;
                }
            }
        }
        while(!isEmpty(sp))
        {
            postfix[j]= pop(sp);
            j++;
        }
        postfix[j]='\0';

        return postfix;
}
int main()
{
    char * infix ="a-b+t/6";
    printf("postfix is %s",infixtoPostfix);
    return 0;
}
