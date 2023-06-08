//
// Created by Paul on 2023/6/8.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!";
}

class Line {
public:
    int width{};
    int length{};
    int high{};

    Line();

    void setWidth(int width);
};

Line::Line() {
    cout << "this is constructor !";
}

void Line::setWidth(int width) {
    width = width;
}
