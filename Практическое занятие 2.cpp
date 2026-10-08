#include <iostream> // Используем заголовочный файл потока ввода/вывода
#include <cmath> // Используем заголовочный файл математических функций
#include <numbers>

#include "Переменные.cpp"
#include "Консоль.cpp"

using namespace std; // Используем стандартную библиотеку

/*
    Групповое занятие: совместными усилиями реализовать доп. функции калькулятора

    1) Назначьте руководителя проекта
    Руководитель проекта должен создать репозиторий проекта калькулятора и добавить туда своих напарников.
    Затем распределите подзадачи на каждого участника.

    2) Каждый участник проекта должен запуллить проект из репозитория себе и создать ветку,
    назвать её своим ФИО латиницей, выполнить свою подзадачу в ней, после чего создать
    запрос на слияние ветвей (merge request)

    3) Команда просматривает каждую ветку, оставляет свои комментарии по доработке, если необходимо, затем
    руководитель проекта производит слияние в мастер-ветку. Итоговый проект должен корректно проводить вычисления

    ПОДЗАДАЧИ:

    1. Доработать int main()
        1.1 Вывести в консоль указания пользователю для работы с программой
        1.2 Реализовать ввод трех значений с консоли и хранение этих переменных для других методов
    2. Описать метод рассчёта площади круга
    3. Описать метод рассчёта площади прямоугольника
    4. Описать метод рассчёта площади треугольника по формуле Герона
    5. Описать метод рассчёта площади треугольника через основание и высоту

    В конце прошу округлять вычисления до двух знаков после запятой, используя
    double rounded = round(value * 100.0) / 100.0 - вернёт число с двумя знаками после запятой
    Помимо вычислений, каждый метод должен делать аккуратный вывод результата в консоль
    */

class Calculator
{
public:

    /// <summary>
    /// Вычисляет сумму двух чисел с плавающей запятой
    /// </summary>
    /// <param name="a">Первое значение</param>
    /// <param name="b">Второе значение</param>
    /// <returns>Итоговая сумма</returns>
    static double Sum(double a, double b)
    {
        // Вычисляем
        double sum = a + b;
        // Округляем
        double result = round(sum * 100.0) / 100.0;
        // Выводим в консоль рассчёты
        cout << "Сумма: " << sum << endl;

        return sum;
    }

    // Подзадача 2
    static double CircleArea(double radius)
    {
        // Вычисляем
        double area = std::numbers::pi * std::pow(radius, 2);
        // Округляем
        double result = round(area * 100.0) / 100.0;
        // Выводим в консоль рассчёты
        cout << "Площадь круга: " << result << endl;

        return result;
    }

    // Подзадача 3
    static double RectangleArea(double first, double second)
    {
        // Вычисляем
        double tr =  first * second;
        // Округляем
        double result = round(tr * 100.0) / 100.0;
        // Выводим в консоль рассчёты
        cout << "Площадь треугольника: " << result << endl;
        return result;
    }

    // Подзадача 4
    static double TriangleArea(double first, double second, double third)
    {
        
            if (first + second > third && first + third > second && second + third > first)
            {
                double p = (first + second + third) / 2.0; // Полупериметр
                double area = sqrt(p * (p - first) * (p - second) * (p - third)); // Корень из произведения
                double result = round(area * 100.0) / 100.0;
                cout << "Площадь треугольника (Герон): " << result << endl;
                return result;
            }
            else
            {
                cout << "Ошибка: Треугольник с такими сторонами не существует!" << endl;
                return 0;
            }
        
    }

    // Подзадача 5
    static double TriangleArea(double base, double height)
    {
        double area = 0.5 * base * height;
        double result = round(area * 100.0) / 100.0;
        cout << "Площадь треугольника: " << result << endl;
        return result;
        
    }
};

int main()
{
    Console::SetRussianOnWindows();
    // Подзадача 1

    // Для проверки задания: снять комментарии, заполнить методы переменными, 
    // запустить и посмотреть консольный вывод
    Calculator::Sum(3., 5.);
    // Calculator::CircleArea();
    // Calculator::RectangleArea();
    // Calculator::TriangleArea();
    // Calculator::TriangleArea();
}