#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << " Оператор || /ИЛИ" << std::endl;
	std::cout << "true  true  " << (true || true ? "true" : "false") << std::endl;
	std::cout << "false true  " << (false || true ? "true" : "false") << std::endl;
	std::cout << "true false  " << (true || false ? "true" : "false") << std::endl;
	std::cout << "false false " << (false || false ? "true" : "false") << std::endl;

	std::cout << " Оператор && /И " << std::endl;
	std::cout << "true true  " << (true && true ? "true" : " false") << std::endl;
	std::cout << "false true " << (false && true ? "true" : "false") << std::endl;
	std::cout << "true false" << (true && false ? "true" : "false") << std::endl;
	std::cout << "false false" << (false && false ? "true " : "false") << std::endl;

	return EXIT_SUCCESS;
}

