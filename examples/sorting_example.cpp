#include "../algorithms/Sorting.cpp"

int main() {
    cout << "===== Sorting Algorithms Demo =====" << endl;
    
    // Bubble Sort
    vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    cout << "\nOriginal array: ";
    printArray(arr1);
    bubbleSort(arr1);
    cout << "After Bubble Sort: ";
    printArray(arr1);
    
    // Selection Sort
    vector<int> arr2 = {64, 34, 25, 12, 22, 11, 90};
    cout << "\nOriginal array: ";
    printArray(arr2);
    selectionSort(arr2);
    cout << "After Selection Sort: ";
    printArray(arr2);
    
    // Insertion Sort
    vector<int> arr3 = {64, 34, 25, 12, 22, 11, 90};
    cout << "\nOriginal array: ";
    printArray(arr3);
    insertionSort(arr3);
    cout << "After Insertion Sort: ";
    printArray(arr3);
    
    // Merge Sort
    vector<int> arr4 = {64, 34, 25, 12, 22, 11, 90};
    cout << "\nOriginal array: ";
    printArray(arr4);
    mergeSort(arr4);
    cout << "After Merge Sort: ";
    printArray(arr4);
    
    // Quick Sort
    vector<int> arr5 = {64, 34, 25, 12, 22, 11, 90};
    cout << "\nOriginal array: ";
    printArray(arr5);
    quickSort(arr5);
    cout << "After Quick Sort: ";
    printArray(arr5);
    
    return 0;
}
