#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ decipBtn;
	private: System::Windows::Forms::Button^ encrypBtn;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ decripTxt;
	private: System::Windows::Forms::TextBox^ encrypTxt;
	private: System::Windows::Forms::TextBox^ Key2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ Key1;
	private: System::Windows::Forms::Label^ label3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->decipBtn = (gcnew System::Windows::Forms::Button());
			this->encrypBtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->decripTxt = (gcnew System::Windows::Forms::TextBox());
			this->encrypTxt = (gcnew System::Windows::Forms::TextBox());
			this->Key2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Key1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(469, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 31);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Ключ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 31);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Ключ";
			// 
			// decipBtn
			// 
			this->decipBtn->BackColor = System::Drawing::Color::Maroon;
			this->decipBtn->Location = System::Drawing::Point(563, 345);
			this->decipBtn->Name = L"decipBtn";
			this->decipBtn->Size = System::Drawing::Size(196, 52);
			this->decipBtn->TabIndex = 18;
			this->decipBtn->Text = L"decrypted";
			this->decipBtn->UseVisualStyleBackColor = false;
			// 
			// encrypBtn
			// 
			this->encrypBtn->BackColor = System::Drawing::Color::Red;
			this->encrypBtn->Location = System::Drawing::Point(141, 345);
			this->encrypBtn->Name = L"encrypBtn";
			this->encrypBtn->Size = System::Drawing::Size(211, 52);
			this->encrypBtn->TabIndex = 17;
			this->encrypBtn->Text = L"crypted";
			this->encrypBtn->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(701, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 37);
			this->button2->TabIndex = 16;
			this->button2->Text = L"export";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(277, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 37);
			this->button1->TabIndex = 15;
			this->button1->Text = L"import";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// decripTxt
			// 
			this->decripTxt->Location = System::Drawing::Point(473, 154);
			this->decripTxt->Multiline = true;
			this->decripTxt->Name = L"decripTxt";
			this->decripTxt->Size = System::Drawing::Size(353, 185);
			this->decripTxt->TabIndex = 14;
			this->decripTxt->Text = L"Дешифрованный текст";
			// 
			// encrypTxt
			// 
			this->encrypTxt->Location = System::Drawing::Point(62, 154);
			this->encrypTxt->Multiline = true;
			this->encrypTxt->Name = L"encrypTxt";
			this->encrypTxt->Size = System::Drawing::Size(356, 185);
			this->encrypTxt->TabIndex = 13;
			this->encrypTxt->Text = L"Напишите какой нибудь предложение . Потом нажмите на красную кнопку (crypted)";
			// 
			// Key2
			// 
			this->Key2->Location = System::Drawing::Point(563, 75);
			this->Key2->Multiline = true;
			this->Key2->Name = L"Key2";
			this->Key2->Size = System::Drawing::Size(177, 31);
			this->Key2->TabIndex = 11;
			this->Key2->Text = L"Тот самый ключ для дешифровки текста ложен быть индентичный ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 40);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem1 });
			this->оПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(186, 36);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// оПрограммеToolStripMenuItem1
			// 
			this->оПрограммеToolStripMenuItem1->Name = L"оПрограммеToolStripMenuItem1";
			this->оПрограммеToolStripMenuItem1->Size = System::Drawing::Size(243, 36);
			this->оПрограммеToolStripMenuItem1->Text = L"о программе";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(128, 36);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// Key1
			// 
			this->Key1->Location = System::Drawing::Point(168, 75);
			this->Key1->Multiline = true;
			this->Key1->Name = L"Key1";
			this->Key1->Size = System::Drawing::Size(140, 35);
			this->Key1->TabIndex = 12;
			this->Key1->Text = L"Надо написать ключ для расшифровки ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(186, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"для расшифровки файла ";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 399);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->decipBtn);
			this->Controls->Add(this->encrypBtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->decripTxt);
			this->Controls->Add(this->encrypTxt);
			this->Controls->Add(this->Key2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Key1);
			this->Name = L"HelpForm";
			this->Text = L"HelpForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
