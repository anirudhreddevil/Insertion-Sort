#include <iostream>

using namespace std;

int main()
{
    int size, temp, i, j;
    
    cout << "Enter the size of the array " << endl;
    cin >> size;
    
    int sortArray[size];
    
    cout << "Enter the elements of the array one by one : " << endl;
    
    // Input elements of the array 
    
    for (i = 0 ; i < size ; i++) {
        cin >> sortArray[i];
    }
    
    // Print out the original array
    cout << "Original Array : " << endl;
    for (i = 0; i < size ; i++) {
        cout << sortArray[i] << " | ";
    }
    cout << endl;
    
    // Start Sort 
    
    for (i = 1 ; i < size ; i++) {
        
        // Store the element in a temporary location
        temp = sortArray[i];
        // i-1th position
        j = i - 1;
        
        // Start comparing with other positions in the array 
        // and swap if necessary
        
        while (j >= 0 && sortArray[j] > temp) {
            sortArray[j+1] = sortArray[j];
            j--;
        }
        
        // Once swapping is over, put the temp element in the j+1th position
        
        sortArray[j+1] = temp;
    }
    
    // Print out the sorted array
    cout << "Sorted Array : " << endl;
    for (i = 0 ; i < size ; i++) {
        cout << sortArray[i] << " | ";
    }
}
