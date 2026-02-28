#include <iostream>
#include <vector>
#include <algorithm>

bool compareByLength(const std::string& a, const std::string& b)
{
    return a.size() < b.size();
}

int main()
{
    std::vector<std::string> vec{"Chloe","Oliver","Leo","Milo"};

    std::sort(vec.begin(), vec.end(), compareByLength);

    for(const std::string& s : vec)
    {
        std::cout << s << " ";
    }

    return 0;
}
