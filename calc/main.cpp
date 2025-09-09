/*
Younes Bakir
Calculator
9/9/25
Extra: TBD
*/

#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
using namespace std;

int main() {
int num1;
int num2;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

for (int i = 0; i < 16; i++) {
SetConsoleTextAttribute(hConsole, i);
cout << "Enter a number: ";
std::this_thread::sleep_for(std::chrono::milliseconds(1));
}

}