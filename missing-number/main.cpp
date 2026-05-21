#include <iostream>
#include <vector>
#include <fstream>

std::vector<int> readFile(std::string filename)
{
    std::ifstream file(filename);

    std::vector<int> arr{};
    int num{};

    while(file >> num)
    {
        arr.push_back(num);
    }

    file.close();

    return arr;
}

int missingNumber(std::vector<int>& array)
{
    int n = array.size() + 1;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for(int x : array)
    {
        actualSum += x;
    }

    return expectedSum - actualSum;
}



int main()
{
    std::vector<int> numbers = readFile("numbers.txt");
    int theNumber = missingNumber(numbers);

    std::cout << "Missing Number : " << theNumber;


    return 0;
}
