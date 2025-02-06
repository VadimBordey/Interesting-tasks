#include <iostream>

void printPascalsTriangle(int n) {
    int triangle[100][100];  

    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;  
        triangle[i][i] = 1;  
    }

    for (int i = 2; i < n; i++) {  
        for (int j = 1; j < i; j++) {  
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Введіть кількість рядків трикутника Паскаля: ";
    std::cin >> n;

    printPascalsTriangle(n);

    return 0;
}
