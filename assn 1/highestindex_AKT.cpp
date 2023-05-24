//OUESTION:GIVEN AN ARRAY. LET US ASSUME THAT THERE CAN BE DUPLICATES IN THE LIST.WRITE A PROGRAM TO SEARCH FOR AN ELEMENT IN THE LIST SUCH A WAY THAT WE GET THE HIGHEST INDEX IF THERE ARE DUPLICATE.

#include <iostream>
#include <vector>

using namespace std;

int search_highest_index(vector<int>& arr, int target) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }
    if (!indices.empty()) {
        int n = indices.size();
        return indices[n-1];
    } else {
        return -1; 
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 5, 6, 3, 7, 8, 3};
    int target = 2;
    int highest_index = search_highest_index(arr, target);
    cout << highest_index << endl; 
    return 0;
}

//OUTPUT:3
