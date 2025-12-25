#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]){
    int i=0, j=0, k=0;

    while(i < size1 && j < size2){
        if(list1[i] < list2[j])
            list3[k++] = list1[i++];
        else
            list3[k++] = list2[j++];
    }
    while(i < size1) list3[k++] = list1[i++];
    while(j < size2) list3[k++] = list2[j++];
}

int main(){
    int list1[] = {2, 3, 8, 10};
    int list2[] = {1, 7, 9, 11, 13};
    int list3[9];

    merge(list1, 4, list2, 5, list3);

    cout << "Merged list: ";
    for(int i=0;i<9;i++)
        cout << list3[i] << " ";
    return 0;
}
