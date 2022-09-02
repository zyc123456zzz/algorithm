#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:void sortColors(vector<int> nums) {
    //������ָ��left���һ����0��right�ұ�һ����2��targetָ��ǰ����Ҫ��Ԫ��
    //����0����2�����н�����1��target����ǰ��
    int left = 0, right = nums.size() - 1, target = 0;
    while (target <= right) {
        if (nums[target] == 0) {
            //��Ϊָ���Ԫ�ز�����Ϊ2�����н�0���佻��������ָ�붼ǰ�����õ�����©2������
            int temp = nums[target];
            nums[target] = nums[left];
            nums[left] = temp;
            left++;
            target++;
        }
        else if (nums[target] == 2) {
            //target����潻������ǰ������֪�Ӻ��潻����������ʲô����
            int temp = nums[target];
            nums[target] = nums[right];
            nums[right] = temp;
            right--;
        }
        else {
            target++;
        }
    }
}
};