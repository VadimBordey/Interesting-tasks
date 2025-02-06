#include <iostream>
#include <vector>

bool isMagicalVector(const std::vector<int>& vec) {
    int sum = 0, product = 1;
    for (int num : vec) {
        sum += num;
        product *= num;
    }
    return sum == product;
}

void findMagicalVectors(int N) {
    std::vector<int> vec(N, 1);
    while (true) {
        if (isMagicalVector(vec)) {
            for (int num : vec) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }

        int i = N - 1;
        while (i >= 0 && vec[i] == 10) {  
            vec[i] = 1;
            i--;
        }
        
        if (i < 0) break; 
        vec[i]++;
    }
}

int main() {
    int N;
    std::cout << "Введіть кількість елементів у чарівному векторі (N): ";
    std::cin >> N;

    findMagicalVectors(N);
    return 0;
}
