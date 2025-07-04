#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 10 using for loop:" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    int i = 1;

    while(i <= 10) {
        sum += i;
        i++;
    }

    cout << "Sum of numbers from 1 to 10 using while loop: " << sum << endl;

    return 0;
}

