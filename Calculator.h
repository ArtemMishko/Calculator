#pragma once

namespace Calculator {

    public ref class SimpleCalculator
    {
    public:
        // �����������
        SimpleCalculator();

        // ������ ��� �������������� ��������
        double Add(double a, double b);
        double Subtract(double a, double b);
        double Multiply(double a, double b);
        double Divide(double a, double b);

    private:
        // ��������� ���� (���� �����������)
        double lastResult;
    };
}