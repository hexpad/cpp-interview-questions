#include <iostream>
#include <vector>

void removeNegatives(std::vector<int>& v)
{
    for(auto it = v.begin(); it != v.end();)
    {
        if(*it < 0)
            it = v.erase(it);
        else
            ++it;
    }
}

int main()
{
    std::vector<int> vec{2,4,6,-2,8,-4,0,-1};

    removeNegatives(vec);

    for(int n : vec)
    {
        std::cout << n << " ";
    }

    return 0;
}
