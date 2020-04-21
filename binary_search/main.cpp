#include <algorithm>
#include <iostream>

#include "binary_search.h"

using namespace std;

void printVec(const vector<int> &v)
{
    const char *prefix = "";

    cout << "[";
    for (auto n: v)
    {
        cout << prefix << n;
        prefix = " ";
    }

    cout << "]" << endl;
}

int main()
{
    vector<int> nums = {1,2,3,4,2,5,4,3,2,1};

    sort(nums.begin(), nums.end());
    printVec(nums);

    cout << "binary_search 2: " << binary_search(nums, 2) << endl;
    cout << "left_bound 2: " << left_bound(nums, 2) << endl;
    cout << "right_bound 2: " << right_bound(nums, 2) << endl;

    return 0;
}
