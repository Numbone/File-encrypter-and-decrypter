#pragma once


namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Security::Cryptography;


	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			desObj = Rijndael::Create();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ chiperData;
		
		
		array<Byte>^ chiperbytes;
		array<Byte>^ plainbytes;
		array<Byte>^ plainbytes2;
		array<Byte>^ plainKey;

		SymmetricAlgorithm^ desObj;

	private: System::Windows::Forms::TextBox^ encrypTxt;
	private: System::Windows::Forms::TextBox^ decripTxt;
	private: System::Windows::Forms::Button^ encrypBtn;
	



	protected:

	protected:




	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ decipBtn;
	private: System::Windows::Forms::TextBox^ Key2;

	private: System::Windows::Forms::TextBox^ Key1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

	

	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Key1 = (gcnew System::Windows::Forms::TextBox());
			this->Key2 = (gcnew System::Windows::Forms::TextBox());
			this->encrypTxt = (gcnew System::Windows::Forms::TextBox());
			this->decripTxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->encrypBtn = (gcnew System::Windows::Forms::Button());
			this->decipBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Key1
			// 
			this->Key1->BackColor = System::Drawing::SystemColors::Window;
			this->Key1->Location = System::Drawing::Point(139, 73);
			this->Key1->Name = L"Key1";
			this->Key1->Size = System::Drawing::Size(100, 20);
			this->Key1->TabIndex = 0;
			// 
			// Key2
			// 
			this->Key2->Location = System::Drawing::Point(592, 73);
			this->Key2->Name = L"Key2";
			this->Key2->Size = System::Drawing::Size(100, 20);
			this->Key2->TabIndex = 1;
			// 
			// encrypTxt
			// 
			this->encrypTxt->Location = System::Drawing::Point(88, 184);
			this->encrypTxt->Name = L"encrypTxt";
			this->encrypTxt->Size = System::Drawing::Size(100, 20);
			this->encrypTxt->TabIndex = 2;
			// 
			// decripTxt
			// 
			this->decripTxt->Location = System::Drawing::Point(645, 184);
			this->decripTxt->Name = L"decripTxt";
			this->decripTxt->Size = System::Drawing::Size(100, 20);
			this->decripTxt->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(277, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"import";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(495, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"export";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// encrypBtn
			// 
			this->encrypBtn->Location = System::Drawing::Point(277, 343);
			this->encrypBtn->Name = L"encrypBtn";
			this->encrypBtn->Size = System::Drawing::Size(75, 23);
			this->encrypBtn->TabIndex = 6;
			this->encrypBtn->Text = L"crypted";
			this->encrypBtn->UseVisualStyleBackColor = true;
			this->encrypBtn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// decipBtn
			// 
			this->decipBtn->Location = System::Drawing::Point(506, 343);
			this->decipBtn->Name = L"decipBtn";
			this->decipBtn->Size = System::Drawing::Size(75, 23);
			this->decipBtn->TabIndex = 7;
			this->decipBtn->Text = L"decrypted";
			this->decipBtn->UseVisualStyleBackColor = true;
			this->decipBtn->Click += gcnew System::EventHandler(this, &MyForm::decipBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"clue";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(423, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"clue";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 403);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->decipBtn);
			this->Controls->Add(this->encrypBtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->decripTxt);
			this->Controls->Add(this->encrypTxt);
			this->Controls->Add(this->Key2);
			this->Controls->Add(this->Key1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ a1;
		int c;
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		chiperData = encrypTxt->Text;
		plainbytes = Encoding::Unicode->GetBytes(chiperData);
		plainKey = Encoding::Unicode->GetBytes("0123456789abcdef");
		desObj->Key = plainKey;

		desObj->Mode = CipherMode::CBC;
		desObj->Padding = PaddingMode::PKCS7;

		MemoryStream^ ms = gcnew  MemoryStream();
		CryptoStream^ cs = gcnew CryptoStream(ms, desObj->CreateEncryptor(), CryptoStreamMode::Write);

		cs->Write(plainbytes, 0, plainbytes->Length);
		cs->Close();

		chiperbytes = ms->ToArray();
		ms->Close();

		decripTxt->Text = Encoding::Unicode->GetString(chiperbytes);
		c = chiperData->Length;



	}
private: System::Void decipBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ dText = decripTxt->Text;
		if (Key2->Text == Key1->Text && Key2->Text!= "")
		{
			MemoryStream^ ms1 = gcnew MemoryStream(chiperbytes);
			CryptoStream^ cs1 = gcnew CryptoStream(ms1, desObj->CreateDecryptor(), CryptoStreamMode::Read);
			cs1->Read(chiperbytes, 0, chiperbytes->Length);
			plainbytes2 = ms1->ToArray();
			cs1->Close();
			ms1->Close();

			encrypTxt->Text = Encoding::Unicode -> GetString(plainbytes2);
			a1 = encrypTxt->Text->Substring(0, c);
			encrypTxt->Text = a1;
		}
		else
		{
			MessageBox::Show("Invalid clue", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (System::Security::Cryptography::CryptographicException^ ex)

	{
		MessageBox::Show(ex->Message, "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog ^ofd = gcnew OpenFileDialog();
	ofd->Filter = "Text Files|*.txt";

	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK);
	{
		encrypTxt->Text = System::IO::File::ReadAllText(ofd->FileName);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (decripTxt->Text == "")
	{
		MessageBox::Show("No data for save", "Attention", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (decripTxt->Text == "")
	{

		SaveFileDialog ^sfd = gcnew SaveFileDialog();
		sfd->Filter = "Text Files|*.txt";
		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System:File::WriteAllText(sfd->FileName, decripTxt->Text);
		}
	}

}
};
}
