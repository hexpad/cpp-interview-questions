#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    for(int i=0; i<nums.size(); ++i)
        for(int j=i+1; j<nums.size(); ++j)
            if(nums[i] + nums[j] == target)

    return{i,j};

    return {};
}

int main()
{
    std::vector<int> vec{3, 2, 4};
    std::vector<int> res = twoSum(vec,6);
    std::cout << res[0] << " , " << res[1];

    return 0;
}
