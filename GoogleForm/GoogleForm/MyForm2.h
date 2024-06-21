#pragma once

namespace GoogleForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();

			isStopwatchRunning = false;
			stopwatchTime = TimeSpan(0);
		}

	protected:

		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::TextBox^ emailTextBox;
	private: System::Windows::Forms::TextBox^ phoneTextBox;
	private: System::Windows::Forms::TextBox^ githubTextBox;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ pauseButton;
	private: System::Windows::Forms::Button^ resumeButton;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Label^ stopwatchLabel;
	private: System::Windows::Forms::Timer^ stopwatchTimer;
	private: bool isStopwatchRunning;
	private: TimeSpan stopwatchTime;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->phoneTextBox = (gcnew System::Windows::Forms::TextBox());
			this->githubTextBox = (gcnew System::Windows::Forms::TextBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->pauseButton = (gcnew System::Windows::Forms::Button());
			this->resumeButton = (gcnew System::Windows::Forms::Button());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->stopwatchLabel = (gcnew System::Windows::Forms::Label());
			this->stopwatchTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
	
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Khushal Kumawat, Slidely Task 2, Create Submission";

			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
	
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);

			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Phone Num";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);

			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Github Link";

			this->nameTextBox->Location = System::Drawing::Point(152, 77);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(274, 22);
			this->nameTextBox->TabIndex = 5;
 
			this->emailTextBox->Location = System::Drawing::Point(152, 117);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(274, 22);
			this->emailTextBox->TabIndex = 6;
	
			this->phoneTextBox->Location = System::Drawing::Point(152, 157);
			this->phoneTextBox->Name = L"phoneTextBox";
			this->phoneTextBox->Size = System::Drawing::Size(274, 22);
			this->phoneTextBox->TabIndex = 7;
		
			this->githubTextBox->Location = System::Drawing::Point(152, 197);
			this->githubTextBox->Name = L"githubTextBox";
			this->githubTextBox->Size = System::Drawing::Size(274, 22);
			this->githubTextBox->TabIndex = 8;
		
			this->startButton->BackColor = System::Drawing::SystemColors::Info;
			this->startButton->Location = System::Drawing::Point(31, 259);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(90, 23);
			this->startButton->TabIndex = 9;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm2::startButton_Click);
			
			this->pauseButton->BackColor = System::Drawing::SystemColors::Info;
			this->pauseButton->Location = System::Drawing::Point(127, 259);
			this->pauseButton->Name = L"pauseButton";
			this->pauseButton->Size = System::Drawing::Size(90, 23);
			this->pauseButton->TabIndex = 10;
			this->pauseButton->Text = L"Pause";
			this->pauseButton->UseVisualStyleBackColor = false;
			this->pauseButton->Click += gcnew System::EventHandler(this, &MyForm2::pauseButton_Click);
			
			this->resumeButton->BackColor = System::Drawing::SystemColors::Info;
			this->resumeButton->Location = System::Drawing::Point(223, 259);
			this->resumeButton->Name = L"resumeButton";
			this->resumeButton->Size = System::Drawing::Size(90, 23);
			this->resumeButton->TabIndex = 11;
			this->resumeButton->Text = L"Resume";
			this->resumeButton->UseVisualStyleBackColor = false;
			this->resumeButton->Click += gcnew System::EventHandler(this, &MyForm2::resumeButton_Click);
			
			this->submitButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->submitButton->Location = System::Drawing::Point(99, 307);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(263, 23);
			this->submitButton->TabIndex = 12;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm2::submitButton_Click);
			
			this->stopwatchLabel->AutoSize = true;
			this->stopwatchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stopwatchLabel->Location = System::Drawing::Point(326, 259);
			this->stopwatchLabel->Name = L"stopwatchLabel";
			this->stopwatchLabel->Size = System::Drawing::Size(66, 20);
			this->stopwatchLabel->TabIndex = 13;
			this->stopwatchLabel->Text = L"00:00:00";
			
			this->stopwatchTimer->Interval = 1000;
			this->stopwatchTimer->Tick += gcnew System::EventHandler(this, &MyForm2::stopwatchTimer_Tick);
			 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 357);
			this->Controls->Add(this->stopwatchLabel);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->resumeButton);
			this->Controls->Add(this->pauseButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->githubTextBox);
			this->Controls->Add(this->phoneTextBox);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		isStopwatchRunning = true;
		stopwatchTimer->Start();
	}

	private: System::Void pauseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		isStopwatchRunning = false;
		stopwatchTimer->Stop();
	}

	private: System::Void resumeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		isStopwatchRunning = true;
		stopwatchTimer->Start();
	}

	private: System::Void stopwatchTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (isStopwatchRunning) {
			stopwatchTime = stopwatchTime.Add(TimeSpan(0, 0, 1));
			stopwatchLabel->Text = stopwatchTime.ToString("hh\\:mm\\:ss");
		}
	}

	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = nameTextBox->Text;
		String^ email = emailTextBox->Text;
		String^ phone = phoneTextBox->Text;
		String^ githubLink = githubTextBox->Text;
		TimeSpan^ elapsed = stopwatchTime;


		MessageBox::Show("Submission Successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}