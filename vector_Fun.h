#pragma once
#include<vector>
#include<iostream>
using namespace std;

void show()
{
	vector <int>vec;
	vec.push_back(1);
	vec.insert(vec.begin(), 0);
	cout << vec[0] << vec[1] << endl;

	string s;
	s.push_back('a');
	s.insert(s.begin(), 'c');
	cout << s << endl;

}
