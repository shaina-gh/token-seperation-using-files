#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

void check(string s) {
    vector<char> separators = {',', '>', '<', ';'};
    vector<char> operators = {'=', '-', '/', '*', '+'};
    vector<char> constants = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int n = s.size();
    int i = 0;

    while (i < n) {
        if (find(separators.begin(), separators.end(), s[i]) != separators.end()) {
            cout << "separator\t" << s[i] << endl;
            i++;
        } else if (find(operators.begin(), operators.end(), s[i]) != operators.end()) {
            cout << "operator\t" << s[i] << endl;
            i++;
        } else if (find(constants.begin(), constants.end(), s[i]) != constants.end()) {
            string current;
            while (i < n && find(constants.begin(), constants.end(), s[i]) != constants.end()) {
                current += s[i];
                i++;
            }
            cout << "Constant\t" << current << endl;
        } else if (s[i] == ' ') {
            i++; // skip spaces
        } else {
            string current;
            while (i < n &&
                   find(separators.begin(), separators.end(), s[i]) == separators.end() &&
                   find(operators.begin(), operators.end(), s[i]) == operators.end() &&
                   s[i] != ' ') {
                current += s[i];
                i++;
            }
            cout << "Identifier\t" << current << endl;
        }
    }
}

int main() {
    ifstream my_file("file.txt");
    string line;

    if (!my_file.is_open()) {
        cerr << "Error: Could not open file.txt" << endl;
        return 1;
    }

    while (getline(my_file, line)) {
        check(line);
    }

    my_file.close();
    return 0;
}
