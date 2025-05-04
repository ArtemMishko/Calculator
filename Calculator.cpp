#include "Calculator.h"

namespace Calculator {

    // �����������
    SimpleCalculator::SimpleCalculator()
    {
        lastResult = 0.0;
    }

    // ����� ��������
    double SimpleCalculator::Add(double a, double b)
    {
        lastResult = a + b;
        return lastResult;
    }

    // ����� ���������
    double SimpleCalculator::Subtract(double a, double b)
    {
        lastResult = a - b;
        return lastResult;
    }

    // ����� ���������
    double SimpleCalculator::Multiply(double a, double b)
    {
        lastResult = a * b;
        return lastResult;
    }

    // ����� �������
    double SimpleCalculator::Divide(double a, double b)
    {
        // �������� ������� �� ����
        if (b == 0.0)
        {
            throw gcnew System::DivideByZeroException("������� �� ���� ����������");
        }

        lastResult = a / b;
        return lastResult;
    }
}