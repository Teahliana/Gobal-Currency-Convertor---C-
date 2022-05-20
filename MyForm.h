#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbBaseCurrency;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbConvertCurrency;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtAmount;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblResult;

	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbBaseCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbConvertCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(238, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(463, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Currency Converter";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Base Currency :";
			// 
			// cmbBaseCurrency
			// 
			this->cmbBaseCurrency->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbBaseCurrency->FormattingEnabled = true;
			this->cmbBaseCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"USD", L"GBP", L"JPY", L"MXN", L"CNY", L"PHP",
					L"MAD", L"LKR", L"INR", L"RD"
			});
			this->cmbBaseCurrency->Location = System::Drawing::Point(398, 139);
			this->cmbBaseCurrency->Name = L"cmbBaseCurrency";
			this->cmbBaseCurrency->Size = System::Drawing::Size(421, 50);
			this->cmbBaseCurrency->TabIndex = 2;
			this->cmbBaseCurrency->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbBaseCurrency_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(74, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Convert To :";
			// 
			// cmbConvertCurrency
			// 
			this->cmbConvertCurrency->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbConvertCurrency->FormattingEnabled = true;
			this->cmbConvertCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"USD", L"GBP", L"JPY", L"MXN", L"CNY",
					L"PHP", L"MAD", L"LKR", L"INR", L"RD"
			});
			this->cmbConvertCurrency->Location = System::Drawing::Point(398, 244);
			this->cmbConvertCurrency->Name = L"cmbConvertCurrency";
			this->cmbConvertCurrency->Size = System::Drawing::Size(421, 50);
			this->cmbConvertCurrency->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(74, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 42);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Amount :";
			// 
			// txtAmount
			// 
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(398, 354);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(420, 49);
			this->txtAmount->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(398, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 65);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResult->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->lblResult->Location = System::Drawing::Point(260, 24);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(151, 51);
			this->lblResult->TabIndex = 8;
			this->lblResult->Text = L"Result";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->lblResult);
			this->panel1->Location = System::Drawing::Point(129, 595);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(668, 100);
			this->panel1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 740);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbConvertCurrency);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbBaseCurrency);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ baseCurrency = cmbBaseCurrency->Text;
		String^ convertedCurrency = cmbConvertCurrency->Text;
		String^ amountInString = txtAmount->Text;
		if (String::IsNullOrEmpty(baseCurrency)) {
			MessageBox::Show("Please Select a Base Currency..!");
		}
		else if (String::IsNullOrEmpty(convertedCurrency)) {
			MessageBox::Show("Please Select a Currency to Convert..!");
		}
		else if (String::IsNullOrEmpty(amountInString)) {
			MessageBox::Show("Please Enter an Amount to Convert...!");
		}
		else {
			double amount = System::Convert::ToDouble(amountInString);

			if (baseCurrency == convertedCurrency) {
				lblResult->Text = convertedCurrency + " " + amountInString;
			}
			else if (baseCurrency == "USD" && convertedCurrency == "GBP") {
				double value = amount * 0.78;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "JPY") {
				double value = amount * 128.56;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "MXN") {
				double value = amount * 20.22;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "CNY") {
				double value = amount * 6.5;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "PHP") {
				double value = amount * 52.34;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "MAD") {
				double value = amount * 9.84;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "LKR") {
				double value = amount * 335.91;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "INR") {
				double value = amount * 76.48;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "USD" && convertedCurrency == "RD") {
				double value = amount * 55.13;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "USD") {
				double value = amount * 1.28;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "JPY") {
				double value = amount * 165.03;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "MXN") {
				double value = amount * 26.00;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "CNY") {
				double value = amount * 8.35;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "PHP") {
				double value = amount * 67.20;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "MAD") {
				double value = amount * 12.63;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "LKR") {
				double value = amount * 431.29;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "INR") {
				double value = amount * 98.19;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "GBP" && convertedCurrency == "RD") {
				double value = amount * 70.78;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "USD") {
				double value = amount * 0.007777;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "GBP") {
				double value = amount * 0.0061;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "MXN") {
				double value = amount * 0.16;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "CNY") {
				double value = amount * 0.051;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "PHP") {
				double value = amount * 0.41;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "GBP") {
				double value = amount * 0.077;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "GBP") {
				double value = amount * 0.0061;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "LKR") {
				double value = amount * 2.61;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "INR") {
				double value = amount * 0.59;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "JPY" && convertedCurrency == "RD") {
				double value = amount * 0.43;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "USD") {
				double value = amount * 0.049;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "GBP") {
				double value = amount * 0.038;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "JPY") {
				double value = amount * 6.35;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "CNY") {
				double value = amount * 0.32;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "PHP") {
				double value = amount * 2.59;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "MAD") {
				double value = amount * 0.49;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "LKR") {
				double value = amount * 16.59;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "INR") {
				double value = amount * 3.78;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MXN" && convertedCurrency == "RD") {
				double value = amount * 2.72;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "USD") {
				double value = amount * 0.15;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "GBP") {
				double value = amount * 0.12;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "JPY") {
				double value = amount * 19.76;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "MXN") {
				double value = amount * 3.11;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "PHP") {
				double value = amount * 8.05;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "MAD") {
				double value = amount * 1.51;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "LKR") {
				double value = amount * 51.66;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "USD") {
				double value = amount * 11.76;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "CNY" && convertedCurrency == "RD") {
				double value = amount * 8.48;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "USD") {
				double value = amount * 0.019;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "GBP") {
				double value = amount * 0.015;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "JPY") {
				double value = amount * 2.45;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "MXN") {
				double value = amount * 0.39;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "CNY") {
				double value = amount * 0.12;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "MAD") {
				double value = amount * 0.19;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "LKR") {
				double value = amount * 6.42;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "INR") {
				double value = amount * 1.46;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "PHP" && convertedCurrency == "RD") {
				double value = amount * 1.05;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "USD") {
				double value = amount * 0.10;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "GBP") {
				double value = amount * 0.079;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "JPY") {
				double value = amount * 13.07;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "MXN") {
				double value = amount * 2.06;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "CNY") {
				double value = amount * 0.66;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "PHP") {
				double value = amount * 5.33;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "LKR") {
				double value = amount * 34.18;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "INR") {
				double value = amount * 7.78;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "MAD" && convertedCurrency == "RD") {
				double value = amount * 5.61;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "USD") {
				double value = amount * 0.0030;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "GBP") {
				double value = amount * 0.0023;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "JPY") {
				double value = amount * 0.38;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "MXN") {
				double value = amount * 0.060;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "CNY") {
				double value = amount * 0.019;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "PHP") {
				double value = amount * 0.16;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "MAD") {
				double value = amount * 0.029;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "INR") {
				double value = amount * 0.23;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "LKR" && convertedCurrency == "RD") {
				double value = amount * 0.16;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "USD") {
				double value = amount * 0.013;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "GBP") {
				double value = amount * 0.26;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "JPY") {
				double value = amount * 1.68;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "MXN") {
				double value = amount * 0.26;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "CNY") {
				double value = amount * 0.085;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "PHP") {
				double value = amount * 0.68;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "MAD") {
				double value = amount * 0.13;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "LKR") {
				double value = amount * 4.39;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "INR" && convertedCurrency == "RD") {
				double value = amount * 0.72;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "USD") {
				double value = amount * 0.018;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "GBP") {
				double value = amount * 0.014;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "JPY") {
				double value = amount * 2.33;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "MXN") {
				double value = amount * 0.37;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "CNY") {
				double value = amount * 0.12;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "PHP") {
				double value = amount * 0.95;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "MAD") {
				double value = amount * 0.18;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "LKR") {
				double value = amount * 6.09;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
			else if (baseCurrency == "RD" && convertedCurrency == "INR") {
				double value = amount * 1.39;
				lblResult->Text = convertedCurrency + " " + System::Convert::ToString(value);
			}
		}

	}
private: System::Void cmbBaseCurrency_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
