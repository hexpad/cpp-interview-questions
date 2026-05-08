#include <iostream>
#include <vector>

void removeNegatives(std::vector<int>& v,std::vector<int>& res)
{
    for(int n : v)
    {
        if (n >= 0)
        {
            res.push_back(n);
        }
    }
}

int main()
{
    std::vector<int> vec{2,4,-3,6,7,-1,0,8,-9};
    std::vector<int> result;

    removeNegatives(vec,result);

    for(int n : result)
    {
        std::cout << n << " ";
    }

    return 0;
}
