#include <iostream>

int main() {
    int n;
    std::cout << "Put your number n: ";
    std::cin >> n;

    std::cout << "Pythagorian triaple for n = " << n << ":\n";
    
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {  
            for (int c = b; c <= n; c++) { 
                if (a * a + b * b == c * c) {  
                    std::cout << a << ", " << b << ", " << c << "\n";
                }
            }
        }
    }

    return 0;
}
