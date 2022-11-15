#include <iostream>
using namespace std;
void input_coordinates();
int quater(int*x,int*y);
void outputAnswer(int quater);
int main() {
    input_coordinates();
    return 0;
}
void input_coordinates() {
    int x,y;
    std::cin>>x>>y;
    outputAnswer(quater(&x,&y));
}
int quater(int*x,int*y) {
    if (*x !=0 && *y !=0) {
        if (*x > 0 && *y > 0) return 1;
    else if (*x < 0 && *y > 0) return 2;
    else if (*x < 0 && *y < 0) return 3;
    else if (*x > 0 && *y < 0) return 4;
    }
    else return 0;
}
void outputAnswer(int quater) {
    std::cout<<quater;
}
