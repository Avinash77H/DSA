#include <iostream>
using namespace std;

void merge(int *arr, int start, int end) {
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainArrIndex = start;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrIndex++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrIndex++] = first[index1++];
        } else {
            arr[mainArrIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2;
    // Left part sort
    mergeSort(arr, start, mid);

    // Right part sort
    mergeSort(arr, mid + 1, end);

    // Merge both parts
    merge(arr, start, end);
}

int main() {
    int arr[] = {1, 5, 3, 6, 8, 4, 8, 11, 34, 34, 21, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}