#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, reversed;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    reversed = string(input.rbegin(), input.rend());
    
    cout << "Reversed string: " << reversed << endl;
    
    return 0;
}
