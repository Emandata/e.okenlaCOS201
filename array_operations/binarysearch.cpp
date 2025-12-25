#include <iostream>
using namespace std;

int binarySearch(const int list[], int size, int key){
    int low = 0, high = size - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(list[mid] == key)
            return mid;
        else if(key > list[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

int main(){
    int arr[] = {2, 5, 7, 9, 11, 14, 18, 21};
    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int index = binarySearch(arr, 8, key);

    if(index != -1)
        cout << "Found at index = " << index;
    else
        cout << "Value not found";

    return 0;
}
