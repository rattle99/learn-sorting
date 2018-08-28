// merge sort

#include <iostream>
#include <vector>

using namespace std;

// merge function
void merge(vector <int> &left, vector <int> &right, vector <int> &a){
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        a[k++] = left[i++];
    }
    while (j < right.size()) {
        a[k++] = right[j++];
    }
}

// merge sort function
void mergeSort(vector <int> &a) {
    if(a.size() == 1) return;
    int m = a.size()/2;
    vector <int> left, right;
    for (int i = 0; i < m; i++) {
        left.push_back(a[i]);
    }
    for (int i = m; i < a.size(); i++) {
        right.push_back(a[i]);
    }
    mergeSort(left);
    mergeSort(right);
    merge(left, right, a);
}

// main function
int main() {
    vector <int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr); // sort array

    cout << "\n\nSorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}