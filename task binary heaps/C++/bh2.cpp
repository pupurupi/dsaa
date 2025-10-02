//Условие: Дан массив целых чисел и число k. Найдите k наименьших элементов из массива.
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    
    // Исходный неотсортированный массив
    vector<int> arr = {7, 2, 9, 1, 5, 8, 3};
    int k = 3;  // Количество наименьших элементов, которые нужно найти
    
    // Выводим исходный массив для наглядности
    cout << "Исходный массив: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    
    // priority_queue с компаратором greater<int> создает MIN-HEAP
    // Это бинарная минимальная куча, где наименьший элемент всегда на вершине
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    // Добавляем все элементы массива в min-heap
    // Каждый push перестраивает кучу для поддержания свойств min-heap
    for (int num : arr) {
        minHeap.push(num);  // Здесь используется min-heap!
    }
    
    // Извлекаем k наименьших элементов из min-heap
    cout << k << " наименьших элемента: ";
    for (int i = 0; i < k; i++) {
        // top() возвращает минимальный элемент (корень min-heap)
        cout << minHeap.top() << " "; 
        minHeap.pop();                
    }
    cout << endl;
    
    return 0;
}