#include <iostream>
using namespace std;

int main() {
    // Print the number of test cases
    cout << "10000" << endl;
    
    // First generator
    for (int i = 0; i < 10000; ++i) {
        int first = 1 + i % 29;
        int second = 1000000000 - i % 41;
        cout << first << " " << second << endl;
    }
    
    // Uncomment the following lines to use the second generator
    /*
    for (int i = 0; i < 10000; ++i) {
        cout << "1 " << "999999999" << endl;
    }
    */

    return 0;
}
