
#pragma once

namespace GoogleForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
	
			submissions = gcnew array<String^, 2>(3, 5);
			submissions[0, 0] = "John Doe";        
			submissions[0, 1] = "john@example.com"; 
			submissions[0, 2] = "1234567890";     
			submissions[0, 3] = "https://github.com/johndoe"; 
			submissions[0, 4] = "00:30:15";         

			submissions[1, 0] = "Jane Smith";
			submissions[1, 1] = "jane@example.com";
			submissions[1, 2] = "9876543210";
			submissions[1, 3] = "https://github.com/janesmith";
			submissions[1, 4] = "00:25:45";

			submissions[2, 0] = "Mike Johnson";
			submissions[2, 1] = "mike@example.com";
			submissions[2, 2] = "5551234567";
			submissions[2, 3] = "https://github.com/mikejohnson";
			submissions[2, 4] = "00:40:00";

			currentSubmissionIndex = 0;
			UpdateTextBoxesWithSubmission(currentSubmissionIndex);
		}

	protected:

		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: array<String^, 2>^ submissions;
	private: int currentSubmissionIndex;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();

			this->textBox1->Location = System::Drawing::Point(146, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 22);
			this->textBox1->TabIndex = 0;
			
			this->textBox2->Location = System::Drawing::Point(146, 177);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(324, 22);
			this->textBox2->TabIndex = 1;
			
			this->textBox3->Location = System::Drawing::Point(146, 276);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(324, 22);
			this->textBox3->TabIndex = 2;
			this->textBox4->Location = System::Drawing::Point(146, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(324, 22);
			this->textBox4->TabIndex = 3;
		
			this->textBox5->Location = System::Drawing::Point(146, 222);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(324, 22);
			this->textBox5->TabIndex = 4;
			
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name";
			
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Email";
			
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Phone Num";
			
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"GitHub Link";
		
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Stopwatch Time";
		
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(32, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(438, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Khushal Kumawat, Slidely Task 2 - View Submissions";
			
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(15, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"PREVIOUS (CTRL + P)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
		
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(255, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 40);
			this->button2->TabIndex = 12;
			this->button2->Text = L"NEXT (CTRL + N)";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 425);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"View Submissions";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		currentSubmissionIndex--;
		if (currentSubmissionIndex < 0)
			currentSubmissionIndex = submissions->GetLength(0) - 1; 

		UpdateTextBoxesWithSubmission(currentSubmissionIndex);
	}

		  
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		currentSubmissionIndex++;
		if (currentSubmissionIndex >= submissions->GetLength(0))
			currentSubmissionIndex = 0; 

		UpdateTextBoxesWithSubmission(currentSubmissionIndex);
	}

	private:

		void UpdateTextBoxesWithSubmission(int index) {
			textBox1->Text = submissions[index, 1]; 
			textBox2->Text = submissions[index, 2]; 
			textBox3->Text = submissions[index, 4]; 
			textBox4->Text = submissions[index, 0]; 
			textBox5->Text = submissions[index, 3]; 
		}
	};
}
