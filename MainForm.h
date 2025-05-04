#pragma once
#include "Calculator.h"

namespace CalculatorApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace Calculator;

    /// <summary>
    /// Главная форма для калькулятора
    /// </summary>
    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
            calculator = gcnew SimpleCalculator();
            currentOperation = '\0';
            firstOperand = 0;
            isNewEntry = true;
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Компоненты WinForms
        System::Windows::Forms::TextBox^ displayTextBox;
        System::Windows::Forms::Button^ button0;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Button^ button4;
        System::Windows::Forms::Button^ button5;
        System::Windows::Forms::Button^ button6;
        System::Windows::Forms::Button^ button7;
        System::Windows::Forms::Button^ button8;
        System::Windows::Forms::Button^ button9;
        System::Windows::Forms::Button^ buttonAdd;
        System::Windows::Forms::Button^ buttonSubtract;
        System::Windows::Forms::Button^ buttonMultiply;
        System::Windows::Forms::Button^ buttonDivide;
        System::Windows::Forms::Button^ buttonEquals;
        System::Windows::Forms::Button^ buttonClear;
        System::Windows::Forms::Button^ buttonDecimal;
        System::ComponentModel::Container^ components;

        // Инициализация компонентов
        void InitializeComponent(void)
        {
            this->displayTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button0 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->buttonAdd = (gcnew System::Windows::Forms::Button());
            this->buttonSubtract = (gcnew System::Windows::Forms::Button());
            this->buttonMultiply = (gcnew System::Windows::Forms::Button());
            this->buttonDivide = (gcnew System::Windows::Forms::Button());
            this->buttonEquals = (gcnew System::Windows::Forms::Button());
            this->buttonClear = (gcnew System::Windows::Forms::Button());
            this->buttonDecimal = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // displayTextBox
            // 
            this->displayTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->displayTextBox->Location = System::Drawing::Point(9, 10);
            this->displayTextBox->Margin = System::Windows::Forms::Padding(2);
            this->displayTextBox->Name = L"displayTextBox";
            this->displayTextBox->ReadOnly = true;
            this->displayTextBox->Size = System::Drawing::Size(196, 29);
            this->displayTextBox->TabIndex = 0;
            this->displayTextBox->Text = L"0";
            this->displayTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // button0
            // 
            this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button0->Location = System::Drawing::Point(9, 210);
            this->button0->Margin = System::Windows::Forms::Padding(2);
            this->button0->Name = L"button0";
            this->button0->Size = System::Drawing::Size(45, 49);
            this->button0->TabIndex = 13;
            this->button0->Text = L"0";
            this->button0->UseVisualStyleBackColor = true;
            this->button0->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button1->Location = System::Drawing::Point(9, 156);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(45, 49);
            this->button1->TabIndex = 9;
            this->button1->Text = L"1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button2->Location = System::Drawing::Point(58, 156);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(45, 49);
            this->button2->TabIndex = 10;
            this->button2->Text = L"2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button3->Location = System::Drawing::Point(108, 156);
            this->button3->Margin = System::Windows::Forms::Padding(2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(45, 49);
            this->button3->TabIndex = 11;
            this->button3->Text = L"3";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button4->Location = System::Drawing::Point(9, 102);
            this->button4->Margin = System::Windows::Forms::Padding(2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(45, 49);
            this->button4->TabIndex = 5;
            this->button4->Text = L"4";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button5
            // 
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button5->Location = System::Drawing::Point(58, 102);
            this->button5->Margin = System::Windows::Forms::Padding(2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(45, 49);
            this->button5->TabIndex = 6;
            this->button5->Text = L"5";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button6->Location = System::Drawing::Point(108, 102);
            this->button6->Margin = System::Windows::Forms::Padding(2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(45, 49);
            this->button6->TabIndex = 7;
            this->button6->Text = L"6";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button7
            // 
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button7->Location = System::Drawing::Point(9, 49);
            this->button7->Margin = System::Windows::Forms::Padding(2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(45, 49);
            this->button7->TabIndex = 1;
            this->button7->Text = L"7";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button8
            // 
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button8->Location = System::Drawing::Point(58, 49);
            this->button8->Margin = System::Windows::Forms::Padding(2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(45, 49);
            this->button8->TabIndex = 2;
            this->button8->Text = L"8";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // button9
            // 
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->button9->Location = System::Drawing::Point(108, 49);
            this->button9->Margin = System::Windows::Forms::Padding(2);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(45, 49);
            this->button9->TabIndex = 3;
            this->button9->Text = L"9";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &MainForm::NumberButton_Click);
            // 
            // buttonAdd
            // 
            this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonAdd->Location = System::Drawing::Point(158, 210);
            this->buttonAdd->Margin = System::Windows::Forms::Padding(2);
            this->buttonAdd->Name = L"buttonAdd";
            this->buttonAdd->Size = System::Drawing::Size(45, 49);
            this->buttonAdd->TabIndex = 16;
            this->buttonAdd->Text = L"+";
            this->buttonAdd->UseVisualStyleBackColor = true;
            this->buttonAdd->Click += gcnew System::EventHandler(this, &MainForm::OperationButton_Click);
            // 
            // buttonSubtract
            // 
            this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonSubtract->Location = System::Drawing::Point(158, 156);
            this->buttonSubtract->Margin = System::Windows::Forms::Padding(2);
            this->buttonSubtract->Name = L"buttonSubtract";
            this->buttonSubtract->Size = System::Drawing::Size(45, 49);
            this->buttonSubtract->TabIndex = 12;
            this->buttonSubtract->Text = L"-";
            this->buttonSubtract->UseVisualStyleBackColor = true;
            this->buttonSubtract->Click += gcnew System::EventHandler(this, &MainForm::OperationButton_Click);
            // 
            // buttonMultiply
            // 
            this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonMultiply->Location = System::Drawing::Point(158, 102);
            this->buttonMultiply->Margin = System::Windows::Forms::Padding(2);
            this->buttonMultiply->Name = L"buttonMultiply";
            this->buttonMultiply->Size = System::Drawing::Size(45, 49);
            this->buttonMultiply->TabIndex = 8;
            this->buttonMultiply->Text = L"*";
            this->buttonMultiply->UseVisualStyleBackColor = true;
            this->buttonMultiply->Click += gcnew System::EventHandler(this, &MainForm::OperationButton_Click);
            // 
            // buttonDivide
            // 
            this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonDivide->Location = System::Drawing::Point(158, 49);
            this->buttonDivide->Margin = System::Windows::Forms::Padding(2);
            this->buttonDivide->Name = L"buttonDivide";
            this->buttonDivide->Size = System::Drawing::Size(45, 49);
            this->buttonDivide->TabIndex = 4;
            this->buttonDivide->Text = L"/";
            this->buttonDivide->UseVisualStyleBackColor = true;
            this->buttonDivide->Click += gcnew System::EventHandler(this, &MainForm::OperationButton_Click);
            // 
            // buttonEquals
            // 
            this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonEquals->Location = System::Drawing::Point(108, 210);
            this->buttonEquals->Margin = System::Windows::Forms::Padding(2);
            this->buttonEquals->Name = L"buttonEquals";
            this->buttonEquals->Size = System::Drawing::Size(45, 49);
            this->buttonEquals->TabIndex = 15;
            this->buttonEquals->Text = L"=";
            this->buttonEquals->UseVisualStyleBackColor = true;
            this->buttonEquals->Click += gcnew System::EventHandler(this, &MainForm::EqualsButton_Click);
            // 
            // buttonClear
            // 
            this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonClear->Location = System::Drawing::Point(9, 263);
            this->buttonClear->Margin = System::Windows::Forms::Padding(2);
            this->buttonClear->Name = L"buttonClear";
            this->buttonClear->Size = System::Drawing::Size(194, 32);
            this->buttonClear->TabIndex = 17;
            this->buttonClear->Text = L"C";
            this->buttonClear->UseVisualStyleBackColor = true;
            this->buttonClear->Click += gcnew System::EventHandler(this, &MainForm::ClearButton_Click);
            // 
            // buttonDecimal
            // 
            this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->buttonDecimal->Location = System::Drawing::Point(58, 210);
            this->buttonDecimal->Margin = System::Windows::Forms::Padding(2);
            this->buttonDecimal->Name = L"buttonDecimal";
            this->buttonDecimal->Size = System::Drawing::Size(45, 49);
            this->buttonDecimal->TabIndex = 14;
            this->buttonDecimal->Text = L",";
            this->buttonDecimal->UseVisualStyleBackColor = true;
            this->buttonDecimal->Click += gcnew System::EventHandler(this, &MainForm::DecimalButton_Click);
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(212, 302);
            this->Controls->Add(this->buttonClear);
            this->Controls->Add(this->buttonAdd);
            this->Controls->Add(this->buttonEquals);
            this->Controls->Add(this->buttonDecimal);
            this->Controls->Add(this->button0);
            this->Controls->Add(this->buttonSubtract);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->buttonMultiply);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->buttonDivide);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->displayTextBox);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Margin = System::Windows::Forms::Padding(2);
            this->MaximizeBox = false;
            this->Name = L"MainForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Калькулятор";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        // Обработчики событий
        System::Void NumberButton_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void OperationButton_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void EqualsButton_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void DecimalButton_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e);

        // Логика калькулятора
        SimpleCalculator^ calculator;
        char currentOperation;
        double firstOperand;
        bool isNewEntry;
    };
}