#include "Calculator.h"

namespace Calculator {

    // Конструктор
    SimpleCalculator::SimpleCalculator()
    {
        lastResult = 0.0;
    }

    // Метод сложения
    double SimpleCalculator::Add(double a, double b)
    {
        lastResult = a + b;
        return lastResult;
    }

    // Метод вычитания
    double SimpleCalculator::Subtract(double a, double b)
    {
        lastResult = a - b;
        return lastResult;
    }

    // Метод умножения
    double SimpleCalculator::Multiply(double a, double b)
    {
        lastResult = a * b;
        return lastResult;
    }

    // Метод деления
    double SimpleCalculator::Divide(double a, double b)
    {
        // Проверка деления на ноль
        if (b == 0.0)
        {
            throw gcnew System::DivideByZeroException("Деление на ноль невозможно");
        }

        lastResult = a / b;
        return lastResult;
    }
}