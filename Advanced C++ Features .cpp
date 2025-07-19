#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

template <typename T>
void sortArray(vector<T>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    // Vector initialization without {}
    int tempArr[] = {5, 2, 8, 1, 9};
    vector<int> nums(tempArr, tempArr + 5);

    sortArray(nums);

    cout << "Sorted array: ";
    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;

    // Map insert without auto
    map<string, int> age;
    age["Ali"] = 25;
    age["Sara"] = 22;

    cout << "Map contents:" << endl;
    map<string, int>::iterator it;
    for (it = age.begin(); it != age.end(); ++it)
        cout << it->first << ": " << it->second << endl;

    return 0;
}

