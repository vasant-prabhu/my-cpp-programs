#include<vector>
#include <iostream>
#include <conio.h>
using namespace std;
void print_stack(const vector<int>&stack);
int main()
{
	vector<int>stack;
	stack.reserve(5);
	stack.push_back(34);
	print_stack(stack);
	
	stack.push_back(76);
	print_stack(stack);
	
	stack.push_back(12);
	print_stack(stack);
	stack.push_back(87);
	print_stack(stack);
	
	
		stack.pop_back();
	print_stack(stack);
		stack.pop_back();
	print_stack(stack);
		stack.pop_back();
	print_stack(stack);

	getch();
	return 0;
}

void print_stack(const vector<int>&stack)
{
	for (int i=0;i<stack.size();i++)
	{
		cout <<stack[i]<<"   ";	
	}
	cout<<endl;
}

