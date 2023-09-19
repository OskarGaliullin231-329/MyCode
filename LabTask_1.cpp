#include <iostream>
#include <locale.h>
#include <limits>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::cout << "������ ����� ������: ";
    std::cin >> number;
    std::cout << "\n";

    if (number == 1)
    {
        std::cout << "��������� ����� ����������, ������ 231-329";
    }

    if (number == 2)
    {
        std::cout << "����������� �������� ������ int ���������� " << INT_MIN << "\n������������ �������� ������ int ���������� " << INT_MAX;
        std::cout << "\n������ ��������� ������ int ���������� " << sizeof(int)<< " ������" << std::endl;

        std::cout << "\n����������� �������� ������ float ��� " << std::numeric_limits<float>::lowest();
        std::cout << "\n������������ �������� ������ float ��� " << std::numeric_limits<float>::max();
        std::cout << "\n������ ��������� ������ float ���������� " << sizeof(float) << " ������" << std::endl;

        std::cout << "\n����������� �������� ������ double ���������� " << std::numeric_limits<double>::lowest();
        std::cout << "\n������������ �������� ������ double ���������� " << std::numeric_limits<double>::max();
        std::cout << "\n������ ��������� ������ double ���������� " << sizeof(double) << " ������" << std::endl;

        std::cout << "\n����������� �������� ������ unsigned long ���������� " << std::numeric_limits<unsigned long>::lowest();
        std::cout << "\n������������ �������� ������ unsigned long ���������� " << std::numeric_limits<unsigned long>::max();
        std::cout << "\n������ ��������� ������ unsigned long ���������� " << sizeof(unsigned long) << " ������" << std::endl;
    }

    if (number == 3)
    {
        int input;
        char str[30];
        std::cout << "������� �����: ";
        std::cin >> input;
        std::cout << "\n�������� ������: " << itoa(input, str, 2);
        std::cout << "\n������������������ ������: " << itoa(input, str, 16);
    }

    if (number == 4)
    {
        int a, b;
        std::cout << "���� ��������� ax = b\n";
        std::cout << "a = ";
        std::cin >> a;
        std:cout << "\nb = ";
        std::cin >> b;
        if (a == 0 && b != 0)
        {
            std::cout << "��� ������ ������������� ������� ���!";
        }
        else
        {
            float x = (float)b/a;
            std::cout << "������� ���������: " << x;
            std::cout << "\n������������:" << a << "*" << x << "=" << b;
        }
    }
    if (number == 5)
    {
        int x1, x2, y1, y2;
        std::cout << "������� ���������� ����� �(x1, y1):\n";
        std::cout << "x1 = ";
        std::cin >> x1;
        std::cout << "y1 = ";
        std::cin >> y1;

        std::cout << "������� ���������� ����� B(x2, y2):\n";
        std::cout << "x2 = ";
        std::cin >> x2;
        std::cout << "y2 = ";
        std::cin >> y2;

        std::cout << "��������� ������� ������ ����� M(" << (float)(x1+x2)/2 << ";" << (float)(y1+y2)/2 << ")";
    }

    return 0;
}
