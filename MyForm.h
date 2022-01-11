#pragma once

namespace VP26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;


	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button16;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(55, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(126, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(197, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 71);
			this->button3->TabIndex = 0;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(55, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 71);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(126, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 71);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(197, 201);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 71);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(55, 270);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 71);
			this->button7->TabIndex = 0;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(126, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 71);
			this->button8->TabIndex = 0;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(197, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 71);
			this->button9->TabIndex = 0;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(268, 132);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 71);
			this->button10->TabIndex = 0;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(268, 201);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 71);
			this->button11->TabIndex = 0;
			this->button11->Text = L"*";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(268, 270);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 71);
			this->button12->TabIndex = 0;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(268, 63);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 71);
			this->button13->TabIndex = 0;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(126, 338);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 71);
			this->button14->TabIndex = 0;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(197, 337);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(141, 71);
			this->button15->TabIndex = 0;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(55, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 34);
			this->textBox1->TabIndex = 1;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(55, 338);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 71);
			this->button16->TabIndex = 0;
			this->button16->Text = L".";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 424);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int operation_type = 0, tochka = -1;
		double value = 0, first_value = 0;
		int st(int k) {
			int m = 1;
			for (int i = 0; i < k; i++) {
				m *= 10;
			}
			return m;
		}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 1) * (tochka == -1) + (tochka >= 1) * (value + 1 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 0) * (tochka == -1) + (tochka >= 1) * (value + 0 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 3) * (tochka == -1) + (tochka >= 1) * (value + 3 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 6) * (tochka == -1) + (tochka >= 1) * (value + 6 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 5) * (tochka == -1) + (tochka >= 1) * (value + 5 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 4) * (tochka == -1) + (tochka >= 1) * (value + 4 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 7) * (tochka == -1) + (tochka >= 1) * (value + 7 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 8) * (tochka == -1) + (tochka >= 1) * (value + 8 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 9) * (tochka == -1) + (tochka >= 1) * (value + 9 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	value = (value * 10 + 2) * (tochka == -1) + (tochka >= 1) * (value + 2 / 1.0 / st(tochka));
	tochka += (tochka >= 1);
	textBox1->Text = Convert::ToString(value);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	tochka = 1;
	textBox1->Text = textBox1->Text + ",";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	first_value = value;
	value = 0;
	tochka = -1;
	operation_type = 1;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	first_value = value;
	value = 0;
	tochka = -1;
	operation_type = 2;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	first_value = value;
	value = 0;
	tochka = -1;
	operation_type = 3;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	first_value = value;
	value = 0;
	tochka = -1;
	operation_type = 4;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (operation_type)
	{
	default:
		break;
	case 1:
		value = first_value / value;
		operation_type = 0;
		tochka = -1;
		textBox1->Text = Convert::ToString(value);
		break;
	case 2:
		value = first_value * value;
		operation_type = 0;
		tochka = -1;
		textBox1->Text = Convert::ToString(value);
		break;
	case 3:
		value = first_value + value;
		operation_type = 0;
		tochka = -1;
		textBox1->Text = Convert::ToString(value);
		break;
	case 4:
		value = first_value - value;
		operation_type = 0;
		tochka = -1;
		textBox1->Text = Convert::ToString(value);
		break;
	}
}
};
}
