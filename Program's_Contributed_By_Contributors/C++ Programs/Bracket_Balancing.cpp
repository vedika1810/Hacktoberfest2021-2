// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;

bool BracketsBalanced(string S)
{
	stack<char> stk;
	for (int i = 0; i < S.length(); i++) {
		if (stk.empty()) 
			stk.push(S[i]);
		else if ((stk.top() == '(' && S[i] == ')')
				|| (stk.top() == '{' && S[i] == '}')
				|| (stk.top() == '[' && S[i] == ']')) {
			
			stk.pop();
		}
		else 
			stk.push(S[i]);
	}
	if (stk.empty()) 
		return true;
	
	return false;
}

int main()
{
	string S;
	cout<<"Enter expression:"<<endl;
	cin>>S;

	if (BracketsBalanced(S))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
