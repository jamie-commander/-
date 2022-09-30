#pragma once
#include <iostream>
#include "math.h"
#include "time.h"
#include "stdio.h"
#include <stdlib.h>
namespace hw6 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//BitmapData
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label8;
		   //定義於 Windows Form Designer generated code 之前
	private:
			//定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
			Bitmap^ ori_image;
			Bitmap^ ori_image2;
			Bitmap^ synthesis_image;
			Bitmap^ output_image;
			Bitmap^ screenshot;
			int select_start_x = 0, select_start_y = 0, select_end_x = 0, select_end_y = 0;
			bool screenshot_control = false;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::NumericUpDown^ numericUpDown16;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::NumericUpDown^ numericUpDown17;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::NumericUpDown^ numericUpDown18;
private: System::Windows::Forms::NumericUpDown^ numericUpDown19;
private: System::Windows::Forms::NumericUpDown^ numericUpDown20;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::CheckBox^ checkBox1;
	   float synthesis_scale = 0.5;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OpenP1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::OpenP1_btn);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"synthesis";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Start1_btn);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(69, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(171, 157);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(303, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(171, 157);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(69, 238);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(780, 720);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox3_MouseDown);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox3_MouseMove);
			this->pictureBox3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox3_MouseUp);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(246, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 43);
			this->button3->TabIndex = 5;
			this->button3->Text = L"OpenP2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::OpenP2_btn);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(494, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"first-order hold";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::first_order_hold);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(494, 85);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 43);
			this->button5->TabIndex = 7;
			this->button5->Text = L"bilinear interpolation";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::bilinear_interpolation);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(857, 238);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(780, 720);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(575, 55);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(38, 22);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(808, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 12);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Start_X:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(857, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 22);
			this->textBox1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(808, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 12);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Start_Y:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(857, 31);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 22);
			this->textBox2->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(808, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 15;
			this->label3->Text = L"End_X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(808, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 16;
			this->label4->Text = L"End_Y:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(857, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 22);
			this->textBox3->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(857, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 22);
			this->textBox4->TabIndex = 18;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(629, 23);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(171, 146);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->LargeChange = 1;
			this->hScrollBar1->Location = System::Drawing::Point(132, 179);
			this->hScrollBar1->Maximum = 10;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(280, 23);
			this->hScrollBar1->TabIndex = 6;
			this->hScrollBar1->Value = 5;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar1_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(257, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"0.5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(76, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(424, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"請先用滑鼠選取圖片操作範圍或點選全部選取選取整張圖片";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(497, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"縮放倍數";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(494, 135);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 34);
			this->button6->TabIndex = 22;
			this->button6->Text = L"ZoomOut_OFF";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::ZoomOut);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(927, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 40);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Global HE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Global_HE);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(927, 107);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 40);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Local HE";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Local_HE);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(972, 64);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(43, 22);
			this->numericUpDown2->TabIndex = 25;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(935, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 12);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Local";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(631, 198);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 34);
			this->button9->TabIndex = 27;
			this->button9->Text = L"AutoSize模式";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 238);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 43);
			this->button10->TabIndex = 28;
			this->button10->Text = L"gray";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::gray_btn);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(246, 106);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(51, 35);
			this->button11->TabIndex = 29;
			this->button11->Text = L"PushP2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::PushP2);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(13, 107);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 34);
			this->button12->TabIndex = 30;
			this->button12->Text = L"PushP1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::pushP1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(5, 304);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 43);
			this->button13->TabIndex = 31;
			this->button13->Text = L"Gaussian noise";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Gaussian_noise);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(5, 363);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(58, 22);
			this->numericUpDown3->TabIndex = 32;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(7, 403);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(56, 22);
			this->numericUpDown4->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 12);
			this->label9->TabIndex = 34;
			this->label9->Text = L"mean";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 388);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 12);
			this->label10->TabIndex = 35;
			this->label10->Text = L"standard dev";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(536, 198);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(89, 34);
			this->button14->TabIndex = 36;
			this->button14->Text = L"全部選取";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::select_all);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(726, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(89, 34);
			this->button15->TabIndex = 37;
			this->button15->Text = L"取代原圖";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::replace);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(627, 6);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 12);
			this->label11->TabIndex = 38;
			this->label11->Text = L"目前擷取操作圖片";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(5, 442);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(58, 43);
			this->button16->TabIndex = 39;
			this->button16->Text = L"Uniform noise";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Uniform_noise);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(7, 503);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(58, 22);
			this->numericUpDown5->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 488);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 12);
			this->label12->TabIndex = 41;
			this->label12->Text = L"max";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 532);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 12);
			this->label13->TabIndex = 42;
			this->label13->Text = L"min";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(7, 548);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(56, 22);
			this->numericUpDown6->TabIndex = 43;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(5, 587);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 43);
			this->button17->TabIndex = 44;
			this->button17->Text = L"Impulse noise";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Impulse_noise);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 674);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 12);
			this->label14->TabIndex = 45;
			this->label14->Text = L"salt";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 633);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 12);
			this->label15->TabIndex = 46;
			this->label15->Text = L"peper";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(5, 648);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(55, 22);
			this->numericUpDown7->TabIndex = 47;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(5, 689);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(55, 22);
			this->numericUpDown8->TabIndex = 48;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(1022, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 40);
			this->button18->TabIndex = 49;
			this->button18->Text = L"LowPass Filter";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::LowPass_filter);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(1022, 60);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(75, 22);
			this->numericUpDown9->TabIndex = 50;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(1103, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 40);
			this->button19->TabIndex = 51;
			this->button19->Text = L"Median filter";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Median_filter);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(1103, 60);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(75, 22);
			this->numericUpDown10->TabIndex = 52;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1020, 45);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 12);
			this->label16->TabIndex = 53;
			this->label16->Text = L"num";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1101, 46);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 12);
			this->label17->TabIndex = 54;
			this->label17->Text = L"num";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(1022, 94);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 40);
			this->button20->TabIndex = 55;
			this->button20->Text = L"Alpha trimmed";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Alpha_trimmed);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(1022, 153);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(75, 22);
			this->numericUpDown11->TabIndex = 56;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1022, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(26, 12);
			this->label18->TabIndex = 57;
			this->label18->Text = L"num";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(1022, 193);
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(75, 22);
			this->numericUpDown12->TabIndex = 58;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1022, 178);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(12, 12);
			this->label19->TabIndex = 59;
			this->label19->Text = L"T";
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(1103, 94);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 40);
			this->button21->TabIndex = 60;
			this->button21->Text = L"HighPass filter";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::HighPass_filter);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1103, 137);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(26, 12);
			this->label20->TabIndex = 61;
			this->label20->Text = L"num";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(1103, 153);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(75, 22);
			this->numericUpDown13->TabIndex = 62;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(1184, 5);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 37);
			this->button22->TabIndex = 63;
			this->button22->Text = L"HighBoost filter";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::HighBoost_filter);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1182, 48);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 12);
			this->label21->TabIndex = 64;
			this->label21->Text = L"A";
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(1184, 62);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(75, 22);
			this->numericUpDown14->TabIndex = 65;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1182, 87);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(26, 12);
			this->label22->TabIndex = 66;
			this->label22->Text = L"num";
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(1184, 102);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(75, 22);
			this->numericUpDown15->TabIndex = 67;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(1270, 20);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 38);
			this->button23->TabIndex = 68;
			this->button23->Text = L"horizontal vertical";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Prewitt_operator_horizontal_vertical);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1307, 6);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(79, 12);
			this->label23->TabIndex = 69;
			this->label23->Text = L"Prewitt operator";
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(1351, 21);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 38);
			this->button24->TabIndex = 70;
			this->button24->Text = L"diagonal";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Prewitt_operator_diagonal);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(1351, 75);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 38);
			this->button25->TabIndex = 73;
			this->button25->Text = L"diagonal";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Sobel_operator_diagonal);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1307, 60);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(73, 12);
			this->label24->TabIndex = 72;
			this->label24->Text = L"Sobel operator";
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(1270, 74);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 38);
			this->button26->TabIndex = 71;
			this->button26->Text = L"horizontal vertical";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Sobel_operator_horizontal_vertical);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(1351, 140);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 38);
			this->button27->TabIndex = 76;
			this->button27->Text = L"diagonal";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Laplacian_filter_diagonal);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(1307, 120);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(75, 12);
			this->label25->TabIndex = 75;
			this->label25->Text = L"Laplacian filter";
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(1270, 139);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 38);
			this->button28->TabIndex = 74;
			this->button28->Text = L"horizontal vertical";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Laplacian_filter_horizontal_vertical);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(1452, 5);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 39);
			this->button29->TabIndex = 77;
			this->button29->Text = L"DCT";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::DCT);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(1452, 64);
			this->numericUpDown16->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(75, 22);
			this->numericUpDown16->TabIndex = 78;
			this->numericUpDown16->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(1452, 49);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(26, 12);
			this->label26->TabIndex = 79;
			this->label26->Text = L"num";
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(1452, 96);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 45);
			this->button30->TabIndex = 80;
			this->button30->Text = L"General Wavelet form";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::General_Wavelet_form);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(1450, 144);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(24, 12);
			this->label27->TabIndex = 81;
			this->label27->Text = L"pass";
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(1452, 158);
			this->numericUpDown17->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(75, 22);
			this->numericUpDown17->TabIndex = 82;
			this->numericUpDown17->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(821, 198);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(89, 34);
			this->button31->TabIndex = 83;
			this->button31->Text = L"儲存圖片";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::Save_image);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(1550, 126);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 23);
			this->button32->TabIndex = 84;
			this->button32->Text = L"Dilation";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Morphological_Dilation);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(1550, 151);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 85;
			this->button33->Text = L"Erosion";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::Morphological_Erosion);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(1550, 179);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 23);
			this->button34->TabIndex = 86;
			this->button34->Text = L" Opening";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::Morphological_Opening);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(1550, 205);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 23);
			this->button35->TabIndex = 87;
			this->button35->Text = L"Closing";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::Morphological_Closing);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(1551, 5);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(74, 12);
			this->label28->TabIndex = 88;
			this->label28->Text = L"Morphological";
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(1452, 192);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 38);
			this->button36->TabIndex = 89;
			this->button36->Text = L"Binarize Exchange";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::Binarize_Exchange);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(1589, 24);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown18->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(36, 22);
			this->numericUpDown18->TabIndex = 90;
			this->numericUpDown18->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(1589, 55);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown19->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(36, 22);
			this->numericUpDown19->TabIndex = 91;
			this->numericUpDown19->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(1589, 83);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown20->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(36, 22);
			this->numericUpDown20->TabIndex = 92;
			this->numericUpDown20->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1554, 26);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(29, 12);
			this->label29->TabIndex = 93;
			this->label29->Text = L"半高";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(1554, 60);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(29, 12);
			this->label30->TabIndex = 94;
			this->label30->Text = L"半寬";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(1554, 88);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(29, 12);
			this->label31->TabIndex = 95;
			this->label31->Text = L"半徑";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(1556, 107);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 16);
			this->checkBox1->TabIndex = 96;
			this->checkBox1->Text = L"圓形";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1646, 961);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->numericUpDown20);
			this->Controls->Add(this->numericUpDown19);
			this->Controls->Add(this->numericUpDown18);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->numericUpDown17);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->numericUpDown16);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->numericUpDown15);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->numericUpDown14);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void roomResize() {
			if (synthesis_image == nullptr) {
				//return nothing because function System::Void 回傳Void
				return;
			}
			if (synthesis_image->Width > synthesis_image->Height) {
				float prp = synthesis_image->Width / 600;
				pictureBox3->Width = synthesis_image->Width / prp;
				pictureBox3->Height = synthesis_image->Height / prp;
			}
			else {
				float prp = synthesis_image->Height / 600;
				pictureBox3->Width = synthesis_image->Width / prp;
				pictureBox3->Height = synthesis_image->Height / prp;
			}
		}
		private: void screen() {
			Red_frame(synthesis_image, pictureBox3);
			screenshot_control = false;
			int S_Width = select_end_x - select_start_x;
			int S_High = select_end_y - select_start_y;
			if (S_Width <= 0 || S_High <= 0) {
				return;
			}
			/*screenshot*/
			screenshot = gcnew Bitmap(S_Width, S_High, synthesis_image->PixelFormat);
			BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, S_Width, S_High), ImageLockMode::ReadWrite, screenshot->PixelFormat);
			int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
			Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
			/*synthesis_image*/
			BitmapData^ bd_synthesis_image = synthesis_image->LockBits(Rectangle(0, 0, synthesis_image->Width, synthesis_image->Height), ImageLockMode::ReadWrite, synthesis_image->PixelFormat);
			int synthesis_image_byteskip = bd_synthesis_image->Stride - bd_synthesis_image->Width * 3 + select_start_x * 3 + (bd_synthesis_image->Width - select_end_x) * 3;
			Byte* synthesis_image_ptr = (Byte*)((void*)bd_synthesis_image->Scan0) + select_start_y * bd_synthesis_image->Stride + select_start_x * 3;
			/*擷取*/
			for (int y = 0; y < S_High; y++) {
				for (int x = 0; x < S_Width; x++) {
					int B = (int)synthesis_image_ptr[0];
					int G = (int)synthesis_image_ptr[1];
					int R = (int)synthesis_image_ptr[2];

					screenshot_ptr[0] = B;
					screenshot_ptr[1] = G;
					screenshot_ptr[2] = R;

					//跳到下一像素
					screenshot_ptr += 3;
					synthesis_image_ptr += 3;
				}
				//捨棄非必要資訊
				screenshot_ptr += screenshot_byteskip;
				synthesis_image_ptr += synthesis_image_byteskip;
			}
			screenshot->UnlockBits(bd_screenshot);
			synthesis_image->UnlockBits(bd_synthesis_image);
			//顯示output於pictureBox1
			//pictureBox4->Image = screenshot;
			pictureBox5->Image = screenshot;
		}
		private: void Red_frame(Bitmap^ im, PictureBox^ p) {
		Bitmap^ output = gcnew Bitmap(im->Width, im->Height, im->PixelFormat);

		BitmapData^ bd_ori = im->LockBits(Rectangle(0, 0, im->Width, im->Height), ImageLockMode::ReadWrite, im->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
		int output_byteskip = bd_output->Stride - bd_output->Width * 3;
		int line_width = 3;
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);
		for (int y = 0; y < bd_ori->Height; y++) {
			for (int x = 0; x < bd_ori->Width; x++) {
				int B = (int)ori_ptr[0];
				int G = (int)ori_ptr[1];
				int R = (int)ori_ptr[2];

				output_ptr[0] = B;
				output_ptr[1] = G;
				output_ptr[2] = R;
				if (x > select_start_x && x < select_end_x && y > select_start_y && y < select_end_y) {
					if (!(x > select_start_x + line_width && x < select_end_x - line_width && y > select_start_y + line_width && y < select_end_y - line_width)) {
						output_ptr[0] = 0;
						output_ptr[1] = 0;
						output_ptr[2] = 255;
					}
				}
				//跳到下一像素
				ori_ptr += 3;
				output_ptr += 3;

			}
			//捨棄非必要資訊
			ori_ptr += ori_byteskip;
			output_ptr += output_byteskip;
		}
		im->UnlockBits(bd_ori);
		output->UnlockBits(bd_output);
		p->Image = output;
	}
	private: System::Void OpenP1_btn(System::Object^  sender, System::EventArgs^  e) {
		//開啟檔案對話窗 記得「^」
		OpenFileDialog ^ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		//name|format
		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;
		//對話窗回應OK，或是檔名不為空值，表示有資料了
		//開始讀取影像資訊
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			//讀取影像
			ori_image = gcnew Bitmap(ofd->FileName);
			//顯示ori_image於pictureBox1
			pictureBox1->Image = ori_image;
		}
	}
	private: System::Void Start1_btn(System::Object^  sender, System::EventArgs^  e) {
		//若沒開啟影像，則離開this process
		if (ori_image == nullptr || ori_image2 == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		if (ori_image->Width != ori_image2->Width || ori_image->Height != ori_image2->Height) {
			MessageBox::Show("請載入兩張一樣大的圖片");
			return;
		}
		Bitmap^ synthesis = gcnew Bitmap(ori_image->Width, ori_image->Height, ori_image->PixelFormat);
		//Bitmap ^output = gcnew Bitmap(ori_image->Width, ori_image->Height, ori_image->PixelFormat);
		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData ^bd_ori = ori_image->LockBits(Rectangle(0, 0, ori_image->Width, ori_image->Height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData ^bd_ori2 = ori_image2->LockBits(Rectangle(0, 0, ori_image2->Width, ori_image2->Height), ImageLockMode::ReadWrite, ori_image2->PixelFormat);
		BitmapData ^bd_synthesis = synthesis->LockBits(Rectangle(0, 0, synthesis->Width, synthesis->Height), ImageLockMode::ReadWrite, synthesis->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
		int ori2_byteskip = bd_ori2->Stride - bd_ori2->Width * 3;
		int synthesis_byteskip = bd_synthesis->Stride - bd_synthesis->Width * 3;

		//設定指標再開始的位置
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* ori2_ptr = (Byte*)((void*)bd_ori2->Scan0);
		Byte* synthesis_ptr = (Byte*)((void*)bd_synthesis->Scan0);
		for (int y = 0; y < bd_ori->Height; y++) {
			for (int x = 0; x < bd_ori->Width; x++) {
				int B = (int)ori_ptr[0];
				int G = (int)ori_ptr[1];
				int R = (int)ori_ptr[2];
				int B2 = (int)ori2_ptr[0];
				int G2 = (int)ori2_ptr[1];
				int R2 = (int)ori2_ptr[2];

				//int gray1 = (R + G + B) / 3;
				//int gray2 = (R2 + G2 + B2) / 3;
				//int gray_out = (gray1* synthesis_scale + gray2*(1- synthesis_scale));

				//將處理完的結果放回output
				synthesis_ptr[0] = B * synthesis_scale + B2 * (1 - synthesis_scale);
				synthesis_ptr[1] = G * synthesis_scale + G2 * (1 - synthesis_scale);
				synthesis_ptr[2] = R * synthesis_scale + R2 * (1 - synthesis_scale);

				//跳到下一像素
				ori_ptr += 3;
				ori2_ptr += 3;
				synthesis_ptr += 3;
			}
			//捨棄非必要資訊
			ori_ptr += ori_byteskip;
			ori2_ptr += ori2_byteskip;
			synthesis_ptr += synthesis_byteskip;
		}

		//Unlock Memory 以便顯示
		ori_image->UnlockBits(bd_ori);
		ori_image2->UnlockBits(bd_ori2);
		synthesis->UnlockBits(bd_synthesis);
		//顯示output於pictureBox1
		synthesis_image = synthesis;
		roomResize();
		pictureBox3->Image = synthesis;
	}
	private: System::Void OpenP2_btn(System::Object^  sender, System::EventArgs^  e) {
		//開啟檔案對話窗 記得「^」
		OpenFileDialog ^ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		//name|format
		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;
		//對話窗回應OK，或是檔名不為空值，表示有資料了
		//開始讀取影像資訊
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			//讀取影像
			ori_image2 = gcnew Bitmap(ofd->FileName);
			//顯示ori_image於pictureBox1
			pictureBox2->Image = ori_image2;
		}
	}
	private: System::Void first_order_hold(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		//若沒開啟影像，則離開this process
		float k = (float)numericUpDown1->Value;
		if (button6->Text == "ZoomOut_ON") {
			k = 1 / k;
		}
		int S_Width = select_end_x - select_start_x;
		int S_High = select_end_y - select_start_y;
		if (S_Width <= 0 || S_High <= 0) {
			return;
		}
		int S_Width_k = S_Width;
		int S_High_k = S_High;
		S_Width_k = S_Width * k;
		S_High_k = S_High * k;

		Bitmap^ first_order = gcnew Bitmap(S_Width_k, S_High_k, screenshot->PixelFormat);

		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, S_Width, S_High), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		BitmapData^ bd_first_order = first_order->LockBits(Rectangle(0, 0, S_Width_k, S_High_k), ImageLockMode::ReadWrite, first_order->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		int first_order_byteskip = bd_first_order->Stride - bd_first_order->Width * 3;
		//設定指標再開始的位置
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Byte* first_order_ptr = (Byte*)((void*)bd_first_order->Scan0);
		
		int x, y;
		float r;//rate
		int src_w;//new x
		int src_h;//new y
		for (y = 0; y < bd_first_order->Height; y++) {
			for (x = 0; x < bd_first_order->Width; x++) {
				src_w = x / k;
				src_h = y / k;
				r = fmod(x, k);
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(bd_screenshot->Height))) && (src_w<((int)(bd_screenshot->Width))-1)) {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					first_order_ptr[0] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride))) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3)) * (r))) / k);
					first_order_ptr[1] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride)+1)) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3+1)) * (r))) / k);
					first_order_ptr[2] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride)+2)) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3+2)) * (r))) / k);
				}
				else {
					first_order_ptr[0] = (Byte)255;
					first_order_ptr[1] = (Byte)255;
					first_order_ptr[2] = (Byte)255;
				}
				first_order_ptr += 3;
			}
			first_order_ptr += first_order_byteskip;
		}
		first_order_ptr = (Byte*)((void*)bd_first_order->Scan0);
		for (y = 0; y < bd_first_order->Height; y++) {
			for (x = 0; x < bd_first_order->Width; x++) {
				src_w = x / k;
				src_h = y / k;
				r = fmod(y, k);
				if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(bd_screenshot->Height))) && (src_w < ((int)(bd_screenshot->Width)) - 1)) {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					first_order_ptr[0] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride))) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3)) * (r))) / k);
					first_order_ptr[1] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 1)) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3 + 1)) * (r))) / k);
					first_order_ptr[2] = (Byte)(int)((double)((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 2)) * (k - r) + ((*(screenshot_ptr + (src_w * 3) + (src_h * bd_screenshot->Stride) + 3 + 2)) * (r))) / k);
				}
				else {
					first_order_ptr[0] = (Byte)255;
					first_order_ptr[1] = (Byte)255;
					first_order_ptr[2] = (Byte)255;
				}
				first_order_ptr += 3;
			}
			first_order_ptr += first_order_byteskip;
		}
		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		first_order->UnlockBits(bd_first_order);
		//顯示output於pictureBox1
		output_image = first_order;
		pictureBox4->Image = output_image;
	}
	private: System::Void bilinear_interpolation(System::Object^  sender, System::EventArgs^  e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		//若沒開啟影像，則離開this process
		float k = (float)numericUpDown1->Value;
		if (button6->Text == "ZoomOut_ON") {
			k = 1 / k;
		}
		int S_Width = select_end_x - select_start_x;
		int S_High = select_end_y - select_start_y;
		if (S_Width <= 0 || S_High <= 0) {
			return;
		}
		int S_Width_k = S_Width;
		int S_High_k = S_High;
		S_Width_k = S_Width * k;
		S_High_k = S_High * k;
		Bitmap^ bilinear = gcnew Bitmap(S_Width_k, S_High_k, screenshot->PixelFormat);

		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, S_Width, S_High), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		BitmapData^ bd_bilinear = bilinear->LockBits(Rectangle(0, 0, S_Width_k, S_High_k), ImageLockMode::ReadWrite, bilinear->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		int bilinear_byteskip = bd_bilinear->Stride - bd_bilinear->Width * 3;
		//設定指標再開始的位置
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Byte* bilinear_ptr = (Byte*)((void*)bd_bilinear->Scan0);

		float src_x;//src x
		float src_y;//src y
		int x1, y1;
		float temp_r, temp_g, temp_b;
		for (int y = 1; y < bd_bilinear->Height - 1; y++) {
			for (int x = 1; x < bd_bilinear->Width - 1; x++) {
				src_x = (x / k);
				src_y = (y / k);
				x1 = src_x;
				y1 = src_y;
				int values[4][3];
				for (int index_x = 0; index_x <= 1; index_x++) { //run x
					for (int index_y = 0; index_y <= 1; index_y++) { //run y
						screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
						screenshot_ptr += (int)(y1 + index_y) * bd_screenshot->Stride + (int)(x1 + index_x) * 3;
						if ((y1 + index_y) >= bd_screenshot->Height || (x1 + index_x) >= bd_screenshot->Width) {
							values[index_y * 1 + index_x * 2][0] = values[index_y * 1 + index_x * 2][1] = values[index_y * 1 + index_x * 2][2] = 255;
						}
						else {
							values[index_y * 1 + index_x * 2][0] = screenshot_ptr[0];//b
							values[index_y * 1 + index_x * 2][1] = screenshot_ptr[1];//g
							values[index_y * 1 + index_x * 2][2] = screenshot_ptr[2];//r
						}
					}
				}
				temp_r = values[0][2] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y)
					+ values[1][2] * ((x1 + 1) - src_x) * (src_y - y1)
					+ values[2][2] * (src_x - x1) * ((y1 + 1) - src_y) 
					+ values[3][2] * (src_x - x1) * (src_y - y1);
				temp_g = values[0][1] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y)
					+ values[1][1] * ((x1 + 1) - src_x) * (src_y - y1)
					+ values[2][1] * (src_x - x1) * ((y1 + 1) - src_y)
					+ values[3][1] * (src_x - x1) * (src_y - y1);
				temp_b = values[0][0] * ((x1 + 1) - src_x) * ((y1 + 1) - src_y)
					+ values[1][0] * ((x1 + 1) - src_x) * (src_y - y1)
					+ values[2][0] * (src_x - x1) * ((y1 + 1) - src_y)
					+ values[3][0] * (src_x - x1) * (src_y - y1);
				bilinear_ptr = (Byte*)((void*)bd_bilinear->Scan0);
				bilinear_ptr += (int)y * bd_bilinear->Stride + (int)x * 3;
				bilinear_ptr[0] = (Byte)temp_b;
				bilinear_ptr[1] = (Byte)temp_g;
				bilinear_ptr[2] = (Byte)temp_r;
			}
		}
		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		bilinear->UnlockBits(bd_bilinear);
		//顯示output於pictureBox1
		output_image = bilinear;
		pictureBox4->Image = output_image;
	}
	private: System::Void select_start(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void pictureBox3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (pictureBox3->Image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		select_start_x = e->X;
		select_start_y = e->Y;
		textBox1->Text = select_start_x.ToString();
		textBox2->Text = select_start_y.ToString();
		screenshot_control = true;
		delete screenshot;
	}
	private: System::Void pictureBox3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (pictureBox3->Image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		if (screenshot_control == false) {
			return;
		}
		float zoom_x = synthesis_image->Width / pictureBox3->Width * e->X;
		float zoom_y = synthesis_image->Height / pictureBox3->Height * e->Y;
		if (zoom_x <= synthesis_image->Width && zoom_y <= synthesis_image->Height) {
			select_end_x = zoom_x;
			select_end_y = zoom_y;
		}
		textBox3->Text = select_end_x.ToString();
		textBox4->Text = select_end_y.ToString();
		Red_frame(synthesis_image, pictureBox3);
	}
	private: System::Void pictureBox3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (pictureBox3->Image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		float zoom_x = synthesis_image->Width / pictureBox3->Width * e->X;
		float zoom_y = synthesis_image->Height / pictureBox3->Height * e->Y;
		if (zoom_x <= synthesis_image->Width && zoom_y <= synthesis_image->Height) {
			select_end_x = zoom_x;
			select_end_y = zoom_y;
		}
		textBox3->Text = select_end_x.ToString();
		textBox4->Text = select_end_y.ToString();
		screen();
	}
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		synthesis_scale = (float)hScrollBar1->Value / 10;
		label5->Text = synthesis_scale.ToString();
	}
	private: System::Void ZoomOut(System::Object^ sender, System::EventArgs^ e) {
		if (button6->Text == "ZoomOut_ON") {
			button6->Text = "ZoomOut_OFF";
		}
		else{
			button6->Text = "ZoomOut_ON";
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Global_HE(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		//若沒開啟影像，則離開this process
		//float k = (float)numericUpDown1->Value;
		float k = 1;//原本大小
		if (button6->Text == "ZoomOut_ON") {
			k = 1 / k;
		}
		int S_Width = select_end_x - select_start_x;
		int S_High = select_end_y - select_start_y;
		if (S_Width <= 0 || S_High <= 0) {
			return;
		}
		int S_Width_k = S_Width;
		int S_High_k = S_High;
		S_Width_k = S_Width * k;
		S_High_k = S_High * k;

		Bitmap^ Global_HE_image = gcnew Bitmap(S_Width_k, S_High_k, screenshot->PixelFormat);

		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, S_Width, S_High), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		BitmapData^ bd_Global_HE_image = Global_HE_image->LockBits(Rectangle(0, 0, S_Width_k, S_High_k), ImageLockMode::ReadWrite, Global_HE_image->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		int Global_HE_image_byteskip = bd_Global_HE_image->Stride - bd_Global_HE_image->Width * 3;
		//設定指標再開始的位置
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Byte* Global_HE_image_ptr = (Byte*)((void*)bd_Global_HE_image->Scan0);
		int pixS[256] = {0};
		int r[256] = { 0 };
		
		for (int scanY = 0; scanY < bd_screenshot->Height; scanY++)
		{
			for (int scanX = 0; scanX < bd_screenshot->Width; scanX++)
			{
				pixS[screenshot_ptr[0]] += 1;
				screenshot_ptr += 3;
			}
		}
		r[0] = pixS[0];
		for (int idx = 1; idx < 256; idx++)
		{
			r[idx] = pixS[idx] + r[idx - 1];
		}
		screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		for (int scanY = 0; scanY < bd_screenshot->Height; scanY++)
		{
			for (int scanX = 0; scanX < bd_screenshot->Width; scanX++)
			{
				Global_HE_image_ptr[0] = Global_HE_image_ptr[1] = Global_HE_image_ptr[2] = (Byte)(r[screenshot_ptr[0]] * 255 / (bd_screenshot->Height * bd_screenshot->Width));
				screenshot_ptr += 3;
				Global_HE_image_ptr += 3;
			}
		}
		
		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Global_HE_image->UnlockBits(bd_Global_HE_image);
		//顯示output於pictureBox1
		output_image = Global_HE_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Local_HE(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		//若沒開啟影像，則離開this process
		int LocalVal = (float)numericUpDown2->Value;
		if ((LocalVal % 2) == 0) {//必須是奇數
			MessageBox::Show("請輸入奇數");
			return;
		}
		//float k = (float)numericUpDown1->Value;
		float k = 1;//原本大小
		if (button6->Text == "ZoomOut_ON") {
			k = 1 / k;
		}
		int S_Width = select_end_x - select_start_x;
		int S_High = select_end_y - select_start_y;
		if (S_Width <= 0 || S_High <= 0) {
			return;
		}
		int S_Width_k = S_Width;
		int S_High_k = S_High;
		S_Width_k = S_Width * k;
		S_High_k = S_High * k;

		Bitmap^ Local_HE_image = gcnew Bitmap(S_Width_k, S_High_k, screenshot->PixelFormat);

		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, S_Width, S_High), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		BitmapData^ bd_Local_HE_image = Local_HE_image->LockBits(Rectangle(0, 0, S_Width_k, S_High_k), ImageLockMode::ReadWrite, Local_HE_image->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		int Local_HE_image_byteskip = bd_Local_HE_image->Stride - bd_Local_HE_image->Width * 3;
		//設定指標再開始的位置
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Byte* Local_HE_image_ptr = (Byte*)((void*)bd_Local_HE_image->Scan0);
		int pixS[256] = { 0 };
		int r[256] = { 0 };
		Byte* lptr;
		Byte *sptr;
		for (int scanY = 0; scanY < bd_screenshot->Height; scanY++)
		{
			for (int scanX = 0; scanX < bd_screenshot->Width; scanX++)
			{
				if (scanY >= (LocalVal - 1) / 2 && scanY < bd_screenshot->Height - (LocalVal - 1) / 2 && scanX >= (LocalVal - 1) / 2 && scanX < bd_screenshot->Width - (LocalVal - 1) / 2)
				{
					lptr = (Byte*)((void*)bd_screenshot->Scan0);
					lptr += (scanY - (LocalVal - 1) / 2) * bd_screenshot->Width * 3;
					lptr += (scanX - (LocalVal - 1) / 2) * 3;
					sptr = lptr;
					for (int y = 0; y < LocalVal; y++)
					{
						for (int x = 0; x < LocalVal; x++)
						{
							pixS[lptr[0]] += 1;
							lptr += 3;
						}
						sptr += bd_screenshot->Width * 3;
						lptr = sptr;
					}
					r[0] = pixS[0];
					for (int idx = 1; idx < 256; idx++)
					{
						r[idx] = pixS[idx] + r[idx - 1];
					}
					Local_HE_image_ptr[0] = Local_HE_image_ptr[1] = Local_HE_image_ptr[2] = (Byte)(r[screenshot_ptr[0]] * 255 / (LocalVal * LocalVal));
					for (int idx = 0; idx < 256; idx++)
					{
						pixS[idx] = r[idx] = 0;
					}
				}
				else
				{
					Local_HE_image_ptr[0] = Local_HE_image_ptr[1] = Local_HE_image_ptr[2] = (Byte)0;
				}
				screenshot_ptr += 3;
				Local_HE_image_ptr += 3;
			}
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Local_HE_image->UnlockBits(bd_Local_HE_image);
		//顯示output於pictureBox1
		output_image = Local_HE_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (synthesis_image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		if (button9->Text == "Zoom模式") {
			button9->Text = "AutoSize模式";
			pictureBox3->SizeMode = PictureBoxSizeMode(2);//Normal = 0、StretchImage = 1、AutoSize = 2、CenterImage = 3,Zoom = 4
			pictureBox4->SizeMode = PictureBoxSizeMode(2);//Normal = 0、StretchImage = 1、AutoSize = 2、CenterImage = 3,Zoom = 4
		}
		else {
			button9->Text = "Zoom模式";
			pictureBox3->SizeMode = PictureBoxSizeMode(4);//Normal = 0、StretchImage = 1、AutoSize = 2、CenterImage = 3,Zoom = 4
			pictureBox4->SizeMode = PictureBoxSizeMode(4);//Normal = 0、StretchImage = 1、AutoSize = 2、CenterImage = 3,Zoom = 4
			roomResize();
			pictureBox4->Size = pictureBox3->Size;
		}
	}
	private: System::Void select_all(System::Object^ sender, System::EventArgs^ e) {
		if (synthesis_image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		select_start_x = 0;
		select_start_y = 0;
		select_end_x = synthesis_image->Width;
		select_end_y = synthesis_image->Height;
		textBox1->Text = select_start_x.ToString();
		textBox2->Text = select_start_y.ToString();
		textBox3->Text = select_end_x.ToString();
		textBox4->Text = select_end_y.ToString();
		//int f = Convert::ToInt32(textBox4->Text);//轉int
		screen();
	}
	private: System::Void gray_btn(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ gray_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_gray_image = gray_image->LockBits(Rectangle(0, 0, gray_image->Width, gray_image->Height), ImageLockMode::ReadWrite, gray_image->PixelFormat);
		int gray_image_byteskip = bd_gray_image->Stride - bd_gray_image->Width * 3;
		Byte* gray_image_ptr = (Byte*)((void*)bd_gray_image->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				int B = (int)screenshot_ptr[0];
				int G = (int)screenshot_ptr[1];
				int R = (int)screenshot_ptr[2];

				int gray = (R + G + B) / 3;

				//將處理完的結果放回output
				gray_image_ptr[0] = gray;
				gray_image_ptr[1] = gray;
				gray_image_ptr[2] = gray;

				//跳到下一像素
				screenshot_ptr += 3;
				gray_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			gray_image_ptr += gray_image_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		gray_image->UnlockBits(bd_gray_image);
		//顯示output於pictureBox1
		output_image = gray_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void pushP1(System::Object^ sender, System::EventArgs^ e) {
		if (ori_image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		synthesis_image = ori_image;
		roomResize();
		pictureBox3->Image = synthesis_image;
	}
	private: System::Void PushP2(System::Object^ sender, System::EventArgs^ e) {
		if (ori_image2 == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		synthesis_image = ori_image2;
		roomResize();
		pictureBox3->Image = synthesis_image;
	}
	private: System::Void replace(System::Object^ sender, System::EventArgs^ e) {
		if (output_image == nullptr) {
			return;
		}
		synthesis_image = output_image;
		roomResize();
		pictureBox3->Image = synthesis_image;
		//screen();
	}
	private: System::Void Gaussian_noise(System::Object^ sender, System::EventArgs^ e) {
		if(screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Gaussian_noise_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_Gaussian_noise_image = Gaussian_noise_image->LockBits(Rectangle(0, 0, Gaussian_noise_image->Width, Gaussian_noise_image->Height), ImageLockMode::ReadWrite, Gaussian_noise_image->PixelFormat);
		int Gaussian_noise_image_byteskip = bd_Gaussian_noise_image->Stride - bd_Gaussian_noise_image->Width * 3;
		Byte* Gaussian_noise_image_ptr = (Byte*)((void*)bd_Gaussian_noise_image->Scan0);

		float mean = (float)numericUpDown3->Value;
		float std_dev = (float)numericUpDown4->Value;
		srand(time(NULL));

		for (int j = 0; j < screenshot->Height; j++) {
			for (int i = 0; i < screenshot->Width; i++) {
				float u = rand() / (double)RAND_MAX;
				float v = rand() / (double)RAND_MAX;
				float x = sqrt(-2 * log(u)) * cos(2 * 3.14 * v) * std_dev + mean;
				//X=sqrt(-2*log(U1))*cos(2pi*U2)
				//可能會有超過的部分 限制255區間內
				if (x > 127)x = 127;
				else if (x <= -128) {
					x = -128;
				}
				for (int i = 0; i < 3; i++) {
					if ((screenshot_ptr[i] + x) > 255) {
						Gaussian_noise_image_ptr[i] = 255;
						//screenshot_ptr[i] = 255;
					}
					else if ((screenshot_ptr[i] + x) < 0) {
						Gaussian_noise_image_ptr[i] = 0;
						//screenshot_ptr[i] = 0;
					}
					else {
						Gaussian_noise_image_ptr[i] = screenshot_ptr[i] + x;
						//screenshot_ptr[i] = screenshot_ptr[i] + x;
					}
				}
				screenshot_ptr += 3;
				Gaussian_noise_image_ptr += 3;
			}
			//screenshot_ptr += screenshot_byteskip;
			//Gaussian_noise_image_ptr += Gaussian_noise_image_byteskip;
		}
		screenshot->UnlockBits(bd_screenshot);
		Gaussian_noise_image->UnlockBits(bd_Gaussian_noise_image);
		//顯示output於pictureBox1
		output_image = Gaussian_noise_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Uniform_noise(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Uniform_noise_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_Uniform_noise_image = Uniform_noise_image->LockBits(Rectangle(0, 0, Uniform_noise_image->Width, Uniform_noise_image->Height), ImageLockMode::ReadWrite, Uniform_noise_image->PixelFormat);
		int Uniform_noise_image_byteskip = bd_Uniform_noise_image->Stride - bd_Uniform_noise_image->Width * 3;
		Byte* Uniform_noise_image_ptr = (Byte*)((void*)bd_Uniform_noise_image->Scan0);

		for (int y = 0; y < screenshot->Height; y++) {
			for (int x = 0; x < screenshot->Width; x++) {
				Uniform_noise_image_ptr[0] = screenshot_ptr[0];
				Uniform_noise_image_ptr[1] = screenshot_ptr[1];
				Uniform_noise_image_ptr[2] = screenshot_ptr[2];
				screenshot_ptr += 3;
				Uniform_noise_image_ptr += 3;
			}
			//screenshot_ptr += screenshot_byteskip;
			//Uniform_noise_image_ptr += Uniform_noise_image_byteskip;
		}
		//設定指標
		screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Uniform_noise_image_ptr = (Byte*)((void*)bd_Uniform_noise_image->Scan0);
		int max = (int)numericUpDown5->Value;
		int min = (int)numericUpDown6->Value;
		if (((max - min))==0) {
			MessageBox::Show("max-min = 0 !!!");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			Uniform_noise_image->UnlockBits(bd_Uniform_noise_image);
			return;
		}
		int Probability = 0;
		float pixel = screenshot->Height * screenshot->Width;
		Probability = pixel * 0.2;//設定處裡次數
		int x, y;
		//min-max 集合 於R
		int randvalue = 1;
		//設定指標陣列
		bool* randmap = NULL;
		//處裡亂數
		srand(time(NULL));
		int Uniform_noise_image_Index = 0; //y*stride + x*3 +c  c= (0,1,2)3channels
		int randmapIndex = 0;
		//設定指標陣列大小，為判斷此區是否處理過的bool陣列
		randmap = new bool[Uniform_noise_image->Height * Uniform_noise_image->Width]{ true };//沒有全部等於true?????????
		/*全部等於true*/
		for (int i = 0; i < Uniform_noise_image->Height * Uniform_noise_image->Width; i++) {
			randmap[i] = true;
		}
		//Probability決定處裡次數
		for (int j = 0; j < Probability; j++) {
			//Uniform_noise_image_ptr歸位
			Uniform_noise_image_ptr = (Byte*)((void*)bd_Uniform_noise_image->Scan0);
			//取得隨機值
			randvalue = rand() % (max - min) + min;
			//get random X & Y
			x = rand() % bd_Uniform_noise_image->Width;
			y = rand() % bd_Uniform_noise_image->Height;
			//取得指標新隨機位置(rand y*DataWidth + rand x* channel)
			Uniform_noise_image_Index = y * bd_Uniform_noise_image->Stride + x * 3;
			//取得新的隨機為(rand y*ImageWidth"*1" + rand x "*1" )record pixel loc *1
			randmapIndex = y * Uniform_noise_image->Width + x;
			//將p3指定到新位置
			Uniform_noise_image_ptr += (int)Uniform_noise_image_Index;
			//處理3個通道
			for (int i = 0; i <= 2; i++) {
				bool temp = (randmap[randmapIndex]);//下中斷點判斷用
				if (temp) {
					//歸納超過255or小於0的數
					if (Uniform_noise_image_ptr[i] + randvalue >= 255) { Uniform_noise_image_ptr[i] = 255; }
					else if (Uniform_noise_image_ptr[i] + randvalue < 0) { Uniform_noise_image_ptr[i] = 0; }
					else {
						Uniform_noise_image_ptr[i] = Uniform_noise_image_ptr[i] + randvalue;
					}
					//處裡玩紀錄該點位置，避免重複處裡
					if (i == 2) randmap[randmapIndex] = false;
				}
				else break;
			}
		}
		screenshot->UnlockBits(bd_screenshot);
		Uniform_noise_image->UnlockBits(bd_Uniform_noise_image);
		//顯示output於pictureBox1
		output_image = Uniform_noise_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Impulse_noise(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Impulse_noise_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_Impulse_noise_image = Impulse_noise_image->LockBits(Rectangle(0, 0, Impulse_noise_image->Width, Impulse_noise_image->Height), ImageLockMode::ReadWrite, Impulse_noise_image->PixelFormat);
		int Impulse_noise_image_byteskip = bd_Impulse_noise_image->Stride - bd_Impulse_noise_image->Width * 3;
		Byte* Impulse_noise_image_ptr = (Byte*)((void*)bd_Impulse_noise_image->Scan0);

		for (int y = 0; y < screenshot->Height; y++) {
			for (int x = 0; x < screenshot->Width; x++) {
				Impulse_noise_image_ptr[0] = screenshot_ptr[0];
				Impulse_noise_image_ptr[1] = screenshot_ptr[1];
				Impulse_noise_image_ptr[2] = screenshot_ptr[2];
				screenshot_ptr += 3;
				Impulse_noise_image_ptr += 3;
			}
			//screenshot_ptr += screenshot_byteskip;
			//Impulse_noise_image_ptr += Impulse_noise_image_byteskip;
		}
		float pixel = screenshot->Height * screenshot->Width;
		//各處里約整張圖像素的 value/100次
		//可自行設定peper = pixel * 0.1; 為處裡 10% 部分
		float peper = pixel * ((float)numericUpDown7->Value) / 100;
		float salt = pixel * ((float)numericUpDown8->Value) / 100;
		int black = 0;
		int white = 255;
		int x, y;
		//建立指標陣列
		bool* randmap = NULL;
		//設定亂數
		srand(time(NULL));
		//設定起始點
		int Impulse_noise_image_Index = 0;
		int ramdmapIndex = 0;
		//設定指標陣列大小，此為判斷是否處理過的陣列
		randmap = new bool[Impulse_noise_image->Height * Impulse_noise_image->Width]{ true };
		/*全部等於true*/
		for (int i = 0; i < Impulse_noise_image->Height * Impulse_noise_image->Width; i++) {
			randmap[i] = true;
		}
		//salt & peper 分開計算 各為10% 共用randmap
		for (int j = 0; j < peper; j++) {
			//設定指標
			Impulse_noise_image_ptr = (Byte*)((void*)bd_Impulse_noise_image->Scan0);
			//取得隨機X Y
			x = rand() % bd_Impulse_noise_image->Width;
			y = rand() % bd_Impulse_noise_image->Height;
			//計算新位置
			Impulse_noise_image_Index = y * bd_Impulse_noise_image->Stride + x * 3;
			//指到新位置
			ramdmapIndex = y * bd_Impulse_noise_image->Width + x;
			Impulse_noise_image_ptr += (int)Impulse_noise_image_Index;
			for (int i = 0; i <= 2; i++) {
				bool temp = (randmap[ramdmapIndex]);
				if (temp) {
					//若未處裡 設置p4為0
					Impulse_noise_image_ptr[i] = black;
					if (i == 2) {
						//等待3個像素處理完畢後 將此區設為使用過
						randmap[ramdmapIndex] = false;
					}
				}
				else break;
			}
		}
		//salt & peper 分開計算 各為10% 共用randmap
		for (int j = 0; j < salt; j++) {
			//設定指標
			Impulse_noise_image_ptr = (Byte*)((void*)bd_Impulse_noise_image->Scan0);
			//取得隨機X Y
			x = rand() % bd_Impulse_noise_image->Width;
			y = rand() % bd_Impulse_noise_image->Height;
			//計算新位置
			Impulse_noise_image_Index = y * bd_Impulse_noise_image->Stride + x * 3;
			//指到新位置
			ramdmapIndex = y * bd_Impulse_noise_image->Width + x;
			Impulse_noise_image_ptr += (int)Impulse_noise_image_Index;
			for (int i = 0; i <= 2; i++) {
				bool temp = (randmap[ramdmapIndex]);
				if (temp) {
					//若未處裡 設置p4為255
					Impulse_noise_image_ptr[i] = white;
					if (i == 2) {
						//等待3個像素處理完畢後 將此區設為使用過
						randmap[ramdmapIndex] = false;
					}
				}
				else break;
			}
		}

		screenshot->UnlockBits(bd_screenshot);
		Impulse_noise_image->UnlockBits(bd_Impulse_noise_image);
		//顯示output於pictureBox1
		output_image = Impulse_noise_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void LowPass_filter(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ LowPass_filter_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_LowPass_filter_image = LowPass_filter_image->LockBits(Rectangle(0, 0, LowPass_filter_image->Width, LowPass_filter_image->Height), ImageLockMode::ReadWrite, LowPass_filter_image->PixelFormat);
		int LowPass_filter_image_byteskip = bd_LowPass_filter_image->Stride - bd_LowPass_filter_image->Width * 3;
		Byte* LowPass_filter_image_ptr = (Byte*)((void*)bd_LowPass_filter_image->Scan0);

		//N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
		int num = (int)numericUpDown9->Value;
		if (num == 0 || num%2==0) {
			MessageBox::Show("num = 0 或 num = 偶數!!! 請輸入奇數值");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			LowPass_filter_image->UnlockBits(bd_LowPass_filter_image);
			return;
		}
		//取得不須處裡部分
		int blank = num / 2;
		//處理範圍大小
		int window_size;
		int index = 0;
		int *r = NULL; int *g = NULL; int *b = NULL;
		//計算窗格大小
		window_size = num * num;
		int r_temp, g_temp, b_temp;
		//Byte* p2 = (Byte*)screenshot_ptr;
		for (int y = 0; y < LowPass_filter_image->Height; y++) {
			for (int x = 0; x < LowPass_filter_image->Width; x++) {
				//避免超出記憶體設定範圍
				//p2 = (Byte*)((void*)bd_screenshot->Scan0);
				if (x > blank && y > blank && x < (LowPass_filter_image->Width - blank) && y < (LowPass_filter_image->Height - blank)) {
					//index = 0;
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					r = new int[window_size];
					g = new int[window_size];
					b = new int[window_size];
					//***********************************************************//
					//取得且計算 由原點(x,y)為主軸的窗格內像素 (x+c),(y+d)
					for (int c = -blank; c <= blank; c++) {
						for (int d = -blank; d <= blank; d++) {
							b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
							g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3)+1);
							r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3)+2);
							index++;
						}
					}
					//***********************************************************//
					//計算加乘總合
					for (int a = 0; a < window_size; a++) {
						r_temp += r[a];
						g_temp += g[a];
						b_temp += b[a];
					}
					delete[] r;
					delete[] g;
					delete[] b;
					//加成總合 / 窗格大小
					r_temp /= window_size;
					b_temp /= window_size;
					g_temp /= window_size;
					LowPass_filter_image_ptr[0] = (Byte)b_temp;
					LowPass_filter_image_ptr[1] = (Byte)g_temp;
					LowPass_filter_image_ptr[2] = (Byte)r_temp;
					r_temp = 0;
					g_temp = 0;
					b_temp = 0;
				}
				else {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					//將p2指定到特定位置
					screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
					LowPass_filter_image_ptr[0] = (Byte)screenshot_ptr[0];
					LowPass_filter_image_ptr[1] = (Byte)screenshot_ptr[1];
					LowPass_filter_image_ptr[2] = (Byte)screenshot_ptr[2];
				}
				index = 0;
				LowPass_filter_image_ptr += 3;
			}
			LowPass_filter_image_ptr += LowPass_filter_image_byteskip;
		}

		screenshot->UnlockBits(bd_screenshot);
		LowPass_filter_image->UnlockBits(bd_LowPass_filter_image);
		//顯示output於pictureBox1
		output_image = LowPass_filter_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Median_filter(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Median_filter_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_Median_filter_image = Median_filter_image->LockBits(Rectangle(0, 0, Median_filter_image->Width, Median_filter_image->Height), ImageLockMode::ReadWrite, Median_filter_image->PixelFormat);
		int Median_filter_image_byteskip = bd_Median_filter_image->Stride - bd_Median_filter_image->Width * 3;
		Byte* Median_filter_image_ptr = (Byte*)((void*)bd_Median_filter_image->Scan0);

		//N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
		int num = (int)numericUpDown10->Value;
		if (num == 0 || num % 2 == 0) {
			MessageBox::Show("num = 0 或 num = 偶數!!! 請輸入奇數值");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			Median_filter_image->UnlockBits(bd_Median_filter_image);
			return;
		}
		//取得不須處裡部分
		int blank = num / 2;
		//處理範圍大小
		int window_size;
		int index = 0;
		int* r = NULL; int* g = NULL; int* b = NULL;
		//計算窗格大小
		window_size = num * num;
		int median = window_size / 2;
		int temp_g, temp_b, temp_r;
		//Byte* p2 = (Byte*)screenshot_ptr;
		for (int y = 0; y < Median_filter_image->Height; y++) {
			for (int x = 0; x < Median_filter_image->Width; x++) {
				//避免超出記憶體設定範圍
				//p2 = (Byte*)((void*)bd_screenshot->Scan0);
				if (x > blank && y > blank && x < (Median_filter_image->Width - blank) && y < (Median_filter_image->Height - blank)) {
					//index = 0;
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					r = new int[window_size];
					g = new int[window_size];
					b = new int[window_size];
					//***********************************************************//
					//取得且計算 由原點(x,y)為主軸的窗格內像素 (x+c),(y+d)
					for (int c = -blank; c <= blank; c++) {
						for (int d = -blank; d <= blank; d++) {
							b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
							g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
							r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
							index++;
						}
					}
					//***********************************************************//
					//排序
					for (int i = 0; i < window_size; i++) {
						for (int j = 0; j < i-1; j++) {
							if (r[j] > r[j + 1]) {
								temp_r = r[j];
								r[j] = r[j + 1];
								r[j + 1] = temp_r;
							}
							if (b[j] > b[j + 1]) {
								temp_b = b[j];
								b[j] = b[j + 1];
								b[j + 1] = temp_b;
							}
							if (g[j] > g[j + 1]) {
								temp_g = g[j];
								g[j] = g[j + 1];
								g[j + 1] = temp_g;
							}
						}
					}
					Median_filter_image_ptr[0] = (Byte)b[median];
					Median_filter_image_ptr[1] = (Byte)g[median];
					Median_filter_image_ptr[2] = (Byte)r[median];
					delete[] r;
					delete[] g;
					delete[] b;
				}
				else {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					//將p2指定到特定位置
					screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
					Median_filter_image_ptr[0] = (Byte)screenshot_ptr[0];
					Median_filter_image_ptr[1] = (Byte)screenshot_ptr[1];
					Median_filter_image_ptr[2] = (Byte)screenshot_ptr[2];
				}
				index = 0;
				Median_filter_image_ptr += 3;
			}
			Median_filter_image_ptr += Median_filter_image_byteskip;
		}

		screenshot->UnlockBits(bd_screenshot);
		Median_filter_image->UnlockBits(bd_Median_filter_image);
		//顯示output於pictureBox1
		output_image = Median_filter_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Alpha_trimmed(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Alpha_trimmed_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_Alpha_trimmed_image = Alpha_trimmed_image->LockBits(Rectangle(0, 0, Alpha_trimmed_image->Width, Alpha_trimmed_image->Height), ImageLockMode::ReadWrite, Alpha_trimmed_image->PixelFormat);
		int Alpha_trimmed_image_byteskip = bd_Alpha_trimmed_image->Stride - bd_Alpha_trimmed_image->Width * 3;
		Byte* Alpha_trimmed_image_ptr = (Byte*)((void*)bd_Alpha_trimmed_image->Scan0);

		//N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
		int num = (int)numericUpDown11->Value;
		int T = (int)numericUpDown12->Value;
		if (num == 0 || num % 2 == 0 || T >(num*num/2)) {
			MessageBox::Show("num = 0 或 num = 偶數!!! 請輸入奇數值或 T>(num*num/2)");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			Alpha_trimmed_image->UnlockBits(bd_Alpha_trimmed_image);
			return;
		}
		//取得不須處裡部分
		int blank = num / 2;
		//處理範圍大小
		int window_size;
		int* r = NULL; int* g = NULL; int* b = NULL;
		//計算窗格大小
		window_size = num * num;
		int median = window_size / 2;
		int temp_g, temp_b, temp_r;
		//Byte* p2 = (Byte*)screenshot_ptr;
		for (int y = 0; y < Alpha_trimmed_image->Height; y++) {
			for (int x = 0; x < Alpha_trimmed_image->Width; x++) {
				//避免超出記憶體設定範圍
				//p2 = (Byte*)((void*)bd_screenshot->Scan0);
				if (x > blank && y > blank && x < (Alpha_trimmed_image->Width - blank) && y < (Alpha_trimmed_image->Height - blank)) {
					//index = 0;
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					r = new int[window_size];
					g = new int[window_size];
					b = new int[window_size];
					int index = 0;
					//***********************************************************//
					//取得且計算 由原點(x,y)為主軸的窗格內像素 (x+c),(y+d)
					for (int c = -blank; c <= blank; c++) {
						for (int d = -blank; d <= blank; d++) {
							b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
							g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
							r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
							index++;
						}
					}
					//***********************************************************//
					//排序
					for (int i = 0; i < window_size; i++) {
						for (int j = i; j < window_size; j++) {
							if (r[i] > r[j]) {
								temp_r = r[i];
								r[i] = r[j];
								r[j] = temp_r;
							}
							if (b[i] > b[j]) {
								temp_b = b[i];
								b[i] = b[j];
								b[j] = temp_b;
							}
							if (g[i] > g[j]) {
								temp_g = g[i];
								g[i] = g[j];
								g[j] = temp_g;
							}
						}
					}
					int avg_r = 0, avg_b = 0, avg_g = 0;
					for (int i = T; i < window_size - T; i++) {
						avg_r += r[i];
						avg_b += b[i];
						avg_g += g[i];
					}
					avg_r /= (window_size - 2 * T);
					avg_b /= (window_size - 2 * T);
					avg_g /= (window_size - 2 * T);
					Alpha_trimmed_image_ptr[0] = (Byte)avg_b;
					Alpha_trimmed_image_ptr[1] = (Byte)avg_g;
					Alpha_trimmed_image_ptr[2] = (Byte)avg_r;
					delete[] r;
					delete[] g;
					delete[] b;
				}
				else {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					//將p2指定到特定位置
					screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
					Alpha_trimmed_image_ptr[0] = (Byte)screenshot_ptr[0];
					Alpha_trimmed_image_ptr[1] = (Byte)screenshot_ptr[1];
					Alpha_trimmed_image_ptr[2] = (Byte)screenshot_ptr[2];
				}
				//index = 0;
				Alpha_trimmed_image_ptr += 3;
			}
			Alpha_trimmed_image_ptr += Alpha_trimmed_image_byteskip;
		}

		screenshot->UnlockBits(bd_screenshot);
		Alpha_trimmed_image->UnlockBits(bd_Alpha_trimmed_image);
		//顯示output於pictureBox1
		output_image = Alpha_trimmed_image;
		pictureBox4->Image = output_image;
	}

	private: System::Void HighPass_filter(System::Object^  sender, System::EventArgs^  e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ HighPass_filter_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_HighPass_filter_image = HighPass_filter_image->LockBits(Rectangle(0, 0, HighPass_filter_image->Width, HighPass_filter_image->Height), ImageLockMode::ReadWrite, HighPass_filter_image->PixelFormat);
		int HighPass_filter_image_byteskip = bd_HighPass_filter_image->Stride - bd_HighPass_filter_image->Width * 3;
		Byte* HighPass_filter_image_ptr = (Byte*)((void*)bd_HighPass_filter_image->Scan0);

		//N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
		int num = (int)numericUpDown13->Value;
		if (num == 0 || num % 2 == 0) {
			MessageBox::Show("num = 0 或 num = 偶數!!! 請輸入奇數值");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			HighPass_filter_image->UnlockBits(bd_HighPass_filter_image);
			return;
		}
		//取得不須處裡部分
		int blank = num / 2;
		int base = 0;
		int index = 0;
		//處理範圍大小
		int* r = NULL; int* g = NULL; int* b = NULL;
		//計算窗格大小
		base = num * num;
		int g_temp, b_temp, r_temp;
		int set_rate;
		//Byte* p2 = (Byte*)screenshot_ptr;
		for (int y = 0; y < HighPass_filter_image->Height; y++) {
			for (int x = 0; x < HighPass_filter_image->Width; x++) {
				//避免超出記憶體設定範圍
				//p2 = (Byte*)((void*)bd_screenshot->Scan0);
				if (x > blank && y > blank && x < (HighPass_filter_image->Width - blank) && y < (HighPass_filter_image->Height - blank)) {
					//index = 0;
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					r = new int[base];
					g = new int[base];
					b = new int[base];
					int index = 0;
					//***********************************************************//
					//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
					for (int c = -blank; c <= blank; c++) {
						for (int d = -blank; d <= blank; d++) {
							b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
							g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
							r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
							index++;
						}
					}
					//***********************************************************//
					for (int a = 0; a < base; a++) {
						if (a == base / 2) { set_rate = base - 1; }
						else { set_rate = -1; }
						r_temp = r_temp + r[a] * set_rate;
						g_temp = g_temp + g[a] * set_rate;
						b_temp = b_temp + b[a] * set_rate;
					}
					//***********************************************************//
					delete[] r;
					delete[] g;
					delete[] b;
					if (r_temp < 0)r_temp = 0;
					if (b_temp < 0)b_temp = 0;
					if (g_temp < 0)g_temp = 0;
					r_temp = r_temp / base;
					b_temp = b_temp / base;
					g_temp = g_temp / base;
					HighPass_filter_image_ptr[0] = (Byte)b_temp;
					HighPass_filter_image_ptr[1] = (Byte)g_temp;
					HighPass_filter_image_ptr[2] = (Byte)r_temp;
				}
				else {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					//將p2指定到特定位置
					screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
					HighPass_filter_image_ptr[0] = (Byte)screenshot_ptr[0];
					HighPass_filter_image_ptr[1] = (Byte)screenshot_ptr[1];
					HighPass_filter_image_ptr[2] = (Byte)screenshot_ptr[2];
				}
				//index = 0;
				HighPass_filter_image_ptr += 3;
			}
			HighPass_filter_image_ptr += HighPass_filter_image_byteskip;
		}

		screenshot->UnlockBits(bd_screenshot);
		HighPass_filter_image->UnlockBits(bd_HighPass_filter_image);
		//顯示output於pictureBox1
		output_image = HighPass_filter_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void HighBoost_filter(System::Object^  sender, System::EventArgs^  e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ HighBoost_filter_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		BitmapData^ bd_HighBoost_filter_image = HighBoost_filter_image->LockBits(Rectangle(0, 0, HighBoost_filter_image->Width, HighBoost_filter_image->Height), ImageLockMode::ReadWrite, HighBoost_filter_image->PixelFormat);
		int HighBoost_filter_image_byteskip = bd_HighBoost_filter_image->Stride - bd_HighBoost_filter_image->Width * 3;
		Byte* HighBoost_filter_image_ptr = (Byte*)((void*)bd_HighBoost_filter_image->Scan0);

		//N[n]={p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
		int A = (int)numericUpDown14->Value;
		if (A == 0) {
			MessageBox::Show("A = 0!!");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			HighBoost_filter_image->UnlockBits(bd_HighBoost_filter_image);
			return;
		}
		int num= (int)numericUpDown15->Value;
		if (num == 0 || num % 2 == 0) {
			MessageBox::Show("num = 0 或 num = 偶數!!! 請輸入奇數值");
			screenshot->UnlockBits(bd_screenshot);//要unlock
			HighBoost_filter_image->UnlockBits(bd_HighBoost_filter_image);
			return;
		}
		//取得不須處裡部分
		int blank = num / 2;
		int base = 0;
		int index = 0;
		//處理範圍大小
		int* r = NULL; int* g = NULL; int* b = NULL;
		//計算窗格大小
		base = num * num;
		int g_temp, b_temp, r_temp;
		int set_rate;
		//Byte* p2 = (Byte*)screenshot_ptr;
		for (int y = 0; y < HighBoost_filter_image->Height; y++) {
			for (int x = 0; x < HighBoost_filter_image->Width; x++) {
				//避免超出記憶體設定範圍
				//p2 = (Byte*)((void*)bd_screenshot->Scan0);
				if (x > blank && y > blank && x < (HighBoost_filter_image->Width - blank) && y < (HighBoost_filter_image->Height - blank)) {
					//index = 0;
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					r = new int[base];
					g = new int[base];
					b = new int[base];
					int index = 0;
					//***********************************************************//
					//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
					for (int c = -blank; c <= blank; c++) {
						for (int d = -blank; d <= blank; d++) {
							b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
							g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
							r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
							index++;
						}
					}
					//***********************************************************//
					for (int a = 0; a < base; a++) {
						if (a == base / 2) { set_rate =A + base - 2; }
						else { set_rate = -1; }
						r_temp = r_temp + r[a] * set_rate;
						g_temp = g_temp + g[a] * set_rate;
						b_temp = b_temp + b[a] * set_rate;
					}
					//***********************************************************//
					delete[] r;
					delete[] g;
					delete[] b;
					if (r_temp < 0)r_temp = 0;
					if (b_temp < 0)b_temp = 0;
					if (g_temp < 0)g_temp = 0;
					if (r_temp > 255)r_temp = 255;
					if (b_temp > 255)b_temp = 255;
					if (g_temp > 255)g_temp = 255;
					HighBoost_filter_image_ptr[0] = (Byte)b_temp;
					HighBoost_filter_image_ptr[1] = (Byte)g_temp;
					HighBoost_filter_image_ptr[2] = (Byte)r_temp;
					r_temp = 0; g_temp = 0; b_temp = 0;
				}
				else {
					screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
					//將p2指定到特定位置
					screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
					HighBoost_filter_image_ptr[0] = (Byte)screenshot_ptr[0];
					HighBoost_filter_image_ptr[1] = (Byte)screenshot_ptr[1];
					HighBoost_filter_image_ptr[2] = (Byte)screenshot_ptr[2];
				}
				//index = 0;
				HighBoost_filter_image_ptr += 3;
			}
			HighBoost_filter_image_ptr += HighBoost_filter_image_byteskip;
		}

		screenshot->UnlockBits(bd_screenshot);
		HighBoost_filter_image->UnlockBits(bd_HighBoost_filter_image);
		//顯示output於pictureBox1
		output_image = HighBoost_filter_image;
		pictureBox4->Image = output_image;
	}

private: System::Void Prewitt_operator_horizontal_vertical(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Prewitt_h_v_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Prewitt_h_v_image = Prewitt_h_v_image->LockBits(Rectangle(0, 0, Prewitt_h_v_image->Width, Prewitt_h_v_image->Height), ImageLockMode::ReadWrite, Prewitt_h_v_image->PixelFormat);
	int Prewitt_h_v_image_byteskip = bd_Prewitt_h_v_image->Stride - bd_Prewitt_h_v_image->Width * 3;
	Byte* Prewitt_h_v_image_ptr = (Byte*)((void*)bd_Prewitt_h_v_image->Scan0);
	
	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask= new int[9]{ -2, -1, 0, -1, 0, 1, 0, 1, 2 };
	for (int y = 0; y < Prewitt_h_v_image->Height; y++) {
		for (int x = 0; x < Prewitt_h_v_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Prewitt_h_v_image->Width - blank) && y < (Prewitt_h_v_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Prewitt_h_v_image_ptr[0] = (Byte)Math::Abs(b_v);
				Prewitt_h_v_image_ptr[1] = (Byte)Math::Abs(g_v);
				Prewitt_h_v_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Prewitt_h_v_image_ptr[0] = (Byte)screenshot_ptr[0];
				Prewitt_h_v_image_ptr[1] = (Byte)screenshot_ptr[1];
				Prewitt_h_v_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Prewitt_h_v_image_ptr += 3;
		}
		Prewitt_h_v_image_ptr += Prewitt_h_v_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Prewitt_h_v_image->UnlockBits(bd_Prewitt_h_v_image);
	//顯示output於pictureBox1
	output_image = Prewitt_h_v_image;
	pictureBox4->Image = output_image;
}
private: System::Void Prewitt_operator_diagonal(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Prewitt_d_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Prewitt_d_image = Prewitt_d_image->LockBits(Rectangle(0, 0, Prewitt_d_image->Width, Prewitt_d_image->Height), ImageLockMode::ReadWrite, Prewitt_d_image->PixelFormat);
	int Prewitt_d_image_byteskip = bd_Prewitt_d_image->Stride - bd_Prewitt_d_image->Width * 3;
	Byte* Prewitt_d_image_ptr = (Byte*)((void*)bd_Prewitt_d_image->Scan0);

	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask = new int[9]{ -1, 0, 1, -2, 0, 2, -1, 0, 1 };
	for (int y = 0; y < Prewitt_d_image->Height; y++) {
		for (int x = 0; x < Prewitt_d_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Prewitt_d_image->Width - blank) && y < (Prewitt_d_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Prewitt_d_image_ptr[0] = (Byte)Math::Abs(b_v);
				Prewitt_d_image_ptr[1] = (Byte)Math::Abs(g_v);
				Prewitt_d_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Prewitt_d_image_ptr[0] = (Byte)screenshot_ptr[0];
				Prewitt_d_image_ptr[1] = (Byte)screenshot_ptr[1];
				Prewitt_d_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Prewitt_d_image_ptr += 3;
		}
		Prewitt_d_image_ptr += Prewitt_d_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Prewitt_d_image->UnlockBits(bd_Prewitt_d_image);
	//顯示output於pictureBox1
	output_image = Prewitt_d_image;
	pictureBox4->Image = output_image;
}

private: System::Void Sobel_operator_horizontal_vertical(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Sobel_h_v_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Sobel_h_v_image = Sobel_h_v_image->LockBits(Rectangle(0, 0, Sobel_h_v_image->Width, Sobel_h_v_image->Height), ImageLockMode::ReadWrite, Sobel_h_v_image->PixelFormat);
	int Sobel_h_v_image_byteskip = bd_Sobel_h_v_image->Stride - bd_Sobel_h_v_image->Width * 3;
	Byte* Sobel_h_v_image_ptr = (Byte*)((void*)bd_Sobel_h_v_image->Scan0);

	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask = new int[9]{ -2, -2, 0, -2, 0, 2, 0, 2, 2 };
	for (int y = 0; y < Sobel_h_v_image->Height; y++) {
		for (int x = 0; x < Sobel_h_v_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Sobel_h_v_image->Width - blank) && y < (Sobel_h_v_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Sobel_h_v_image_ptr[0] = (Byte)Math::Abs(b_v);
				Sobel_h_v_image_ptr[1] = (Byte)Math::Abs(g_v);
				Sobel_h_v_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Sobel_h_v_image_ptr[0] = (Byte)screenshot_ptr[0];
				Sobel_h_v_image_ptr[1] = (Byte)screenshot_ptr[1];
				Sobel_h_v_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Sobel_h_v_image_ptr += 3;
		}
		Sobel_h_v_image_ptr += Sobel_h_v_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Sobel_h_v_image->UnlockBits(bd_Sobel_h_v_image);
	//顯示output於pictureBox1
	output_image = Sobel_h_v_image;
	pictureBox4->Image = output_image;
}
private: System::Void Sobel_operator_diagonal(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Sobel_d_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Sobel_d_image = Sobel_d_image->LockBits(Rectangle(0, 0, Sobel_d_image->Width, Sobel_d_image->Height), ImageLockMode::ReadWrite, Sobel_d_image->PixelFormat);
	int Sobel_d_image_byteskip = bd_Sobel_d_image->Stride - bd_Sobel_d_image->Width * 3;
	Byte* Sobel_d_image_ptr = (Byte*)((void*)bd_Sobel_d_image->Scan0);

	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask = new int[9]{ -2, 0, 2, -2, 0, 2, -2, 0, 2 };
	for (int y = 0; y < Sobel_d_image->Height; y++) {
		for (int x = 0; x < Sobel_d_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Sobel_d_image->Width - blank) && y < (Sobel_d_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Sobel_d_image_ptr[0] = (Byte)Math::Abs(b_v);
				Sobel_d_image_ptr[1] = (Byte)Math::Abs(g_v);
				Sobel_d_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Sobel_d_image_ptr[0] = (Byte)screenshot_ptr[0];
				Sobel_d_image_ptr[1] = (Byte)screenshot_ptr[1];
				Sobel_d_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Sobel_d_image_ptr += 3;
		}
		Sobel_d_image_ptr += Sobel_d_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Sobel_d_image->UnlockBits(bd_Sobel_d_image);
	//顯示output於pictureBox1
	output_image = Sobel_d_image;
	pictureBox4->Image = output_image;
}

private: System::Void Laplacian_filter_horizontal_vertical(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Laplacian_h_v_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Laplacian_h_v_image = Laplacian_h_v_image->LockBits(Rectangle(0, 0, Laplacian_h_v_image->Width, Laplacian_h_v_image->Height), ImageLockMode::ReadWrite, Laplacian_h_v_image->PixelFormat);
	int Laplacian_h_v_image_byteskip = bd_Laplacian_h_v_image->Stride - bd_Laplacian_h_v_image->Width * 3;
	Byte* Laplacian_h_v_image_ptr = (Byte*)((void*)bd_Laplacian_h_v_image->Scan0);

	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask = new int[9]{ 0, -1, 0, -1, 5, -1, 0, -1, 0 };
	for (int y = 0; y < Laplacian_h_v_image->Height; y++) {
		for (int x = 0; x < Laplacian_h_v_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Laplacian_h_v_image->Width - blank) && y < (Laplacian_h_v_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Laplacian_h_v_image_ptr[0] = (Byte)Math::Abs(b_v);
				Laplacian_h_v_image_ptr[1] = (Byte)Math::Abs(g_v);
				Laplacian_h_v_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Laplacian_h_v_image_ptr[0] = (Byte)screenshot_ptr[0];
				Laplacian_h_v_image_ptr[1] = (Byte)screenshot_ptr[1];
				Laplacian_h_v_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Laplacian_h_v_image_ptr += 3;
		}
		Laplacian_h_v_image_ptr += Laplacian_h_v_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Laplacian_h_v_image->UnlockBits(bd_Laplacian_h_v_image);
	//顯示output於pictureBox1
	output_image = Laplacian_h_v_image;
	pictureBox4->Image = output_image;
}
private: System::Void Laplacian_filter_diagonal(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ Laplacian_d_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_Laplacian_d_image = Laplacian_d_image->LockBits(Rectangle(0, 0, Laplacian_d_image->Width, Laplacian_d_image->Height), ImageLockMode::ReadWrite, Laplacian_d_image->PixelFormat);
	int Laplacian_d_image_byteskip = bd_Laplacian_d_image->Stride - bd_Laplacian_d_image->Width * 3;
	Byte* Laplacian_d_image_ptr = (Byte*)((void*)bd_Laplacian_d_image->Scan0);

	int base = 0;
	int size = 3;
	int blank = size / 2;
	base = size * size;

	int* r = NULL; int* g = NULL; int* b = NULL;
	int index = 0;

	int* mask = new int[9]{ -1, -1, -1, -1, 9, -1, -1, -1, -1 };
	for (int y = 0; y < Laplacian_d_image->Height; y++) {
		for (int x = 0; x < Laplacian_d_image->Width; x++) {
			//避免超出記憶體設定範圍
			if (x > blank && y > blank && x < (Laplacian_d_image->Width - blank) && y < (Laplacian_d_image->Height - blank)) {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//***********************************************************//
				r = new int[base];
				g = new int[base];
				b = new int[base];
				int index = 0;
				//取值 以(x,y)為中心取周圍值 共9個(窗格大小)
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3));
						g[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 1);
						r[index] = *(screenshot_ptr + ((y + c) * bd_screenshot->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***********************************************************//
				int b_v = 0;
				int g_v = 0;
				int r_v = 0;
				for (int i = 0; i < base; i++)
				{
					b_v += b[i] * mask[i];
					g_v += g[i] * mask[i];
					r_v += r[i] * mask[i];
				}
				//***********************************************************//
				delete[] r;
				delete[] g;
				delete[] b;

				Laplacian_d_image_ptr[0] = (Byte)Math::Abs(b_v);
				Laplacian_d_image_ptr[1] = (Byte)Math::Abs(g_v);
				Laplacian_d_image_ptr[2] = (Byte)Math::Abs(r_v);
			}
			else {
				screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
				//將p2指定到特定位置
				screenshot_ptr += (y * bd_screenshot->Stride + x * 3);
				Laplacian_d_image_ptr[0] = (Byte)screenshot_ptr[0];
				Laplacian_d_image_ptr[1] = (Byte)screenshot_ptr[1];
				Laplacian_d_image_ptr[2] = (Byte)screenshot_ptr[2];
			}
			//index = 0;
			Laplacian_d_image_ptr += 3;
		}
		Laplacian_d_image_ptr += Laplacian_d_image_byteskip;
	}

	screenshot->UnlockBits(bd_screenshot);
	Laplacian_d_image->UnlockBits(bd_Laplacian_d_image);
	//顯示output於pictureBox1
	output_image = Laplacian_d_image;
	pictureBox4->Image = output_image;
}
	bool isPowerBy2_(int n){
		   for (int i = 1; i <= n; i *= 2)
			   if (i == n) return true;

		   return false;
	}
private: System::Void DCT(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ DCT_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_DCT_image = DCT_image->LockBits(Rectangle(0, 0, DCT_image->Width, DCT_image->Height), ImageLockMode::ReadWrite, DCT_image->PixelFormat);
	int DCT_image_byteskip = bd_DCT_image->Stride - bd_DCT_image->Width * 3;
	Byte* DCT_image_ptr = (Byte*)((void*)bd_DCT_image->Scan0);

	//double* mask = new double[8, 8];
	//double* tempC = new double[8, 8];
	int num = (int)numericUpDown16->Value;
	bool flag = isPowerBy2_(num);
	if (flag == false) {
		MessageBox::Show("num不為2的次方數");
		screenshot->UnlockBits(bd_screenshot);//要unlock
		DCT_image->UnlockBits(bd_DCT_image);
		return;
	}

	int** mask = (int**)new int[num * sizeof(int*) + num * num];
	for (int i = 0; i < num; i++) {
		mask[i] = ((int*)(mask + num)) + i * num;
	}
	int** tempC = (int**)new int[num * sizeof(int*) + num * num];
	for (int i = 0; i < num; i++) {
		tempC[i] = ((int*)(tempC + num)) + i * num;
	}
	
	for (int y = 0; y < DCT_image->Height; y += num) {
		for (int x = 0; x < DCT_image->Width; x += num) {
			for (int yy = 0; yy < num; yy++) {
				for (int xx = 0; xx < num; xx++) {
					mask[yy][xx] = *(screenshot_ptr + bd_screenshot->Stride * yy + xx * 3) - 128;
					tempC[yy][xx] = 0;
				}
			}
			for (int v = 0; v < num; v++) {
				for (int u = 0; u < num; u++) {
					double alpha = 0;
					if (u == 0 && v == 0) {
						//alpha = 0.125;
						alpha = 1.0 / (float)num;
					}
					else if (u == 0 || v == 0) {
						alpha = Math::Sqrt(1.0 / (float)num) * Math::Sqrt(1.0 / ((float)num/2) );
					}
					else {
						//alpha = 0.25;
						alpha = 2.0 / (float)num;
					}
					for (int yy = 0; yy < num; yy++) {
						for (int xx = 0; xx < num; xx++) {
							tempC[v][u] += (mask[yy][xx]) * (Math::Cos(((2 * xx + 1) * u * Math::PI) / ((float)num * 2))) * (Math::Cos(((2 * yy + 1) * v * Math::PI) / ((float)num * 2)));
						}
					}
					tempC[v][u] *= alpha;
				}
			}
			for (int yy = 0; yy < num; yy++) {
				for (int xx = 0; xx < num; xx++) {
					if (yy < num/2  && xx < num/2) {
						tempC[yy][xx] = (int)tempC[yy][xx];
					}
					else {
						tempC[yy][xx] = 0;
					}
					mask[yy][xx] = 0;
				}
			}
			for (int yy = 0; yy < num; yy++) {
				for (int xx = 0; xx < num; xx++) {
					for (int v = 0; v < num; v++) {
						for (int u = 0; u < num; u++) {
							double alpha = 0;
							if (u == 0 && v == 0) {
								//alpha = 0.125;
								alpha = 1.0 / (float)num;
							}
							else if (u == 0 || v == 0) {
								alpha = Math::Sqrt(1.0 / (float)num) * Math::Sqrt(1.0 / ((float)num / 2));
							}
							else {
								//alpha = 0.25;
								alpha = 2.0 / (float)num;
							}
							mask[yy][xx] += alpha * (tempC[v][u]) * (Math::Cos(((2 * xx + 1) * u * Math::PI) / ((float)num * 2))) * (Math::Cos(((2 * yy + 1) * v * Math::PI) / ((float)num * 2)));
						}
					}
					int buf = (int)((mask[yy][xx]) + 128);
					if (buf > 255) {
						buf = 255;
					}
					else if (buf < 0) {
						buf = 0;
					}
					for (int i = 0; i < 3; i++) {
						*(DCT_image_ptr + bd_DCT_image->Stride * yy + xx * 3 + i) = (Byte)(buf);
					}
				}
			}
			DCT_image_ptr += 3 * num;
			screenshot_ptr += 3 * num;
		}
		DCT_image_ptr += bd_DCT_image->Stride * (num - 1) + DCT_image_byteskip;
		screenshot_ptr += bd_screenshot->Stride * (num - 1) + screenshot_byteskip;
	}
	delete[] mask;
	delete[] tempC;
	screenshot->UnlockBits(bd_screenshot);
	DCT_image->UnlockBits(bd_DCT_image);
	//顯示output於pictureBox1
	output_image = DCT_image;
	pictureBox4->Image = output_image;
}
private: System::Void General_Wavelet_form(System::Object^ sender, System::EventArgs^ e) {
	if (screenshot == nullptr) {
		//return nothing because function System::Void 回傳Void
		return;
	}
	Bitmap^ General_Wavelet_form_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);

	BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
	int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
	Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

	BitmapData^ bd_General_Wavelet_form_image = General_Wavelet_form_image->LockBits(Rectangle(0, 0, General_Wavelet_form_image->Width, General_Wavelet_form_image->Height), ImageLockMode::ReadWrite, General_Wavelet_form_image->PixelFormat);
	int General_Wavelet_form_image_byteskip = bd_General_Wavelet_form_image->Stride - bd_General_Wavelet_form_image->Width * 3;
	Byte* General_Wavelet_form_image_ptr = (Byte*)((void*)bd_General_Wavelet_form_image->Scan0);


	int pass = (int)numericUpDown17->Value;

	int** rows = (int**)new int[General_Wavelet_form_image->Height * sizeof(int*) + General_Wavelet_form_image->Height * General_Wavelet_form_image->Width];
	for (int i = 0; i < General_Wavelet_form_image->Height; i++) {
		rows[i] = ((int*)(rows + General_Wavelet_form_image->Height)) + i * General_Wavelet_form_image->Width;
	}
	int** columns = (int**)new int[General_Wavelet_form_image->Height * sizeof(int*) + General_Wavelet_form_image->Height * General_Wavelet_form_image->Width];
	for (int i = 0; i < General_Wavelet_form_image->Height; i++) {
		columns[i] = ((int*)(columns + General_Wavelet_form_image->Height)) + i * General_Wavelet_form_image->Width;
	}
	int H_mid = General_Wavelet_form_image->Height / 2;
	int W_mid = General_Wavelet_form_image->Width / 2;

	for (int y = 0; y < General_Wavelet_form_image->Height; y++) {
		for (int x = 0; x < W_mid; x++) {
			int add = (int)Math::Round((float)((*(screenshot_ptr)) + (*(screenshot_ptr + 3))) / 2.0);
			int less = (int)Math::Round((float)((*(screenshot_ptr)) - (*(screenshot_ptr + 3))) / 2.0);
			rows[y][x] = add;
			rows[y][x + W_mid] = less;
			screenshot_ptr += 6;
		}
		screenshot_ptr += screenshot_byteskip;
	}
	for (int x = 0; x < General_Wavelet_form_image->Width; x++) {
		for (int y = 0; y < H_mid; y++) {
			int add = (int)Math::Round((float)(rows[2 * y][x] + rows[(2 * y * +1)][x]) / 2.0);
			int less = (int)Math::Round((float)(rows[2 * y + 1][x] - rows[(2 * y)][x]) / 2.0);
			columns[y][x] = add;
			columns[(y + H_mid)][x] = less;
			if (x >= W_mid || y >= H_mid) {
				columns[y][x] += 128;
			}
			if (x >= W_mid || (y + H_mid) >= H_mid) {
				columns[(y + H_mid)][x] += 128;
			}
		}
	}
	for (int t = 0; t < (pass-1); t++) {
		for (int i = 0; i< General_Wavelet_form_image->Height; i++) {
			for (int j = 0;j< General_Wavelet_form_image->Width; j++) {
				rows[i][j] = columns[i][j];
			}
		}
		H_mid /= 2;
		W_mid /= 2;
		for (int y = 0; y < (H_mid * 2); y++) {
			for (int x = 0; x < W_mid; x++) {
				int add = (int)Math::Round((float)(columns[y][2 * x] + columns[y][2 * x + 1]) / 2.0);
				int less = (int)Math::Round((float)(columns[y][2 * x] - columns[y][ 2 * x + 1]) / 2.0);
				rows[y][x] = add;
				rows[y][x + W_mid] = less;
			}
		}
		for (int x = 0; x < (W_mid * 2); x++) {
			for (int y = 0; y < H_mid; y++) {
				int add = (int)Math::Round((float)(rows[2 * y ][ x] + rows[(2 * y + 1 )][x]) / 2.0);
				int less = (int)Math::Round((float)(rows[(2 * y + 1)][x] - rows[(2 * y)][x]) / 2.0);
				columns[y][x] = add;
				columns[(y + H_mid)][x] = less;
				if (x >= W_mid || y >= H_mid) {
					columns[y][x] += 128;
				}
				if (x >= W_mid || (y + H_mid) >= H_mid) {
					columns[(y + H_mid)][x] += 128;
				}
			}
		}
	}
	General_Wavelet_form_image_ptr = (Byte*)((void*)bd_General_Wavelet_form_image->Scan0);
	for (int y = 0; y < General_Wavelet_form_image->Height; y++) {
		for (int x = 0; x < General_Wavelet_form_image->Width; x++) {
			General_Wavelet_form_image_ptr[0] = General_Wavelet_form_image_ptr[1] = General_Wavelet_form_image_ptr[2] = (Byte)columns[y][x];
			General_Wavelet_form_image_ptr += 3;
		}
		General_Wavelet_form_image_ptr += General_Wavelet_form_image_byteskip;
	}
	delete[] rows;
	delete[] columns;
	screenshot->UnlockBits(bd_screenshot);
	General_Wavelet_form_image->UnlockBits(bd_General_Wavelet_form_image);
	//顯示output於pictureBox1
	output_image = General_Wavelet_form_image;
	pictureBox4->Image = output_image;
}
private: System::Void Save_image(System::Object^ sender, System::EventArgs^ e) {
	// Displays a SaveFileDialog so the user can save the Image
	// assigned to Button2.
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	//saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	//saveFileDialog1->Title = "Save an Image File";
	//saveFileDialog1->ShowDialog();

	saveFileDialog1->FileName = "process_image";
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Png Image|*.png";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName != "")
	{
		//Bitmap bit = new Bitmap(PictureBox.ClientRectangle.Width, PictureBox.ClientRectangle.Height);
		//PictureBox.DrawToBitmap(bit, PictureBox.ClientRectangle);
		output_image->Save(saveFileDialog1->FileName);
	}
	
}
	private: System::Void Morphological_Dilation(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Dilation_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Dilation_image = Dilation_image->LockBits(Rectangle(0, 0, Dilation_image->Width, Dilation_image->Height), ImageLockMode::ReadWrite, Dilation_image->PixelFormat);
		int Dilation_image_byteskip = bd_Dilation_image->Stride - bd_Dilation_image->Width * 3;
		Byte* Dilation_image_ptr = (Byte*)((void*)bd_Dilation_image->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		int r = (int)numericUpDown20->Value;
		int hei = (int)numericUpDown18->Value;
		int wid = (int)numericUpDown19->Value;
		if (checkBox1->Checked) {
			hei = r;
			wid = r;
		}
		//把圖片刷黑
		for (int iy = 0; iy < bd_screenshot->Height; iy++) {
			for (int ix = 0; ix < bd_screenshot->Width; ix++) {
				Dilation_image_ptr[0] = Dilation_image_ptr[1] = Dilation_image_ptr[2] = 0;
				Dilation_image_ptr += 3;
			}
			Dilation_image_ptr += Dilation_image_byteskip;
		}
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_screenshot->Width <= (x + wid) ) {
					end_x_range = bd_screenshot->Width - x ;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_screenshot->Height <= (y + hei)) {
					end_y_range = bd_screenshot->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				if (screenshot_ptr[0] == 255) {
					//Dilation_image_ptr[0] = Dilation_image_ptr[1] = Dilation_image_ptr[2] = 255;
					Dilation_image_ptr = (Byte*)((void*)bd_Dilation_image->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_screenshot->Stride);
					int range_byteskip = (bd_Dilation_image->Stride - bd_Dilation_image->Width * 3) + ((bd_screenshot->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x_range - r), 2) + pow(abs(y_range - r), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Dilation_image_ptr[0] = Dilation_image_ptr[1] = Dilation_image_ptr[2] = 255;
								}
							}
							else {
								Dilation_image_ptr[0] = Dilation_image_ptr[1] = Dilation_image_ptr[2] = 255;
							}
							Dilation_image_ptr += 3;
						}
						Dilation_image_ptr += range_byteskip;
					}
				}
				else {
					//Dilation_image_ptr[0] = 0;
					//Dilation_image_ptr[1] = 0;
					//Dilation_image_ptr[2] = 255;
				}
				//跳到下一像素
				Dilation_image_ptr = (Byte*)((void*)bd_Dilation_image->Scan0) + ((x) * 3) + ((y) * bd_screenshot->Stride);
				screenshot_ptr += 3;
				Dilation_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			Dilation_image_ptr += Dilation_image_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Dilation_image->UnlockBits(bd_Dilation_image);
		//顯示output於pictureBox1
		output_image = Dilation_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Morphological_Erosion(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Erosion_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Erosion_image = Erosion_image->LockBits(Rectangle(0, 0, Erosion_image->Width, Erosion_image->Height), ImageLockMode::ReadWrite, Erosion_image->PixelFormat);
		int Erosion_image_byteskip = bd_Erosion_image->Stride - bd_Erosion_image->Width * 3;
		Byte* Erosion_image_ptr = (Byte*)((void*)bd_Erosion_image->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		int r = (int)numericUpDown20->Value;
		int hei = (int)numericUpDown18->Value;
		int wid = (int)numericUpDown19->Value;
		if (checkBox1->Checked) {
			hei = r;
			wid = r;
		}
		//預設圖片是全黑 要把圖片刷白
		for (int iy = 0; iy < bd_screenshot->Height; iy++) {
			for (int ix = 0; ix < bd_screenshot->Width; ix++) {
				Erosion_image_ptr[0] = Erosion_image_ptr[1] = Erosion_image_ptr[2] = 255;
				Erosion_image_ptr += 3;
			}
			Erosion_image_ptr += Erosion_image_byteskip;
		}
		Erosion_image_ptr = (Byte*)((void*)bd_Erosion_image->Scan0);
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_screenshot->Width <= (x + wid)) {
					end_x_range = bd_screenshot->Width - x;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_screenshot->Height <= (y + hei)) {
					end_y_range = bd_screenshot->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				//------------------------------------------------------------
				if (screenshot_ptr[0] == 0) {
					//Erosion_image_ptr[0] = Erosion_image_ptr[1] = Erosion_image_ptr[2] = 255;
					Erosion_image_ptr = (Byte*)((void*)bd_Erosion_image->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_screenshot->Stride);
					int range_byteskip = (bd_Erosion_image->Stride - bd_Erosion_image->Width * 3) + ((bd_screenshot->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + s)), 2) + pow(abs(y - ((y - start_y_range) + d)), 2))) {
								//if (pow(r, 2) >= (pow(abs(s - r), 2) + pow(abs(d - r), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Erosion_image_ptr[0] = Erosion_image_ptr[1] = Erosion_image_ptr[2] = 0;
								}
							}
							else {
								Erosion_image_ptr[0] = Erosion_image_ptr[1] = Erosion_image_ptr[2] = 0;
							}
							Erosion_image_ptr += 3;
						}
						Erosion_image_ptr += range_byteskip;
					}
				}
				else {
					//Erosion_image_ptr[0] = 0;
					//Erosion_image_ptr[1] = 0;
					//Erosion_image_ptr[2] = 255;
				}
				//跳到下一像素
				Erosion_image_ptr = (Byte*)((void*)bd_Erosion_image->Scan0) + ((x) * 3) + ((y)*bd_screenshot->Stride);
				screenshot_ptr += 3;
				Erosion_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			Erosion_image_ptr += Erosion_image_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Erosion_image->UnlockBits(bd_Erosion_image);
		//顯示output於pictureBox1
		output_image = Erosion_image;
		pictureBox4->Image = output_image;
	}
	private: System::Void Morphological_Opening(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Opening_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Opening_image = Opening_image->LockBits(Rectangle(0, 0, Opening_image->Width, Opening_image->Height), ImageLockMode::ReadWrite, Opening_image->PixelFormat);
		int Opening_image_byteskip = bd_Opening_image->Stride - bd_Opening_image->Width * 3;
		Byte* Opening_image_ptr = (Byte*)((void*)bd_Opening_image->Scan0);

		Bitmap^ Opening_image2 = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Opening_image2 = Opening_image2->LockBits(Rectangle(0, 0, Opening_image2->Width, Opening_image2->Height), ImageLockMode::ReadWrite, Opening_image2->PixelFormat);
		int Opening_image2_byteskip = bd_Opening_image2->Stride - bd_Opening_image2->Width * 3;
		Byte* Opening_image2_ptr = (Byte*)((void*)bd_Opening_image2->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);

		int r = (int)numericUpDown20->Value;
		int hei = (int)numericUpDown18->Value;
		int wid = (int)numericUpDown19->Value;
		if(checkBox1->Checked){
			hei = r;
			wid = r;
		}
		//把圖片刷白
		for (int iy = 0; iy < bd_screenshot->Height; iy++) {
			for (int ix = 0; ix < bd_screenshot->Width; ix++) {
				Opening_image_ptr[0] = Opening_image_ptr[1] = Opening_image_ptr[2] = 255;
				Opening_image_ptr += 3;
			}
			Opening_image_ptr += Opening_image_byteskip;
		}
		Opening_image_ptr = (Byte*)((void*)bd_Opening_image->Scan0);
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_screenshot->Width <= (x + wid)) {
					end_x_range = bd_screenshot->Width - x;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_screenshot->Height <= (y + hei)) {
					end_y_range = bd_screenshot->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				//------------------------------------------------------------
				if (screenshot_ptr[0] == 0) {
					//Opening_image_ptr[0] = Opening_image_ptr[1] = Opening_image_ptr[2] = 255;
					Opening_image_ptr = (Byte*)((void*)bd_Opening_image->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_screenshot->Stride);
					int range_byteskip = (bd_Opening_image->Stride - bd_Opening_image->Width * 3) + ((bd_screenshot->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							//if (pow(r, 2) >= (pow(abs(s - r), 2) + pow(abs(d - r), 2))){
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + s)), 2) + pow(abs(y - ((y - start_y_range) + d)), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Opening_image_ptr[0] = Opening_image_ptr[1] = Opening_image_ptr[2] = 0;
								}
							}
							else {
								Opening_image_ptr[0] = Opening_image_ptr[1] = Opening_image_ptr[2] = 0;
							}
							Opening_image_ptr += 3;
						}
						Opening_image_ptr += range_byteskip;
					}
				}
				else {
					//Opening_image_ptr[0] = 0;
					//Opening_image_ptr[1] = 0;
					//Opening_image_ptr[2] = 255;
				}
				//跳到下一像素
				Opening_image_ptr = (Byte*)((void*)bd_Opening_image->Scan0) + ((x) * 3) + ((y)*bd_screenshot->Stride);
				screenshot_ptr += 3;
				Opening_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			Opening_image_ptr += Opening_image_byteskip;
		}
		screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Opening_image_ptr = (Byte*)((void*)bd_Opening_image->Scan0);

		//把圖片刷黑
		for (int iy = 0; iy < bd_Opening_image->Height; iy++) {
			for (int ix = 0; ix < bd_Opening_image->Width; ix++) {
				Opening_image2_ptr[0] = Opening_image2_ptr[1] = Opening_image2_ptr[2] = 0;
				Opening_image2_ptr += 3;
			}
			Opening_image2_ptr += Opening_image2_byteskip;
		}
		Opening_image2_ptr = (Byte*)((void*)bd_Opening_image2->Scan0);
		for (int y = 0; y < bd_Opening_image->Height; y++) {
			for (int x = 0; x < bd_Opening_image->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_Opening_image->Width <= (x + wid)) {
					end_x_range = bd_Opening_image->Width - x;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_Opening_image->Height <= (y + hei)) {
					end_y_range = bd_Opening_image->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				if (Opening_image_ptr[0] == 255) {
					//Opening_image2_ptr[0] = Opening_image2_ptr[1] = Opening_image2_ptr[2] = 255;
					Opening_image2_ptr = (Byte*)((void*)bd_Opening_image2->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_Opening_image->Stride);
					int range_byteskip = (bd_Opening_image2->Stride - bd_Opening_image2->Width * 3) + ((bd_Opening_image->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							//if (pow(r, 2) >= (pow(abs(s - r), 2) + pow(abs(d - r), 2))){
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + s)), 2) + pow(abs(y - ((y - start_y_range) + d)), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Opening_image2_ptr[0] = Opening_image2_ptr[1] = Opening_image2_ptr[2] = 255;
								}
							}
							else {
								Opening_image2_ptr[0] = Opening_image2_ptr[1] = Opening_image2_ptr[2] = 255;
							}
							Opening_image2_ptr += 3;
						}
						Opening_image2_ptr += range_byteskip;
					}
				}
				else {
					//Opening_image2_ptr[0] = Opening_image2_ptr[1] = Opening_image2_ptr[2] = 0;
				}
				//跳到下一像素
				Opening_image2_ptr = (Byte*)((void*)bd_Opening_image2->Scan0) + ((x) * 3) + ((y)*bd_Opening_image->Stride);
				Opening_image_ptr += 3;
				Opening_image2_ptr += 3;
			}
			//捨棄非必要資訊
			Opening_image_ptr += Opening_image_byteskip;
			Opening_image2_ptr += Opening_image2_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Opening_image->UnlockBits(bd_Opening_image);
		Opening_image2->UnlockBits(bd_Opening_image2);
		//顯示output於pictureBox1
		output_image = Opening_image2;
		pictureBox4->Image = output_image;
	}
	private: System::Void Morphological_Closing(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Closing_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Closing_image = Closing_image->LockBits(Rectangle(0, 0, Closing_image->Width, Closing_image->Height), ImageLockMode::ReadWrite, Closing_image->PixelFormat);
		int Closing_image_byteskip = bd_Closing_image->Stride - bd_Closing_image->Width * 3;
		Byte* Closing_image_ptr = (Byte*)((void*)bd_Closing_image->Scan0);

		Bitmap^ Closing_image2 = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Closing_image2 = Closing_image2->LockBits(Rectangle(0, 0, Closing_image2->Width, Closing_image2->Height), ImageLockMode::ReadWrite, Closing_image2->PixelFormat);
		int Closing_image2_byteskip = bd_Closing_image2->Stride - bd_Closing_image2->Width * 3;
		Byte* Closing_image2_ptr = (Byte*)((void*)bd_Closing_image2->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		int r = (int)numericUpDown20->Value;
		int hei = (int)numericUpDown18->Value;
		int wid = (int)numericUpDown19->Value;
		if (checkBox1->Checked) {
			hei = r;
			wid = r;
		}
		//把圖片刷黑
		for (int iy = 0; iy < bd_screenshot->Height; iy++) {
			for (int ix = 0; ix < bd_screenshot->Width; ix++) {
				Closing_image_ptr[0] = Closing_image_ptr[1] = Closing_image_ptr[2] = 0;
				Closing_image_ptr += 3;
			}
			Closing_image_ptr += Closing_image_byteskip;
		}
		Closing_image_ptr = (Byte*)((void*)bd_Closing_image->Scan0);
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_screenshot->Width <= (x + wid)) {
					end_x_range = bd_screenshot->Width - x;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_screenshot->Height <= (y + hei)) {
					end_y_range = bd_screenshot->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				if (screenshot_ptr[0] == 255) {
					//Closing_image_ptr[0] = Closing_image_ptr[1] = Closing_image_ptr[2] = 255;
					Closing_image_ptr = (Byte*)((void*)bd_Closing_image->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_screenshot->Stride);
					int range_byteskip = (bd_Closing_image->Stride - bd_Closing_image->Width * 3) + ((bd_screenshot->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							//if (pow(r, 2) >= (pow(abs(s - r), 2) + pow(abs(d - r), 2))){
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + s)), 2) + pow(abs(y - ((y - start_y_range) + d)), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Closing_image_ptr[0] = Closing_image_ptr[1] = Closing_image_ptr[2] = 255;
								}
							}
							else {
								Closing_image_ptr[0] = Closing_image_ptr[1] = Closing_image_ptr[2] = 255;
							}
							Closing_image_ptr += 3;
						}
						Closing_image_ptr += range_byteskip;
					}
				}
				else {
					//Closing_image_ptr[0] = Closing_image_ptr[1] = Closing_image_ptr[2] = 0;
				}
				//跳到下一像素
				Closing_image_ptr = (Byte*)((void*)bd_Closing_image->Scan0) + ((x) * 3) + ((y)*bd_screenshot->Stride);
				screenshot_ptr += 3;
				Closing_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			Closing_image_ptr += Closing_image_byteskip;
		}
		screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		Closing_image_ptr = (Byte*)((void*)bd_Closing_image->Scan0);
		//把圖片刷白
		for (int iy = 0; iy < bd_Closing_image->Height; iy++) {
			for (int ix = 0; ix < bd_Closing_image->Width; ix++) {
				Closing_image2_ptr[0] = Closing_image2_ptr[1] = Closing_image2_ptr[2] = 255;
				Closing_image2_ptr += 3;
			}
			Closing_image2_ptr += Closing_image2_byteskip;
		}
		Closing_image2_ptr = (Byte*)((void*)bd_Closing_image2->Scan0);
		for (int y = 0; y < bd_Closing_image->Height; y++) {
			for (int x = 0; x < bd_Closing_image->Width; x++) {
				int start_x_range, start_y_range, end_x_range, end_y_range;
				if (wid >= x) {
					start_x_range = x;
				}
				else {
					start_x_range = wid;
				}
				if (hei >= y) {
					start_y_range = y;
				}
				else {
					start_y_range = hei;
				}
				if (bd_Closing_image->Width <= (x + wid)) {
					end_x_range = bd_Closing_image->Width - x;
				}
				else {
					end_x_range = wid + 1;
				}
				if (bd_Closing_image->Height <= (y + hei)) {
					end_y_range = bd_Closing_image->Height - y;
				}
				else {
					end_y_range = hei + 1;
				}
				//------------------------------------------------------------
				if (Closing_image_ptr[0] == 0) {
					//Closing_image2_ptr[0] = Closing_image2_ptr[1] = Closing_image2_ptr[2] = 255;
					Closing_image2_ptr = (Byte*)((void*)bd_Closing_image2->Scan0) + ((x - start_x_range) * 3) + ((y - start_y_range) * bd_Closing_image->Stride);
					int range_byteskip = (bd_Closing_image2->Stride - bd_Closing_image2->Width * 3) + ((bd_Closing_image->Width - start_x_range - end_x_range) * 3);
					for (int y_range = 0; y_range < (start_y_range + end_y_range); y_range++) {
						for (int x_range = 0; x_range < (start_x_range + end_x_range); x_range++) {
							//if (pow(r, 2) >= (pow(abs(s - r), 2) + pow(abs(d - r), 2))){
							if (checkBox1->Checked) {
								//if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + s)), 2) + pow(abs(y - ((y - start_y_range) + d)), 2))) {
								if (pow(r, 2) >= (pow(abs(x - ((x - start_x_range) + x_range)), 2) + pow(abs(y - ((y - start_y_range) + y_range)), 2))) {
									Closing_image2_ptr[0] = Closing_image2_ptr[1] = Closing_image2_ptr[2] = 0;
								}
							}
							else {
								Closing_image2_ptr[0] = Closing_image2_ptr[1] = Closing_image2_ptr[2] = 0;
							}
							Closing_image2_ptr += 3;
						}
						Closing_image2_ptr += range_byteskip;
					}
				}
				else {
					//Closing_image2_ptr[0] = 0;
					//Closing_image2_ptr[1] = 0;
					//Closing_image2_ptr[2] = 255;
				}
				//跳到下一像素
				Closing_image2_ptr = (Byte*)((void*)bd_Closing_image2->Scan0) + ((x) * 3) + ((y)*bd_Closing_image->Stride);
				Closing_image_ptr += 3;
				Closing_image2_ptr += 3;
			}
			//捨棄非必要資訊
			Closing_image_ptr += Closing_image_byteskip;
			Closing_image2_ptr += Closing_image2_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Closing_image->UnlockBits(bd_Closing_image);
		Closing_image2->UnlockBits(bd_Closing_image2);
		//顯示output於pictureBox1
		output_image = Closing_image2;
		pictureBox4->Image = output_image;
	}
	private: System::Void Binarize_Exchange(System::Object^ sender, System::EventArgs^ e) {
		if (screenshot == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		Bitmap^ Binarize_Exchange_image = gcnew Bitmap(screenshot->Width, screenshot->Height, screenshot->PixelFormat);
		BitmapData^ bd_Binarize_Exchange_image = Binarize_Exchange_image->LockBits(Rectangle(0, 0, Binarize_Exchange_image->Width, Binarize_Exchange_image->Height), ImageLockMode::ReadWrite, Binarize_Exchange_image->PixelFormat);
		int Binarize_Exchange_image_byteskip = bd_Binarize_Exchange_image->Stride - bd_Binarize_Exchange_image->Width * 3;
		Byte* Binarize_Exchange_image_ptr = (Byte*)((void*)bd_Binarize_Exchange_image->Scan0);

		BitmapData^ bd_screenshot = screenshot->LockBits(Rectangle(0, 0, screenshot->Width, screenshot->Height), ImageLockMode::ReadWrite, screenshot->PixelFormat);
		int screenshot_byteskip = bd_screenshot->Stride - bd_screenshot->Width * 3;
		Byte* screenshot_ptr = (Byte*)((void*)bd_screenshot->Scan0);
		for (int y = 0; y < bd_screenshot->Height; y++) {
			for (int x = 0; x < bd_screenshot->Width; x++) {
				if (screenshot_ptr[0] == 255) {
					Binarize_Exchange_image_ptr[0] = Binarize_Exchange_image_ptr[1] = Binarize_Exchange_image_ptr[2] = 0;//0黑255白
				}
				else {
					Binarize_Exchange_image_ptr[0] = Binarize_Exchange_image_ptr[1] = Binarize_Exchange_image_ptr[2] = 255;
				}
				//跳到下一像素
				screenshot_ptr += 3;
				Binarize_Exchange_image_ptr += 3;
			}
			//捨棄非必要資訊
			screenshot_ptr += screenshot_byteskip;
			Binarize_Exchange_image_ptr += Binarize_Exchange_image_byteskip;
		}

		//Unlock Memory 以便顯示
		screenshot->UnlockBits(bd_screenshot);
		Binarize_Exchange_image->UnlockBits(bd_Binarize_Exchange_image);
		//顯示output於pictureBox1
		output_image = Binarize_Exchange_image;
		pictureBox4->Image = output_image;
	}
};
}