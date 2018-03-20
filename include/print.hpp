#include <string>
#include <fstream>
#include <iostream>

// Функция вывода строки в поток
void print(const std::string& text, std::ostream& out = std::cout);

// Функция вывода строки в файл
void print(const std::string& text, std::ofstream& out);
