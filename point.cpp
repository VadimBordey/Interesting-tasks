#include <iostream>
#include <cmath>

struct point {
    double x, y, z;
    point(double x, double y, double z) : x(x), y(y), z(z) {}
    double distance(const point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) +
                         std::pow(y - other.y, 2) +
                         std::pow(z - other.z, 2));
    }
};

int main() {
    point x1(10, 20, 30), x2(-10, -20, -30);
    std::cout << x1.distance(x2) << std::endl;
    return 0;
}
