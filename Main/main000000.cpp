#include <iostream>
#define size 7
using namespace std;

struct Stack{
	int items [size], top;
	Stack(){
		top = -1;
	}
};

void push(Stack &S, int X){	
	// if it full
	if(S.top == (size-1))
		exit(1);
	else 
		S.items[++S.top] = X;
}

int pop(Stack &S){
	
	// if it empty
	if(S.top == -1)
		exit(1);
	else{
		return S.items[S.top--];
	}
			
}

int main() {
	struct Stack S;
	push(S, 5);  push(S, 9);
	cout << pop(S) << endl; cout << pop(S);
	return 0;
}
