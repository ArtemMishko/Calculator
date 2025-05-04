#pragma once

namespace Calculator {

    public ref class SimpleCalculator
    {
    public:
        // Конструктор
        SimpleCalculator();

        // Методы для арифметических операций
        double Add(double a, double b);
        double Subtract(double a, double b);
        double Multiply(double a, double b);
        double Divide(double a, double b);

    private:
        // Приватные поля (если понадобятся)
        double lastResult;
    };
}