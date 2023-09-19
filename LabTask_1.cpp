#include <iostream>
#include <locale.h>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::cout << "введие номер задния: ";
    std::cin >> number;
    std::cout << "\n";

    if (number == 1)
    {
        std::cout << "Галиуллин Оскар Мидхатович, группа 231-329";
    }

    if (number == 2)
    {
        std::cout << "минимальное значение класса int составляет " << INT_MIN << "\nмаксимальное значение класса int составляет " << INT_MAX;
        std::cout << "\nразмер элементов класса int составляет " << sizeof(int)<< " байтов" << std::endl;

        std::cout << "\nминимальное значение класса float это " << std::numeric_limits<float>::lowest();
        std::cout << "\nмаксимальное значение класса float это " << std::numeric_limits<float>::max();
        std::cout << "\nразмер элементов класса float составляет " << sizeof(float) << " байтов" << std::endl;

        std::cout << "\nминимальное значение класса double составляет " << std::numeric_limits<double>::lowest();
        std::cout << "\nмаксимальное значение класса double составляет " << std::numeric_limits<double>::max();
        std::cout << "\nразмер элементов класса double составляет " << sizeof(double) << " байтов" << std::endl;

        std::cout << "\nминимальное значение класса unsigned long составляет " << std::numeric_limits<unsigned long>::lowest();
        std::cout << "\nмаксимальное значение класса unsigned long составляет " << std::numeric_limits<unsigned long>::max();
        std::cout << "\nразмер элементов класса unsigned long составляет " << sizeof(unsigned long) << " байтов" << std::endl;
    }

    if (number == 3)
    {
        int input;
        char str[30];
        std::cout << "введите число: ";
        std::cin >> input;
        std::cout << "\nдвоичная запись: " << itoa(input, str, 2);
        std::cout << "\nшестналдцатиричная запись: " << itoa(input, str, 16);
    }

    if (number == 4)
    {
        int a, b;
        std::cout << "дано уравнение ax = b\n";
        std::cout << "a = ";
        std::cin >> a;
        std:cout << "\nb = ";
        std::cin >> b;
        if (a == 0 && b != 0)
        {
            std::cout << "для данных коэффициентов решений нет!";
        }
        else
        {
            float x = (float)b/a;
            std::cout << "решение уравнения: " << x;
            std::cout << "\nдействиельно:" << a << "*" << x << "=" << b;
        }
    }
    if (number == 5)
    {
        int x1, x2, y1, y2;
        std::cout << "введите координаты точки А(x1, y1):\n";
        std::cout << "x1 = ";
        std::cin >> x1;
        std::cout << "y1 = ";
        std::cin >> y1;

        std::cout << "введите координаты точки B(x2, y2):\n";
        std::cout << "x2 = ";
        std::cin >> x2;
        std::cout << "y2 = ";
        std::cin >> y2;

        std::cout << "серединой отрезка будетт точка M(" << (float)(x1+x2)/2 << ";" << (float)(y1+y2)/2 << ")";
    }

    return 0;
}
