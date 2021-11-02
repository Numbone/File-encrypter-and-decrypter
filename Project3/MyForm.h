#pragma once

#include "About.h"
#include "HelpForm.h"

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
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			desObj = Rijndael::Create();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

	

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem1;
	private: System::Windows::Forms::TextBox^ Key1;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Key2 = (gcnew System::Windows::Forms::TextBox());
			this->encrypTxt = (gcnew System::Windows::Forms::TextBox());
			this->decripTxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->encrypBtn = (gcnew System::Windows::Forms::Button());
			this->decipBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Key1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Key2
			// 
			this->Key2->Location = System::Drawing::Point(610, 73);
			this->Key2->Name = L"Key2";
			this->Key2->Size = System::Drawing::Size(130, 20);
			this->Key2->TabIndex = 1;
			// 
			// encrypTxt
			// 
			this->encrypTxt->Location = System::Drawing::Point(62, 152);
			this->encrypTxt->Multiline = true;
			this->encrypTxt->Name = L"encrypTxt";
			this->encrypTxt->Size = System::Drawing::Size(356, 185);
			this->encrypTxt->TabIndex = 2;
			this->encrypTxt->TextChanged += gcnew System::EventHandler(this, &MyForm::encrypTxt_TextChanged);
			// 
			// decripTxt
			// 
			this->decripTxt->Location = System::Drawing::Point(473, 152);
			this->decripTxt->Multiline = true;
			this->decripTxt->Name = L"decripTxt";
			this->decripTxt->Size = System::Drawing::Size(353, 185);
			this->decripTxt->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(277, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"import";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(701, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"export";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// encrypBtn
			// 
			this->encrypBtn->BackColor = System::Drawing::Color::Red;
			this->encrypBtn->Location = System::Drawing::Point(141, 343);
			this->encrypBtn->Name = L"encrypBtn";
			this->encrypBtn->Size = System::Drawing::Size(211, 52);
			this->encrypBtn->TabIndex = 6;
			this->encrypBtn->Text = L"crypted";
			this->encrypBtn->UseVisualStyleBackColor = false;
			this->encrypBtn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// decipBtn
			// 
			this->decipBtn->BackColor = System::Drawing::Color::Maroon;
			this->decipBtn->Location = System::Drawing::Point(563, 343);
			this->decipBtn->Name = L"decipBtn";
			this->decipBtn->Size = System::Drawing::Size(196, 52);
			this->decipBtn->TabIndex = 7;
			this->decipBtn->Text = L"decrypted";
			this->decipBtn->UseVisualStyleBackColor = false;
			this->decipBtn->Click += gcnew System::EventHandler(this, &MyForm::decipBtn_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Êëş÷";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(469, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 31);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Êëş÷";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îÏğîãğàììåToolStripMenuItem,
					this->ïîìîùüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(859, 40);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îÏğîãğàììåToolStripMenuItem1 });
			this->îÏğîãğàììåToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(186, 36);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem1
			// 
			this->îÏğîãğàììåToolStripMenuItem1->Name = L"îÏğîãğàììåToolStripMenuItem1";
			this->îÏğîãğàììåToolStripMenuItem1->Size = System::Drawing::Size(243, 36);
			this->îÏğîãğàììåToolStripMenuItem1->Text = L"î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem1_Click);
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(128, 36);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			this->ïîìîùüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîìîùüToolStripMenuItem_Click);
			// 
			// Key1
			// 
			this->Key1->Location = System::Drawing::Point(180, 78);
			this->Key1->Name = L"Key1";
			this->Key1->Size = System::Drawing::Size(130, 20);
			this->Key1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(859, 407);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->decipBtn);
			this->Controls->Add(this->encrypBtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->decripTxt);
			this->Controls->Add(this->encrypTxt);
			this->Controls->Add(this->Key1);
			this->Controls->Add(this->Key2);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
	else if (decripTxt->Text != "")
	{
		SaveFileDialog ^sfd = gcnew SaveFileDialog();
		sfd->Filter = "Text Files|*.txt";
		
		if(sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::File::WriteAllText(sfd->FileName, decripTxt->Text);
		}
	}

}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void encrypTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void îÏğîãğàììåToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	About^ f3 = gcnew About();
	f3->Show();
}
private: System::Void ïîìîùüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	HelpForm^ f2 = gcnew HelpForm();
	f2->Show();
}
};
}
