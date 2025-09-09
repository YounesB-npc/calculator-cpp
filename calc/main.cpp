/*
Younes Bakir
Calculator
9/9/25
Extra: Changing Color Text
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
cin >> num1;
cout << "Enter a second number: ";
cin >> num2;
cout << "Added: " << num1 + num2 << endl;
cout << "Subtracted: " << num1 - num2 << endl;
cout << "Multiplied: " << num1 * num2 << endl;
cout << "Divided: " << num1 / num2 << endl;
cout << "Modulo: " << num1 % num2 << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(1));
}

}
