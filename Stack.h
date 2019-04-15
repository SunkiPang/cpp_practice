#ifndef _STACK_H_
#define _STACK_H_

#include "Element.h"

class Stack{
	private:
		int top;
		int max_size;
		Element* stack;

	public:
		Stack(int);
		~Stack;

		void  Push(Element);
		Element Pop();
		bool IsFullS();
		bool IsEmptyS();

		int get_top();
		int get_max_size();

		void visualize();

