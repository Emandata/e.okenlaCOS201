#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
using namespace std;

// generate random numbers between 0 and 20
void fillRandom(int list[], int size){
    srand(time(0)); // seed random generator

    for (int i = 0; i < size; i++){
        list[i] = rand() % 21; // 0–20
    }
}

// print max + min with their index
void printMaxMin(int list[], int size){
    int maxVal = list[0], maxIndex = 0;
    int minVal = list[0], minIndex = 0;

    for (int i = 1; i < size; i++){
        if (list[i] > maxVal){
            maxVal = list[i];
            maxIndex = i;
        }
        if (list[i] < minVal){
            minVal = list[i];
            minIndex = i;
        }
    }

    cout << "Maximum: " << maxVal << " at index " << maxIndex << endl;
    cout << "Minimum: " << minVal << " at index " << minIndex << endl;
}

// sum of array
int sumArray(int list[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += list[i];
    }
    return sum;
}

// linear search
int linearSearch(int list[], int size, int key){
    for (int i = 0; i < size; i++){
        if (list[i] == key){
            return i; // found → return index
        }
    }
    return -1; // not found
}

// print array
void printArray(int list[], int size){
    for (int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[50];
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    fillRandom(arr, size);

    cout << "Generated array: ";
    printArray(arr, size);

    printMaxMin(arr, size);

    cout << "Sum = " << sumArray(arr, size) << endl;

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result == -1)
        cout << "Element NOT found" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}
