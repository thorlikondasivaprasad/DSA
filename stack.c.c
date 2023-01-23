#include<stdio.h>
#include<stdlib.h>
int stk[10],top=-1;
void push(int v)
{
        if (top==9)
        {
                printf("stack s full!\n");
                return;
        }
        top+=1;
        stk[top]=v;

}
int pop()
{
        int t;
        if(top==-1)
        {
                printf("stack is empty!\n");
                return -1;
        }
        t=stk[top];
        top-=1;
        return t;
}
int peek()
{
        if(top==-1)
        {
                printf("stack is empty");
                return -1;
        }
        return stk[top];
}
void printstk()
{
        if(top<=-1)

        for(int t=top;t>=0;--t)
        {
                printf("%d->",stk[t]);
        }
}
int main()
{
        push(12);
        push(17);
        push(75);
        push(23);
        printstk();
        pop();
        printstk();
}