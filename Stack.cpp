#include "Stack.h"
#include <iostream>
#include <stdib.h>


Stack::Stack(int init_max_size){
	top = -1;
	max_size = init_max_size;
	stack = (Element*)malloc(sizeof(Element)*max_size);
}

Stack::~Stack(){
	if(stack != NULL)
		free(stack);
	stack = NULL;
}

void Stack::Push(Element item){
	if(IsFullS())
		std::cout << "Stack is Full!" << std::endl;
	else
		stack[++top] = item;
}

Element Stack::Pop(){
	if(IsEmpty()){
		std::cout << "Stack is Empty" << std::endl;
		return (Element)0;
	}
	else{
		return stack[top--];
	}
}

bool Stack::IsEmptyS(){
	return(top == -1);
}

bool Stack::IsFullS(){
	return(top == max_size-1)
}

int Stack::get_pop(){
	return top;
}

int Stack::get_max_size(){
	return max_size;
}

void Stack::visualize(){
	std::cout << "(top=" << top << ") {";
	for(int i = 0; i <+top; i++){
		std::cout << stack[i] << " ";
	}
	std::cout << "]" << std::endl;
}
