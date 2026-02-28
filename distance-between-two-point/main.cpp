#include <iostream>
#include <cmath>

struct Point
{
    double x{};
    double y{};

    double distanceTo(const Point& other) const
    {
        double dx = other.x - x;
        double dy = other.y - y;
        return std::sqrt(dx * dx + dy * dy);
    }
};

int main()
{
    Point p1{};
    Point p2{};

    std::cout << "Enter x and y for Point 1 : \n";
    std::cin >> p1.x >> p1.y;

    std::cout << "Enter x and y for Point 2 : \n";
    std::cin >> p2.x >> p2.y;

    std::cout << "Distance between points : " << p1.distanceTo(p2) << "\n";

    return 0;
}
