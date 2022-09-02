#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//#include"vector_Fun.h"
//#include"recursion_stack.h"

using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //�Ƚ����е����鰴�յ�һ����������
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        vector<int> now;
        now.resize(2);
        int len = intervals.size();
        int start = 0;
        int end = 0;
        while (start < len)
        {//����ÿһ��Ѱ��ȫ���ص��ռ䶼��Ҫ�ж��Ƿ�Խ��
            now[0] = intervals[start][0];
            now[1] = intervals[start][1];
            //��Ҫ�����һ�θ��ĵ�����Ľ������Ƚϡ�����
            //ע������Ķ�̬��
            while (end < len && intervals[end][0] <= now[1])
            {
                if (intervals[end][1] > now[1])
                {
                    now[1] = intervals[end][1];
                }

                end++;
            }
            //�����һ������
            res.push_back(now);
            //������һ��start��λ��
            if (start != end)
                start = end;
            else
            {
                start++;
                end++;
            }

        }
        return res;
    }
};
void main()
{
    //[[1,4],[0,4]]
    vector<vector<int>> now = { {2, 3},{4, 5},{6, 7},{8, 9},{1, 10} };
    Solution s1;
    vector<vector<int>> res = s1.merge(now);
    cout << res[0][0] << res[0][1] << endl;
}