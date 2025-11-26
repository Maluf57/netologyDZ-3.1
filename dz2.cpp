#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");										

	int int1{}, int2{}, int3{};										
	int intMin{}, intAvg{}, intMax{};

	std::cout << "Введите первое число: ";
	std::cin >> int1;

	std::cout << "Введите второе число: ";
	std::cin >> int2;

	std::cout << "Введите третье число: ";
	std::cin >> int3;


	intMin = (int1 <= int2) && (int1 <= int3) ? int1 : (int2 <= int3 ? int2 : int3);

	intMax = (int1 >= int2) && (int1 >= int3) ? int1 : (int2 >= int3 ? int2 : int3);

	intAvg = ((intMin == int1) && (intMax == int2)) || ((intMax == int1) && (intMin == int2)) ? int3 :
		((intMin == int1) && (intMax == int3)) || ((intMax == int1) && (intMin == int3)) ? int2 :
		int1;


	std::cout << "\nРезультат: " << intMax << ' ' << intAvg << ' ' << intMin << std::endl;

	return EXIT_SUCCESS;
}
