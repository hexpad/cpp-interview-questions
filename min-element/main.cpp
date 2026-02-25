#include <iostream>
#include <algorithm>

int findSmallest(int arr[], int size)
{
    return *std::min_element(arr, arr + size);
}

int main()
{
    int arr[5];
    std::cout << "Enter 5 number \n";
    for(int i = 0; i < 5; ++i)
    {
        std::cout << "number : ";
        std::cin >> arr[i];
    }

    int smallest = findSmallest(arr, 5);

    std::cout << "Smallest number : " << smallest << "\n";

    return 0;
}
