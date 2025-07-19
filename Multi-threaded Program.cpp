#include <iostream>
#include <vector>
using namespace std;

int partialSum(vector<int>& arr, int start, int end) {
    int result = 0;
    for (int i = start; i < end; i++)
        result += arr[i];
    return result;
}

int main() {
    // No initializer list for Dev C++
    int tempArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> data(tempArr, tempArr + 8);
    int mid = data.size() / 2;

    // Simulate parallel sums
    int sum1 = partialSum(data, 0, mid);
    int sum2 = partialSum(data, mid, data.size());

    cout << "Total sum: " << sum1 + sum2 << endl;
    return 0;
}


