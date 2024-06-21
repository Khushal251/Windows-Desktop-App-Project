#include "MyForm1.h"
#include "MyForm2.h"

namespace GoogleForm {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
         
            this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MyForm_KeyDown);

   
            button1->Click += gcnew EventHandler(this, &MyForm::button1_Click);

            button2->Click += gcnew EventHandler(this, &MyForm::button2_Click);
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label2;
    private: System::ComponentModel::Container^ components; 

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               
               this->button1->BackColor = System::Drawing::SystemColors::Info;
               this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
               this->button1->Location = System::Drawing::Point(12, 61);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(408, 38);
               this->button1->TabIndex = 0;
               this->button1->Text = L"VIEW SUBMISSIONS (Ctrl + V)";
               this->button1->UseVisualStyleBackColor = false;
              
               this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
               this->button2->Location = System::Drawing::Point(12, 112);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(408, 38);
               this->button2->TabIndex = 1;
               this->button2->Text = L"CREATE NEW SUBMISSIONS (Ctrl + N)";
               this->button2->UseVisualStyleBackColor = false;
                
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(23, 21);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(388, 20);
               this->label2->TabIndex = 3;
               this->label2->Text = L"Khushal Kumawat, Slidely Task 2, Slidey Form App";
          
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::Window;
               this->ClientSize = System::Drawing::Size(432, 175);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->ResumeLayout(false);
               this->PerformLayout();


               components = gcnew System::ComponentModel::Container();
           }
#pragma endregion

    private:
        System::Void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e)
        {

            if (e->Control && e->KeyCode == Keys::V)
            {
                button1->PerformClick();
            }
            else if (e->Control && e->KeyCode == Keys::N)
            {
                button2->PerformClick();
            }
        }


        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            MyForm1^ viewSubmissionsForm = gcnew MyForm1();
            viewSubmissionsForm->Show();
        }

        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
        {
            MyForm2^ createSubmissionForm = gcnew MyForm2();
            createSubmissionForm->Show();
        }
    };
}
