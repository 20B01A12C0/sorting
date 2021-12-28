#include <stdio.h>
#define N 10

int stack[N];
int top=-1;

void push(int ele);
int pop();
int peek();
void isfull();
void isempty();
void display();
void initstack();

int main()
{
    int ch,ele;
    do
    {
        printf("\nSelect the Operation:");
        printf("\n 1.push operation\n 2.pop operation\n 3.peek \n 4.isfull\n 5.isempty\n 6.display\n 7.Intialize\n 8.exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the element:");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: ele = pop();
                    if(ele!=-1)
                    {
                        printf("\n popped element is :%d",ele);
                    }
                    break;
            case 3:ele= peek();
                    if(ele!=-1)
                    {
                        printf("\n peek element is :%d",ele);
                    }
                    break;
            case 4:isfull();
                    break;
            case 5:isempty();
                    break;
            case 6:display();
                    break;
            case 7:initstack();
                    break;
            case 8:printf("\n Operations completed");
                    break;
            default:printf("please enter valid operation");
                    break;
        }
    }
    while(ch!=8);
}
void push(int ele)
{
    if(top == N-1)
    {
        printf("\n stack is full");
    }
    else
    {
        top = top+1;
        stack[top] =ele;
    }
}
int peek()
{
    int ele;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        ele = stack[top];
        return ele;
    }
}
int pop()
{
    int ele ;
    if(top==-1)
    {
        printf("\n stack is empty");
        printf("\nUnderflow condition");
        return -1;
    }
    else
    {
        ele = stack[top];
        top = top-1;
        return ele;
    }
}
void isfull()
{
    if(top == N-1)
    {
        printf("\n Stack is full");
         printf("\n over flow condition ");
    }
    else
    {
        printf("\n Stack is not full");
    }
}
void isempty()
{
    if(top == -1)
    {
        printf("\n stack is empty");
        printf("\n under flow condition ");
    }
    else
    {
        printf("\n Stack is not empty");
    }
}
void display()
{
    int i;
    printf("\n Elements in the stack are:");
    for(i=top;i>=0;i--)
    {
        printf("\n\t%d",stack[i]);
    }
}
void initstack()
{
    top = -1;
}