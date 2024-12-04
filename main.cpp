#include <iostream>
#include <vector>
#include <string>

// Структура person
struct Person {
    std::string name;
    int age;
};

// Универсальная функция сортировки выбором
template <typename T, typename Compare>
void selectionSort(T arr[], int n, Compare compare) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (compare(arr[j], arr[minIndex])) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    // Ввод данных для массива целых чисел
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    int* intArray = new int[n];
    std::cout << "Enter the integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> intArray[i];
    }

    // Сортировка массива целых чисел
    selectionSort(intArray, n, [](const int& a, const int& b) { return a < b; });

    std::cout << "Sorted int array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] intArray;

    // Ввод данных для массива структур Person
    int m;
    std::cout << "Enter the number of persons: ";
    std::cin >> m;
    Person* personArray = new Person[m];
    std::cout << "Enter the persons (name age):" << std::endl;
    for (int i = 0; i < m; ++i) {
        std::cin >> personArray[i].name >> personArray[i].age;
    }

    // Сортировка массива структур Person
    selectionSort(personArray, m, [](const Person& a, const Person& b) { return a.age < b.age; });

    std::cout << "Sorted person array: ";
    for (int i = 0; i < m; ++i) {
        std::cout << personArray[i].name << " (" << personArray[i].age << ") ";
    }
    std::cout << std::endl;

    delete[] personArray;

    return 0;
}
