#include <iostream>
#include <iomanip>
using namespace std;
int num_operations;

/*void bubbleSort_best(int arr[], int n)
{
    int i, j, temp;


    bool didSwapped;
    for(i = 0; i < n-1; i++)
    {
        didSwapped = false;
        for(j = 0; j < n-i-1; j++)
        {

            if( arr[j] > arr[j+1])
            {
                ++num_operations;
                didSwapped = true;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(!didSwapped)
            break;
    }
}
void InsSort(int arr[], int n) {
    int i, temp;
    do {
        for (i = 0; i < n; i++) {
            temp = arr[i + 1];
            if (arr[i + 1] > arr[i]) {
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    while (arr[0] < arr[1]);
    for (int k = 0; k < n; k++){}
    cout << setw(4) << arr[i];

void selSort( int arr[], int n ){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        temp = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[temp])
                temp = i;
            if (temp != i)
                swap(arr[i], arr[temp]);
        }
    }
    for ( int k = 0; k < n; k++){
        cout << setw(4) << arr[k];

    }
}*/
unsigned int selSort( int arr[], int n) {
    int min, counter = 0;
    bool isSwapped = false;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (++counter && arr[j] < arr[min]) min = j;
        }

        if (++counter && min != i) {
            swap(arr[min], arr[i]);
            isSwapped = true;
        }
        if (!isSwapped) break;
    }

    return counter;
}

int main() {
    int array[] = {8,5,9,1,2,32,887,76,54,34,23,123,98,45,28};
    int size = 15;

    cout << "Unsorted array: ";
    for (int i = 0; i < size; i++){
        cout << setw(4) << array[i];
    }
/*
    cout << "Bubble sorted array: ";
    bubbleSort_best(array,size);
    cout << "endl" <<num_operations << endl;
    cout << endl;
    cout << "Insertion sorted array: ";
    InsSort(array,size);*/
    cout << endl;
    cout << "Selection sorted array: ";
    cout << "Operations " << selSort(array,size);
    cout << endl;

    for (int i = 0; i < size; i++){
        cout << setw(4) << array[i];
    }
    int temp[size];
    for(int i = 0; i < size; i++) {
        temp[i] = array[i];
    }


    cout << "Operations in best case " << selSort(array,size);
    cout << endl;





    return 0;
}
