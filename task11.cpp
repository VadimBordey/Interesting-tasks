#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    std::cout << "Введіть кількість міст: ";
    std::cin >> N;

    int x_coords[100], y_coords[100];  

    std::cout << "Введіть координати міст (x, y): \n";
    for (int i = 0; i < N; ++i) {
        std::cin >> x_coords[i] >> y_coords[i];
    }

    bubbleSort(x_coords, N);
    bubbleSort(y_coords, N);

    int median_x = x_coords[N / 2];
    int median_y = y_coords[N / 2];

    std::cout << "Координати столиці: (" << median_x << ", " << median_y << ")\n";

    return 0;
}
