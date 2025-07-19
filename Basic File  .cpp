#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Reading from a file
    ifstream inputFile("input.txt");
    string line;

    cout << "Reading from input.txt:" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    // Writing to a file
    ofstream outputFile("output.txt");
    string data;
    cout << "Enter text to write to output.txt: ";
    getline(cin, data);
    outputFile << data << endl;
    outputFile.close();

    cout << "Data written to output.txt successfully." << endl;

    return 0;
}

