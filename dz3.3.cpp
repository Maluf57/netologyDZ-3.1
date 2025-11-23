#include <iostream>
#include <string>
#include <Windows.h> 
using namespace std;

bool isWaterSign(const string& z) { return z == "рак" || z == "скорпион" || z == "рыбы"; }
bool isEarthSign(const string& z) { return z == "телец" || z == "дева" || z == "козерог"; }

int main() {
    setlocale(LC_CTYPE, "rus");

    SetConsoleCP(1251);

    SetConsoleOutputCP(1251);

    string gender, zodiac; int age;

    cout << "Введите пол: "; getline(cin, gender);
    cout << "Введите знак: "; getline(cin, zodiac);
    cout << "Введите возраст: "; cin >> age;

    if (gender == "мужчина" && isWaterSign(zodiac) && age < 40) {
        cout << "Сегодня очень плодотворный день. Можно добиться того, что ранее казалось почти невозможным.\n";
    }
    else if (gender == "женщина" && isEarthSign(zodiac) && age >= 15 && age <= 30) {
        cout << "Сегодняшний вечер подходит для общения с друзьями...\n";
    }
    else {
        cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n";
    }

    return 0;
}