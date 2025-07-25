
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("nonexistent.txt");
    ofstream outFile("test.txt");
    if (!inFile || !outFile) {
        if (!inFile) {
            cout << "Error: Unable to open input file!" << endl;
        }
        if (!inFile.is_open()) {
            cout << "File is not open" << endl;
        }
        if (!outFile) {
            cout << "Error: Unable to open output file (permission denied) !" << endl;
        }
        if (!outFile.is_open()) {
            cout << "File is not open" << endl;
        }
    }
    else {
        if (inFile.is_open()) {
            cout << "File nonexistent.txt opened successfully" << endl;
        }
        if (outFile.is_open()) {
            cout << "File test.txt is open !";
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}
