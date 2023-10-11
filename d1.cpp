//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<stack>
//
//using namespace std;
//
//
//int main() {
//	string input = "";
//	string integer = "";
//	stack<int> int_stk;
//	int len, op1, op2, res;
//
//
//	cin >> input;
//	len = input.size();
//	for (int i = 0; i < len; i++) {
//		if (input[i] >= '0' && input[i] <= '9') {
//			integer += input[i];
//		}
//		else if (input[i] == '.') {
//			int_stk.push(stoi(integer));
//			integer = "";
//		}
//		else if(input[i] == '@'){
//			cout << int_stk.top() << endl;
//		}
//		else {
//			op2 = int_stk.top();
//			int_stk.pop();
//			op1 = int_stk.top();
//			int_stk.pop();
//			if (input[i] == '-') {
//				res = op1 - op2;
//			}
//			else if (input[i] == '+') {
//				res = op1 + op2;
//			}
//			else if (input[i] == '*') {
//				res = op1 * op2;
//			}
//			else if (input[i] == '/') {
//				res = op1 / op2;
//			}
//			else if (input[i] == '^') {
//				res = op1 ^ op2;
//			}
//			else if (input[i] == '%') {
//				res = op1 % op2;
//			}
//
//			int_stk.push(res);
//		}
//	}
//
//	return 0;
//}