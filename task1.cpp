#include <iostream>

using namespace std;
pair <int, int> Innumbers();
int max(pair<int, int> numbers);
void Aswer(int maxNumber);

int main()
{
	Aswer(max(Innumbers()));
	return 0;
}
pair <int, int> Innumbers() {

	pair<int, int> numbers;
	cout << "Enter to numbers" << endl;
	cin >> numbers.first >> numbers.second;
	return numbers;
}
int max(pair<int, int> numbers) {
	return numbers.first > numbers.second ? numbers.first : numbers.second;
}
void Aswer(int maxNumber) {

	cout << "Your max number = " << maxNumber << endl;
}
