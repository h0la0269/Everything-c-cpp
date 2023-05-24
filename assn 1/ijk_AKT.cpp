//QUESTION:GIVEN A SORTED ARRAY A WITH DISTINCT VALUES.WRITE A PROGRAM TO FIND i,j,k SUCH THAT A[i] + A[j] + A[k] == key

#include <iostream>
#include <vector>

using namespace std;

vector<int> find_i_j_k(vector<int> arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k) {
            if (arr[i] + arr[j] + arr[k] == key) {
                indices.push_back(i);
                indices.push_back(j);
                indices.push_back(k);
                return indices;
            }
            else if (arr[i] + arr[j] + arr[k] < key) {
                j++;
            }
            else {
                k--;
            }
        }
    }
    return indices;
}

int main() {
    vector<int> arr = {-9, -6, -2, 1, 3, 5, 8, 10};
    int key = 2;
    vector<int> indices = find_i_j_k(arr, key);
    if (indices.size() == 3) {
        cout << "i = " << indices[0] << ", j = " << indices[1] << ", k = " << indices[2] << endl;
    }
    else {
        cout << "No such tuple exists." << endl;
    }
    return 0;
}


//OUTPUT:i = 0, j = 3, k = 7
