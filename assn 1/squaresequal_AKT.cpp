//QUESTION:WRITE A PROGRAM FOR FINDING  i and j IN AN ARRAY A FOR ANY KEY SUCH THAT A[i]^2 + A[j]^2 ==key


#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

pair<int, int> find_i_j(vector<int>& arr, int key) {
    unordered_map<int, int> seen;
    for (int i = 0; i < arr.size(); i++) {
        int complement = key - arr[i] * arr[i];
        if (seen.count(complement)) {
            return make_pair(i, seen[complement]);
        }
        seen[arr[i] * arr[i]] = i;
    }
    return make_pair(-1, -1); 
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 61;
    pair<int, int> indices = find_i_j(arr, key);
    if (indices.first == -1 && indices.second == -1) {
        cout << "No pair found\n";
    } else {
        cout << "i = " << indices.first << ", j = " << indices.second << endl;
    }
    return 0;
}

//OUTPUT:i = 5, j = 4

