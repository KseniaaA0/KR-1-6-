#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
ifstream file("sometext.txt");

if (!file.is_open()) {
cout « "Ошибка открытия файла!\n";
file.close();
return -1;
}

string outputLine = "";
char ch = ' ';

while (file.get(ch)) {
if (islower(ch)) {
outputLine.push_back(char(toupper(ch)));
} else {
outputLine.push_back(char(tolower(ch)));
}
}
file.close();

ofstream out("sometext(modify).txt");
if (!out.is_open()) {
cout « "^\n";
out.close();
return -1;
}

out « outputLine;

out.close();

return 0;
}
