#include<stdio.h>


void main()
{
int size,val,choice;
printf("Enter the size of stack: ");
scanf("%d",&size);
int my_stack[size];
int top=-1;
while(choice != 5)
{
printf("MAIN MENU\n 1.PUSH\n 2.DISPLAY\n 3.POP\n 4.PEEK\n 5.EXIT\n");

printf("Enter the choice:  ");
scanf("%d",&choice);
	
	switch(choice)
	{
	case 1 : if(top==size)
		{
		printf("Stack overflow!!!!");
		}
		else
		{
		printf("Enter the element:");
		scanf("%d",&val);
		top=top+1;
		my_stack[top]=val;
		
		printf(" The element %d is pushed!!",val);

		}
		
		break;
	case 2 : if(top==-1)
		{
		printf("Stack underflow!!!!");
		}
		else
		{
		printf("Stack Elements are..\n");
		for (int i=top;i>=0;i--)
		{
		printf("%d\t",my_stack[i]);
		}
	
		}
		break;
	case 3 :	if(top<0)
		{
		printf("Stack underflow!!!!");
		}
		else {
		printf(" The element %d is poped!!",my_stack[top]);
		top--;
		}
		
		break;
	case 4 : if(top<0)
		{
		printf("Stack underflow!!!!");
		}
		else printf(" %d is the peeked element !!",my_stack[top]);
		break;
	case 5: printf("Exiting!!!!");
		break;
	default : printf("Invalid Choice!!");
		break;
	
}
}
}
