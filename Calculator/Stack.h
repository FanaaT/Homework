#pragma once

template<typename T, int size>
struct Stack {
	T buffer[size] = {}; 
	int top = 0;
};

template<typename T, int size>
void push(Stack<T, size>& stack, T c) {
	stack.buffer[stack.top] = c;
	++stack.top;
}

template<typename T, int size>
T pop(Stack<T, size>& stack) {
	--stack.top;
	return stack.buffer[stack.top];
}

template<typename T, int size>
T top_element(const Stack<T, size>& stack) {
	if (is_empty(stack))
		return {};
	return stack.buffer[stack.top - 1];
}

template<typename T, int size>
bool is_empty(const Stack<T, size>& stack) {
	return stack.top <= 0;
}