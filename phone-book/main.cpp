#include <iostream>
#include <fstream>

void addContact()
{
    std::string name{};
    std::string phone{};
    std::cout << "Enter name : " << "\n";
    std::getline(std::cin >> std::ws,name);
    std::cout << "Enter phone number : " << "\n";
    std::getline(std::cin,phone);

    std::ofstream file("phonebook.txt",std::ios::app);
    if(file.is_open())
    {
        file << name << " - " << phone << "\n";
        file.close();
        std::cout << "Contact saved successfully." << "\n";
    }
    else
    {
        std::cout << "Error : Could not open file." << "\n";
    }

}

void listContacts()
{
    std::ifstream file("phonebook.txt");
    std::string line{};

    if(file.is_open())
    {
        bool hasData = false;
        while(std::getline(file,line))
        {
            std::cout << line << "\n";
            hasData = true;
        }
        if(!hasData)
        {
            std::cout << "Phonebook is currently empty." << "\n";
        }
        file.close();
    } else
        {
            std::cout << "Error : Could not open file or file does not exist." << "\n";
        }
}

void searchContact()
{
    std::string query{};
    std::cout << "Enter the name to search for : ";
    std::getline(std::cin >> std::ws,query);

    std::ifstream file("phonebook.txt");
    std::string line{};
    bool found = false;

    if(file.is_open())
    {
        std::cout << "\n--- Search Results ---" << "\n";
        while(std::getline(file,line))
        {
            if(line.find(query) != std::string::npos)
            {
                std::cout << "Match found : " << line << "\n";
                found = true;
            }
        }
        if(!found)
        {
            std::cout << "No matching contact found." << "\n";
        }
        file.close();
    }

}

void deleteContact()
{
    std::string target{};
    std::string line{};
    std::string allData{};
    bool found = false;

    std::cout << "Delete whom?";
    std::getline(std::cin >> std::ws, target);

    std::ifstream fileIn("phonebook.txt");
    while(std::getline(fileIn, line))
    {
        if(line.find(target) == std::string::npos)
        {
            allData += line + "\n";
        }
        else
        {
            found = true;
        }
    }
    fileIn.close();

    if(found)
    {
        std::ofstream fileOut("phonebook.txt", std::ios::trunc);
        fileOut << allData;
        fileOut.close();
        std::cout << "Successfully deleted.\n";
    }
    else
    {
        std::cout << "Not found.\n";
    }

}

int main()
{
    int choice{};

    while (true) {
        std::cout << "\n";
        std::cout << "===PHONEBOOK MENU===" << "\n";
        std::cout << "\n";
        std::cout << "1. Add Contacts" << "\n";
        std::cout << "2. List All Contacts" << "\n";
        std::cout << "3. Search Contact" << "\n";
        std::cout << "4. Delete Contact" << "\n";
        std::cout << "5. Exit" << "\n";

        std::cin >> choice;

        switch (choice) {
        case 1 : addContact();
            break;
        case 2 : listContacts();
            break;
        case 3 : searchContact();
            break;

        case 4 : deleteContact();
            break;

        case 5 : std::cout << "Exiting program. Goodbye!" << "\n";
            return 0;

        default : std::cout << "Invalid selection! Please try again. " << "\n";


        }
    }
}
