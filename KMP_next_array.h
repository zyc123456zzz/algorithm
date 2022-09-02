#pragma once
#pragma once


//	string a = "pwwkew";
//	int len = a.length();
//	vector <int>next;
//	//求前缀后缀的next数组
//	next.push_back(0);
//	int i = 1;
//	for (; i < len; i++)
//		//在有递增的情况下尽量写for循环，好修改“全局性”的变量，不然容易出bug
//	{ 
//		int max = 0;
//		for (int j = 0; j < i; j++)//在每一个固定的位置i求出最大前缀后缀相等的子串长度
//		{
//			int judge = j;
//			for (int q = 0; judge >= 0; judge--, q++)
//			{
//				if (a[judge] == a[i - q])//多减了一次
//				{
//					//judge--;
//				}
//				else
//					break;
//			}
//			//cout << "judge is: " << judge << endl;
//			if (judge == -1)//子串的前缀与后缀相等
//			{
//				//更新max
//				max = j + 1;
//			}
//		}
//		next.push_back(max);
//	}
//
//	for (int i = 0; i < next.size(); i++)
//	{
//		cout << next[i] << endl;
//	}
//	show();