//Thi Huong Tra Le
//PROG71985F20
//Assignment 5
//Fall 2020

#include "stack.h"

static PLIST head = NULL;		//this is the pointer of the stack, I make it static so other files will not have access to them

void askForString(char*string)
{
	puts("Enter a string: ");
	gets(string);
}

bool isEmpty(PLIST list)	//check if the stack is empty
{
	if (list == NULL)
		return true;
	else
		return false;
}

void freeMemory(PLIST list)
{
	free(list);
}

bool push(char singleCharacter)			
{		
	//because linked list doesn't have a limited size so we don't need to check its capacity like array
	PLIST newChar = (PLIST)malloc(sizeof(LIST));
	if (isEmpty(newChar))
		return false;

	newChar->letter= singleCharacter;

	newChar->next = head;   //make the new node point to the same address that the head is pointing to and then...
	head = newChar;			//point the head to the new node on the stack, so when we pop characters from stack we will get FIFO order
	return true;
}

char pop()
{
	char reverse;
	if (isEmpty(head))		//if the stack is empty, there is nothing to pop
		return;

	reverse = head->letter;

	PLIST tmp;

	tmp = head;
	head = head->next;
	freeMemory(tmp);
	return reverse;
}

void reverse(char *input)
{
	for (int i = 0; i < strlen(input); i++)
	{
		push(input[i]);			//push every single character to the stack...
	}
	while (!isEmpty(head))
	{
		printf("%c",pop());		//then pop back each of them from the top of the stack
	}
	printf("\n");
}

