#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string fileName{};

    std::cout << "Enter the file name to read (e.g. example.txt) : ";
    std::cin >> fileName;

    std::ifstream file(fileName);

    if(!file.is_open())
    {
        std::cout << "Failed to open the file!" << "\n";
        return 1;
    }

    std::string line{};

    while(std::getline(file, line))
    {
        std::cout << line << "\n";
    }

    file.close();
    return 0;

}
