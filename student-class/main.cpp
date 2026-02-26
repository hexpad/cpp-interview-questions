#include <iostream>

class Student{
private:
    std::string m_name{};
    int m_grade{};

public:
    Student(const std::string& name, int grade)
        :m_name{name}, m_grade{grade}
    {}

    void printInfo() const
    {
        std::cout << "Name of the Student : " << m_name << "\n";
        std::cout << "Grade of the Student : " << m_grade << "\n";
    }

    void getName() const
    {
        std::cout << "Name : " << m_name << "\n";
    }

    void getGrade() const
    {
        std::cout << "Grade : " << m_grade << "\n";
    }
};

int main()
{
    Student a{"Alex",90};
    Student b{"Bob",80};

    a.printInfo();

    b.getName();
    b.getGrade();
}
