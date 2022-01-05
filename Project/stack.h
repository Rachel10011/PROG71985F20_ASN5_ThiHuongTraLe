//Thi Huong Tra Le
//PROG71985F20
//Assignment 5
//Fall 2020

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 100000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct list
{
	char letter;
	struct list* next;
}LIST, *PLIST;

void askForString(char*);
bool isEmpty(PLIST);
bool push(char);
char pop();
void reverse(char*);
void freeMemory(PLIST);


