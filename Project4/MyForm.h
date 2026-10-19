#pragma once

namespace Project4 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Globalization; // Для CultureInfo

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            txtFunc->Text = "x + cos(y/5)";
            txtX0->Text = "1,8";
            txtY0->Text = "2,6";
            txtXEnd->Text = "2,8";
            txtH->Text = "0,1";
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ txtH;
        System::Windows::Forms::Button^ btnCalc;
        System::Windows::Forms::TextBox^ txtResult;
        System::Windows::Forms::Label^ lblAuthor;
        System::Windows::Forms::Button^ btnClear;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ txtFunc;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ txtX0;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::TextBox^ txtY0;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::TextBox^ txtXEnd;
        System::Windows::Forms::Label^ lblTask;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtH = (gcnew System::Windows::Forms::TextBox());
            this->btnCalc = (gcnew System::Windows::Forms::Button());
            this->txtResult = (gcnew System::Windows::Forms::TextBox());
            this->lblAuthor = (gcnew System::Windows::Forms::Label());
            this->btnClear = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtFunc = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txtX0 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txtY0 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->txtXEnd = (gcnew System::Windows::Forms::TextBox());
            this->lblTask = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(240, 130);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(51, 16);
            this->label1->TabIndex = 8;
            this->label1->Text = L"Крок h:";
            // 
            // txtH
            // 
            this->txtH->Location = System::Drawing::Point(360, 127);
            this->txtH->Name = L"txtH";
            this->txtH->Size = System::Drawing::Size(80, 22);
            this->txtH->TabIndex = 9;
            // 
            // btnCalc
            // 
            this->btnCalc->Location = System::Drawing::Point(40, 170);
            this->btnCalc->Name = L"btnCalc";
            this->btnCalc->Size = System::Drawing::Size(150, 40);
            this->btnCalc->TabIndex = 10;
            this->btnCalc->Text = L"Обчислити";
            this->btnCalc->UseVisualStyleBackColor = true;
            this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
            // 
            // txtResult
            // 
            this->txtResult->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
            this->txtResult->Location = System::Drawing::Point(40, 216);
            this->txtResult->Multiline = true;
            this->txtResult->Name = L"txtResult";
            this->txtResult->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txtResult->Size = System::Drawing::Size(500, 385);
            this->txtResult->TabIndex = 12;
            // 
            // lblAuthor
            // 
            this->lblAuthor->AutoSize = true;
            this->lblAuthor->Location = System::Drawing::Point(311, 604);
            this->lblAuthor->Name = L"lblAuthor";
            this->lblAuthor->Size = System::Drawing::Size(277, 16);
            this->lblAuthor->TabIndex = 13;
            this->lblAuthor->Text = L"Виконав студент групи 4М Бачок Микола";
            // 
            // btnClear
            // 
            this->btnClear->Location = System::Drawing::Point(210, 170);
            this->btnClear->Name = L"btnClear";
            this->btnClear->Size = System::Drawing::Size(150, 40);
            this->btnClear->TabIndex = 11;
            this->btnClear->Text = L"Очистити";
            this->btnClear->UseVisualStyleBackColor = true;
            this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(40, 50);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(70, 16);
            this->label2->TabIndex = 0;
            this->label2->Text = L"y\' = f(x, y) =";
            // 
            // txtFunc
            // 
            this->txtFunc->Location = System::Drawing::Point(140, 47);
            this->txtFunc->Name = L"txtFunc";
            this->txtFunc->Size = System::Drawing::Size(300, 22);
            this->txtFunc->TabIndex = 1;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(40, 90);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(88, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"x0 (початок):";
            // 
            // txtX0
            // 
            this->txtX0->Location = System::Drawing::Point(140, 87);
            this->txtX0->Name = L"txtX0";
            this->txtX0->Size = System::Drawing::Size(80, 22);
            this->txtX0->TabIndex = 3;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(240, 90);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(105, 16);
            this->label4->TabIndex = 4;
            this->label4->Text = L"y0 (початкове):";
            // 
            // txtY0
            // 
            this->txtY0->Location = System::Drawing::Point(360, 87);
            this->txtY0->Name = L"txtY0";
            this->txtY0->Size = System::Drawing::Size(80, 22);
            this->txtY0->TabIndex = 5;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(40, 130);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(60, 16);
            this->label5->TabIndex = 6;
            this->label5->Text = L"x кінець:";
            // 
            // txtXEnd
            // 
            this->txtXEnd->Location = System::Drawing::Point(140, 127);
            this->txtXEnd->Name = L"txtXEnd";
            this->txtXEnd->Size = System::Drawing::Size(80, 22);
            this->txtXEnd->TabIndex = 7;
            // 
            // lblTask
            // 
            this->lblTask->AutoSize = true;
            this->lblTask->Location = System::Drawing::Point(40, 20);
            this->lblTask->Name = L"lblTask";
            this->lblTask->Size = System::Drawing::Size(194, 16);
            this->lblTask->TabIndex = 14;
            this->lblTask->Text = L"Задача Коші (Метод Ейлера)";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(600, 629);
            this->Controls->Add(this->lblTask);
            this->Controls->Add(this->lblAuthor);
            this->Controls->Add(this->txtResult);
            this->Controls->Add(this->btnClear);
            this->Controls->Add(this->btnCalc);
            this->Controls->Add(this->txtH);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txtXEnd);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->txtY0);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->txtX0);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->txtFunc);
            this->Controls->Add(this->label2);
            this->Name = L"MyForm";
            this->Text = L"Задача Коші (Метод Ейлера)";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // =========================================================
        //  ХЕЛПЕР: Безпечне перетворення рядка в число
        // =========================================================
        double SafeParseDouble(String^ text)
        {
            // Замінюємо кому на крапку
            String^ cleaned = text->Trim()->Replace(",", ".");
            // Парсимо з InvariantCulture (завжди крапка)
            return Double::Parse(cleaned, CultureInfo::InvariantCulture);
        }

        // =========================================================
        //  МАТЕМАТИЧНИЙ ПАРСЕР
        // =========================================================

        String^ input;
        int pos;
        double currentX;
        double currentY;

        double ParseExpression() {
            double result = ParseTerm();
            while (pos < input->Length) {
                wchar_t c = input[pos];
                if (c == '+') { pos++; result += ParseTerm(); }
                else if (c == '-') { pos++; result -= ParseTerm(); }
                else break;
            }
            return result;
        }

        double ParseTerm() {
            double result = ParseFactor();
            while (pos < input->Length) {
                wchar_t c = input[pos];
                if (c == '*') { pos++; result *= ParseFactor(); }
                else if (c == '/') { pos++; result /= ParseFactor(); }
                else break;
            }
            return result;
        }

        double ParseFactor() {
            if (pos >= input->Length) return 0;

            wchar_t c = input[pos];

            if (c == '+') { pos++; return ParseFactor(); }
            if (c == '-') { pos++; return -ParseFactor(); }

            if (c == '(') {
                pos++;
                double result = ParseExpression();
                if (pos < input->Length && input[pos] == ')') pos++;
                return result;
            }

            if (Char::IsDigit(c) || c == '.') {
                String^ numStr = "";
                while (pos < input->Length && (Char::IsDigit(input[pos]) || input[pos] == '.')) {
                    numStr += input[pos];
                    pos++;
                }
                // Використовуємо InvariantCulture для чисел всередині виразу
                return Double::Parse(numStr, CultureInfo::InvariantCulture);
            }

            if (Char::IsLetter(c)) {
                String^ funcName = "";
                while (pos < input->Length && Char::IsLetter(input[pos])) {
                    funcName += input[pos];
                    pos++;
                }

                if (funcName == "x") return currentX;
                if (funcName == "y") return currentY;

                if (funcName == "pi") return Math::PI;
                if (funcName == "e") return Math::E;

                while (pos < input->Length && input[pos] == ' ') pos++;

                if (pos < input->Length && input[pos] == '(') {
                    pos++;
                    double arg = ParseExpression();
                    if (pos < input->Length && input[pos] == ')') pos++;

                    if (funcName == "sin") return Math::Sin(arg);
                    if (funcName == "cos") return Math::Cos(arg);
                    if (funcName == "tan") return Math::Tan(arg);
                    if (funcName == "exp") return Math::Exp(arg);
                    if (funcName == "ln")  return Math::Log(arg);
                    if (funcName == "log") return Math::Log10(arg);
                    if (funcName == "sqrt") return Math::Sqrt(arg);
                    if (funcName == "abs") return Math::Abs(arg);
                }
                else {
                    throw gcnew Exception("Функція '" + funcName + "' вимагає дужок!");
                }
                return 0;
            }
            return 0;
        }

        double Function(double x, double y)
        {
            input = txtFunc->Text->ToLower();
            input = input->Replace(",", ".");

            input = input->Replace("exp", "EXPMARKER");
            input = input->Replace("ln", "LNMARKER");
            input = input->Replace("log", "LOGMARKER");
            input = input->Replace("sin", "SINMARKER");
            input = input->Replace("cos", "COSMARKER");
            input = input->Replace("tan", "TANMARKER");
            input = input->Replace("sqrt", "SQRTMARKER");
            input = input->Replace("abs", "ABSMARKER");
            input = input->Replace("pi", "PIMARKER");

            currentX = x;
            currentY = y;

            input = input->Replace("EXPMARKER", "exp");
            input = input->Replace("LNMARKER", "ln");
            input = input->Replace("LOGMARKER", "log");
            input = input->Replace("SINMARKER", "sin");
            input = input->Replace("COSMARKER", "cos");
            input = input->Replace("TANMARKER", "tan");
            input = input->Replace("SQRTMARKER", "sqrt");
            input = input->Replace("ABSMARKER", "abs");
            input = input->Replace("PIMARKER", "pi");

            pos = 0;
            return ParseExpression();
        }

        // =========================================================
        //  МЕТОД ЕЙЛЕРА
        // =========================================================
        void EulerMethod(double x0, double y0, double h, double xEnd, System::Windows::Forms::TextBox^ output)
        {
            double x = x0;
            double y = y0;
            int i = 0;

            output->AppendText("Крок\t X\t\t Y\r\n");
            output->AppendText("--------------------------------------------------\r\n");
            output->AppendText(String::Format("{0}\t {1:F4}\t {2:F6}\r\n", i, x, y));

            while (x < xEnd - 1e-9)
            {
                y = y + h * Function(x, y);
                x = x + h;
                i++;
                output->AppendText(String::Format("{0}\t {1:F4}\t {2:F6}\r\n", i, x, y));
            }
        }

    private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            // Використовуємо SafeParseDouble для всіх числових полів
            double x0 = SafeParseDouble(txtX0->Text);
            double y0 = SafeParseDouble(txtY0->Text);
            double xEnd = SafeParseDouble(txtXEnd->Text);
            double h = SafeParseDouble(txtH->Text);

            if (h <= 0) {
                MessageBox::Show("Крок h повинен бути більшим за 0!");
                return;
            }
            if (xEnd <= x0) {
                MessageBox::Show("Кінець інтервалу (xEnd) повинен бути більшим за початок (x0)!");
                return;
            }

            txtResult->Clear();
            EulerMethod(x0, y0, h, xEnd, txtResult);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Помилка: " + ex->Message, "Помилка");
        }
    }

    private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
        txtFunc->Text = "";
        txtX0->Text = "";
        txtY0->Text = "";
        txtXEnd->Text = "";
        txtH->Text = "";
        txtResult->Clear();
    }
    };
}