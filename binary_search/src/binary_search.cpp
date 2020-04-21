//
// Created by liaozexian on 2020/4/21.
//

#include "binary_search.h"

using namespace std;

int binary_search(const vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size()-1;

    while (lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        int num = nums[mid];

        if (num == target)
        {
            return mid;
        }

        if (num > target)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return -1;
}

int left_bound(const vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size()-1;
    int idx = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        int num = nums[mid];

        if (num > target)
        {
            hi = mid - 1;
        }
        else if (num < target)
        {
            lo = mid + 1;
        }
        else // num == target
        {
            idx = mid;
            hi = mid - 1; // 在左侧继续查找
        }
    }

    return idx;
}

int right_bound(const vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size()-1;
    int idx = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        int num = nums[mid];

        if (num > target)
        {
            hi = mid - 1;
        }
        else if (num < target)
        {
            lo = mid + 1;
        }
        else // num == target
        {
            idx = mid;
            lo = mid + 1; // 在右侧继续查找
        }
    }

    return idx;
}
