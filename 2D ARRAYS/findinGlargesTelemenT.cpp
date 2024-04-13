#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int maxElement = arr[0][0]; // Assume the first element is the largest for now

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j]; // Update maxElement if we find a bigger element
            }
        }
    }

    cout << "The largest element in the 2D array is: " << maxElement << endl;

    return 0;
}
