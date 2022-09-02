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
        //先将所有的数组按照第一个数字排序
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        vector<int> now;
        now.resize(2);
        int len = intervals.size();
        int start = 0;
        int end = 0;
        while (start < len)
        {//对于每一次寻找全部重叠空间都需要判断是否越界
            now[0] = intervals[start][0];
            now[1] = intervals[start][1];
            //需要和最后一次更改的数组的界限做比较。。。
            //注意区间的动态性
            while (end < len && intervals[end][0] <= now[1])
            {
                if (intervals[end][1] > now[1])
                {
                    now[1] = intervals[end][1];
                }

                end++;
            }
            //新添加一个区间
            res.push_back(now);
            //更新下一个start的位置
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