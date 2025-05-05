#include <iostream>
#include <cmath>
#include  <cstdlib>
#include <ctime>
using namespace std;

void bubblesort(int arr[], int size) {


    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }cout << endl;
}
int main() {
    srand(time(0));
    int array_size;
    cout << "What size do you want the arrreay to be" << endl;
    cin >> array_size;
    do {
        cout << "What size do you want the arrreay to be" << endl;
        cin >> array_size;
    }while (array_size > 999999 || array_size <= 0);
    int matrix[array_size] = {};

    for (int i = 0; i < array_size; i++) {
        int generate_number = rand() % 1000000000000;
        if (i > 0 && generate_number == matrix[i - 1]) {
            generate_number = rand() % 1000000000000;
        }matrix[i] = generate_number;
    }bubblesort(matrix, array_size);
}


