#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    int int1{}, int2{}, int3{};
    int intMin{}, intAvg{}, intMax{};

    std::cout << "¬ведите первое число: ";
    std::cin >> int1;

    std::cout << "¬ведите второе число: ";
    std::cin >> int2;

    std::cout << "¬ведите третье число: ";
    std::cin >> int3;

    intMin = int1;
    if (int2 < intMin) intMin = int2;
    if (int3 < intMin) intMin = int3;

  
    intMax = int1;
    if (int2 > intMax) intMax = int2;
    if (int3 > intMax) intMax = int3;

    
    if (int1 != intMin && int1 != intMax)
        intAvg = int1;
    else if (int2 != intMin && int2 != intMax)
        intAvg = int2;
    else
        intAvg = int3;

    std::cout << "–езультат: " << intMax << ' ' << intAvg << ' ' << intMin << std::endl;

    return EXIT_SUCCESS;
}