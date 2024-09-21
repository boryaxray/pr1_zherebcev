﻿// 1409.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

 int fibs(int n)
{
     int a = 0, b = 1, c;
    if (n <= 0) return 0;
    else if (n == 1) return 1;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;//сумма двух пред чисел
        a = b;//сдвигаем для след итерации 
        b = c;
    }
    return b;
}
int main()
{
    //zad2
    setlocale(0, "rus");
    int n;
    std::cout << "Введите число n\n";
    std::cin >> n;
    std::cout << n << "-ое число Фибоначчи =" << fibs(n);
    //zad1
    /*double h1;
    double h2;
    std::cout << "Введите число\n";
    std::cin >> h1;
    std::cout << "Введите число на которое разделить\n";
    std::cin >> h2;
    std::cout << "" <<h1 <<"/" << h2 <<"=" << h1/h2;*/
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
