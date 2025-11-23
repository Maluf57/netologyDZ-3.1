#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

string num3(int num) {
        if (num < 0) {
        return "минус " + num3(-num);
    }

    if (num == 0) return "ноль";

    if (num == 1) return "один";
    if (num == 2) return "два";
    if (num == 3) return "три";
    if (num == 4) return "четыре";
    if (num == 5) return "пять";
    if (num == 6) return "шесть";
    if (num == 7) return "семь";
    if (num == 8) return "восемь";
    if (num == 9) return "девять";
    if (num == 10) return "десять";
    if (num == 11) return "одиннадцать";
    if (num == 12) return "двенадцать";
    if (num == 13) return "тринадцать";
    if (num == 14) return "четырнадцать";
    if (num == 15) return "пятнадцать";
    if (num == 16) return "шестнадцать";
    if (num == 17) return "семнадцать";
    if (num == 18) return "восемнадцать";
    if (num == 19) return "девятнадцать";

    int t = num / 10;
    int u = num % 10;

    string result;

    if (t == 2) result = "двадцать";
    else if (t == 3) result = "тридцать";
    else if (t == 4) result = "сорок";
    else if (t == 5) result = "пятьдесят";
    else if (t == 6) result = "шестьдесят";
    else if (t == 7) result = "семьдесят";
    else if (t == 8) result = "восемьдесят";
    else if (t == 9) result = "девяносто";

    if (u == 0) {
        return result;
    }
    else {
        string units_part;
        if (u == 1) units_part = "один";
        else if (u == 2) units_part = "два";
        else if (u == 3) units_part = "три";
        else if (u == 4) units_part = "четыре";
        else if (u == 5) units_part = "пять";
        else if (u == 6) units_part = "шесть";
        else if (u == 7) units_part = "семь";
        else if (u == 8) units_part = "восемь";
        else if (u == 9) units_part = "девять";

        return result + " " + units_part;
    }
}

int main() {
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;

    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;

    if (num1 >= 100 || num2 >= 100 || num1 <= -100 || num2 <= -100) {
        cout << "Ошибка! Одно из чисел вне диапазона!" << endl;
        return 1;
    }

    if (num1 > num2) {
        cout << num3(num1) << " больше чем " << num3(num2) << endl;
    }
    else if (num1 < num2) {
        cout << num3(num1) << " меньше чем " << num3(num2) << endl;
    }
    else {
        cout << num3(num1) << " равно " << num3(num2) << endl;
    }

    return 0;
}