/*#include <iostream>
#include <string>

using namespace std;
string removeLastWord(string inputString) {
    string result = inputString;
    size_t lastSpaceIndex = result.find_last_of('/');
    result = result.substr(0, lastSpaceIndex);
    return result;
}

int main() {
    string inputString = "caminho/para/arquivo";
    string modifiedString = removeLastWord(inputString);
    cout << modifiedString << endl;
    return 0;
}*/