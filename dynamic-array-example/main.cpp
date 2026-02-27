#include <iostream>

int main()
{
    int* arr = new int[5];

    for(int i = 1; i <= 5; ++i)
    {
        arr[i] = i;
    }

    for(int i = 1; i <= 5; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";

    delete[] arr;

    return 0;
}
