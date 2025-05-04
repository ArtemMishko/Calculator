#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

// Метод для обработки нажатия на цифровые кнопки
System::Void CalculatorApp::MainForm::NumberButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = safe_cast<Button^>(sender);
    String^ buttonText = button->Text;

    if (isNewEntry)
    {
        displayTextBox->Text = buttonText;
        isNewEntry = false;
    }
    else
    {
        if (displayTextBox->Text == "0")
            displayTextBox->Text = buttonText;
        else
            displayTextBox->Text += buttonText;
    }
}

// Метод для обработки нажатия на кнопки операций
System::Void CalculatorApp::MainForm::OperationButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = safe_cast<Button^>(sender);
    firstOperand = Double::Parse(displayTextBox->Text);
    currentOperation = button->Text[0];
    isNewEntry = true;
}

// Метод для обработки нажатия на кнопку равно
System::Void CalculatorApp::MainForm::EqualsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (currentOperation == '\0')
        return;

    double secondOperand = Double::Parse(displayTextBox->Text);
    double result = 0.0;

    try
    {
        switch (currentOperation)
        {
        case '+':
            result = calculator->Add(firstOperand, secondOperand);
            break;
        case '-':
            result = calculator->Subtract(firstOperand, secondOperand);
            break;
        case '*':
            result = calculator->Multiply(firstOperand, secondOperand);
            break;
        case '/':
            result = calculator->Divide(firstOperand, secondOperand);
            break;
        }

        displayTextBox->Text = result.ToString();
    }
    catch (DivideByZeroException^ ex)
    {
        displayTextBox->Text = "Ошибка: " + ex->Message;
    }
    catch (Exception^ ex)
    {
        displayTextBox->Text = "Ошибка";
    }

    currentOperation = '\0';
    isNewEntry = true;
}

// Метод для обработки нажатия на кнопку десятичной точки
System::Void CalculatorApp::MainForm::DecimalButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (isNewEntry)
    {
        displayTextBox->Text = "0,";
        isNewEntry = false;
    }
    else if (!displayTextBox->Text->Contains(","))
    {
        displayTextBox->Text += ",";
    }
}

// Метод для обработки нажатия на кнопку очистки
System::Void CalculatorApp::MainForm::ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    displayTextBox->Text = "0";
    firstOperand = 0;
    currentOperation = '\0';
    isNewEntry = true;
}

// Точка входа в приложение
[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Создаем и запускаем форму
    Application::Run(gcnew CalculatorApp::MainForm());
    return 0;
}