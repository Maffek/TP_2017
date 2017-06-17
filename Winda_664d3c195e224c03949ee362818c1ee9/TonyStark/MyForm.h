#pragma once
#include <cstdlib>;
#include <Windows.h>;
 
//HELLO WOOOORRRLLLDDDD
namespace TonyStark {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Timer^  timer2;



	private: System::Windows::Forms::Button^  pietro1;

	private: System::Windows::Forms::Button^  PRZYCISK4;
	private: System::Windows::Forms::Button^  PIETRO3;
	private: System::Windows::Forms::Button^  BUTTON2;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pietro1 = (gcnew System::Windows::Forms::Button());
			this->PRZYCISK4 = (gcnew System::Windows::Forms::Button());
			this->PIETRO3 = (gcnew System::Windows::Forms::Button());
			this->BUTTON2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(323, 398);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 140);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(655, 298);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 100);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 15;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// pietro1
			// 
			this->pietro1->Location = System::Drawing::Point(31, 456);
			this->pietro1->Name = L"pietro1";
			this->pietro1->Size = System::Drawing::Size(35, 32);
			this->pietro1->TabIndex = 5;
			this->pietro1->Text = L"1";
			this->pietro1->UseVisualStyleBackColor = true;
			this->pietro1->Click += gcnew System::EventHandler(this, &MyForm::pietro1_Click);
			// 
			// PRZYCISK4
			// 
			this->PRZYCISK4->Location = System::Drawing::Point(717, 32);
			this->PRZYCISK4->Name = L"PRZYCISK4";
			this->PRZYCISK4->Size = System::Drawing::Size(39, 36);
			this->PRZYCISK4->TabIndex = 7;
			this->PRZYCISK4->Text = L"4";
			this->PRZYCISK4->UseVisualStyleBackColor = true;
			this->PRZYCISK4->Click += gcnew System::EventHandler(this, &MyForm::PRZYCISK4_Click);
			// 
			// PIETRO3
			// 
			this->PIETRO3->Location = System::Drawing::Point(31, 203);
			this->PIETRO3->Name = L"PIETRO3";
			this->PIETRO3->Size = System::Drawing::Size(37, 35);
			this->PIETRO3->TabIndex = 8;
			this->PIETRO3->Text = L"3";
			this->PIETRO3->UseVisualStyleBackColor = true;
			this->PIETRO3->Click += gcnew System::EventHandler(this, &MyForm::PIETRO3_Click_1);
			// 
			// BUTTON2
			// 
			this->BUTTON2->Location = System::Drawing::Point(741, 311);
			this->BUTTON2->Name = L"BUTTON2";
			this->BUTTON2->Size = System::Drawing::Size(36, 33);
			this->BUTTON2->TabIndex = 9;
			this->BUTTON2->Text = L"2";
			this->BUTTON2->UseVisualStyleBackColor = true;
			this->BUTTON2->Click += gcnew System::EventHandler(this, &MyForm::BUTTON2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 550);
			this->Controls->Add(this->BUTTON2);
			this->Controls->Add(this->PIETRO3);
			this->Controls->Add(this->PRZYCISK4);
			this->Controls->Add(this->pietro1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: int timer = 0;
	public: int gotowy = 0;
	public:	int idzie = 0;
	public: int where = 400;
	public: int kaunt = 0;
	public: int wysokosc = 0;


	int *array = new int[15];
	array[0] = 400;
	

	private: System::Void kolejkuj() {
		for (int i = 0; i < 15; i++) {
			if (array[i] == NULL) {
				array[i] = wysokosc;
				i = 20;
			}
		}
	}

	private: System::Void errrrreeeeyyy() {
		for (int i = 0; i < 14; i++) {
			array[i] = array[i + 1];
		}
	}

	private: System::Void pietro1_Click(System::Object^  sender, System::EventArgs^  e) {
		//where = 400;
		wysokosc = 400;
		kolejkuj();
	}
	private: System::Void BUTTON2_Click(System::Object^  sender, System::EventArgs^  e) {
		//where = 270;
		wysokosc = 270;
		kolejkuj();
	}
	private: System::Void PIETRO3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//where = 140;
		wysokosc = 140;
		kolejkuj();
	}
	private: System::Void PRZYCISK4_Click(System::Object^  sender, System::EventArgs^  e) {
		//where = 10;
		wysokosc = 10;
		kolejkuj();
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (gotowy) {
			if (pictureBox1->Top > array[0]) {
				this->pictureBox1->Top -= 2;
			}
			if (pictureBox1->Top < array[0]) {
				this->pictureBox1->Top += 2;
			}
			else if (pictureBox1->Top == wysokosc) {
				errrrreeeeyyy();
				//TUTAJ LUDZIKI WCHODZO
			}
		}
	}

	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (idzie <= 38) {
			this->pictureBox2->Left -= 4;
			idzie += 1;
		}
		else {
			gotowy = 1;
		}
	}
};
}
