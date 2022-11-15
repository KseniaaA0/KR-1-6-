#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void theNumberOfRaws();
void outputAnswer(int* counter);
int main() {
    theNumberOfRaws();
    return 0;
}
void theNumberOfRaws() {
    ifstream fin;
    string str;
    int counter = 0;
    fin.open("text.txt", ios_base::in);
    if (!fin.is_open()) return;
    while (getline(fin, str)) {
        ++counter;
    }
    fin.close();
    outputAnswer(&counter);
}
void outputAnswer(int* counter) {
    cout << *counter;
}
