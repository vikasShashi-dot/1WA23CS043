#include<stdio.h>
void push(int *arr,int data, int size,int *top);
void pop(int *arr,int size,int *top);
void display(int *arr,int size,int *top);
int main()
{
    int top=-1;
    int stack[100],choice,n,x,i;
    printf("Enter the size of the Stack{MAX:100}:");
    scanf("%d",&n);
    printf("\n STACK OPERATIONS USING ARRAY ");
    printf("\n\t ________________");
    printf("\n\t[1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT]");
    do
    {
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
             printf("\nEnter value to be inserted:");
             scanf("%d",&x);
             push(stack,x,n,&top);
             break;
            }
            case 2:
            {
             pop(stack,n,&top);
             break;
            }
            case 3:
            {
             display(stack,n,&top);
             break;
            }
            case 4:
            {
             printf("\nExit point reached.");
             break;
            }
            default:
            {
                printf("\t\n Please enter a valid choice");
            }
        }
    }while (choice!=4);
}
void push(int *arr,int data,int size,int *top)
{
    if(*top>=size-1)
    {
     printf("\nThe stack is overflow");
    }
    else
    {
        (*top)++;
        arr[*top]=data;
        printf("The element has been pushed into the stack");
    }

}
void pop(int *arr,int size,int *top)
{
    if(*top<=-1)
    {
     printf("\nThe stack is underflow");
    }
    else
    {
     printf("\nThe popped element is %d",arr[*top]);
     (*top)--;
    }
}
void display(int *arr,int size,int *top)
{
    int i;
    if(*top>=0)
    {
    printf("\nThe elements in the stack are");
    for(i=*top;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
    }
    else
    {
    printf("\nThe stack is empty");
    }
}
