#pragma once
#pragma once


//	string a = "pwwkew";
//	int len = a.length();
//	vector <int>next;
//	//��ǰ׺��׺��next����
//	next.push_back(0);
//	int i = 1;
//	for (; i < len; i++)
//		//���е���������¾���дforѭ�������޸ġ�ȫ���ԡ��ı�������Ȼ���׳�bug
//	{ 
//		int max = 0;
//		for (int j = 0; j < i; j++)//��ÿһ���̶���λ��i������ǰ׺��׺��ȵ��Ӵ�����
//		{
//			int judge = j;
//			for (int q = 0; judge >= 0; judge--, q++)
//			{
//				if (a[judge] == a[i - q])//�����һ��
//				{
//					//judge--;
//				}
//				else
//					break;
//			}
//			//cout << "judge is: " << judge << endl;
//			if (judge == -1)//�Ӵ���ǰ׺���׺���
//			{
//				//����max
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