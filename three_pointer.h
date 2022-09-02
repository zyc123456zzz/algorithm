#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:void sortColors(vector<int> nums) {
    //设置三指针left左边一定是0，right右边一定是2，target指向当前处理要的元素
    //遇到0或者2都进行交换，1则target单独前进
    int left = 0, right = nums.size() - 1, target = 0;
    while (target <= right) {
        if (nums[target] == 0) {
            //因为指向的元素不可能为2，所有将0与其交换，两个指针都前进不用担心遗漏2的问题
            int temp = nums[target];
            nums[target] = nums[left];
            nums[left] = temp;
            left++;
            target++;
        }
        else if (nums[target] == 2) {
            //target与后面交换不能前进，不知从后面交换过来的是什么数字
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