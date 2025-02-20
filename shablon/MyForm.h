#include <stdlib.h> 
#include<math.h>
double SVZ, VZ, VO, PS, SVO, OP, OPB, OTKAZ, TZmax, TZmin, TSmax, TSmin, MVO[1010], MPVB[1010], temp, temp2, Nbuf, Nsys, Q, S, Potk, Tbuf, A, lymda, Tsys, H, HH, PSUM,TRAB;
int BUF, m, j, i, N;
#pragma once

namespace shablon {

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
	protected:
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox3;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 4);
			this->progressBar1->Maximum = 500;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(549, 29);
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(45, 39);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(176, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(45, 65);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(176, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(45, 91);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(176, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(45, 117);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(176, 20);
			this->textBox9->TabIndex = 14;
			this->textBox9->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(45, 143);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(176, 20);
			this->textBox10->TabIndex = 15;
			this->textBox10->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(45, 169);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(176, 20);
			this->textBox11->TabIndex = 16;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(45, 195);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(176, 20);
			this->textBox12->TabIndex = 17;
			this->textBox12->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Q";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"S";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Pотк";
			this->label8->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Tпрог";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Nпрог";
			this->label9->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Nбуф";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Tбуф";
			this->label12->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Location = System::Drawing::Point(12, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(233, 264);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(42, 244);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Случаев отказа";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(42, 231);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(81, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Ушло в буфер ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 218);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Всего заявок ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(131, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Случаев отказа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(131, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Ушло в буфер ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(131, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Всего заявок ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Psum";
			this->label2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 13);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(6, 13);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(298, 34);
			this->textBox13->TabIndex = 27;
			this->textBox13->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Location = System::Drawing::Point(251, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(310, 548);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Время";
			this->groupBox2->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 53);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(298, 489);
			this->richTextBox1->TabIndex = 54;
			this->richTextBox1->Text = L"";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(169, 183);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 37;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 582);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(549, 23);
			this->button1->TabIndex = 40;
			this->button1->Text = L"старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(12, 611);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 17);
			this->checkBox1->TabIndex = 41;
			this->checkBox1->Text = L"Линейный закон";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(446, 611);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 17);
			this->checkBox2->TabIndex = 42;
			this->checkBox2->Text = L"Экспоненциальный";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 582);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(549, 23);
			this->button2->TabIndex = 43;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(188, 189);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(167, 20);
			this->textBox19->TabIndex = 44;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(188, 238);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(167, 20);
			this->textBox20->TabIndex = 45;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(188, 284);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(167, 20);
			this->textBox21->TabIndex = 46;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(188, 329);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(167, 20);
			this->textBox22->TabIndex = 47;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(172, 173);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 13);
			this->label20->TabIndex = 48;
			this->label20->Text = L"TZmin";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(172, 222);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 13);
			this->label21->TabIndex = 49;
			this->label21->Text = L"TZmax";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(172, 268);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 13);
			this->label22->TabIndex = 50;
			this->label22->Text = L"TSmin";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(172, 313);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 13);
			this->label23->TabIndex = 51;
			this->label23->Text = L"TSmax";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->textBox22);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->textBox20);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->textBox21);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Location = System::Drawing::Point(12, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox3->Size = System::Drawing::Size(549, 579);
			this->groupBox3->TabIndex = 52;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Исходные данные";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(172, 407);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(185, 13);
			this->label16->TabIndex = 55;
			this->label16->Text = L"Укажите время работы в секундах";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 423);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 54;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 359);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 13);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Укажите число буферов (max 999)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 52;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(573, 630);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Моделирование работы сервера";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 checkBox1->Visible = false;
				 checkBox2->Visible = false;
				 button1->Visible = false;
				 N = Convert::ToInt32(textBox1->Text);
				 TRAB = Convert::ToDouble(textBox3->Text);
				 for (SVZ = 0; SVZ<TRAB; SVZ += VZ)
				 {
					 VZ = (double)rand() / RAND_MAX;
					 VO = (double)rand() / RAND_MAX;
					 switch (m)
					 {
					 case 0:{
								TZmin = Convert::ToDouble(textBox19->Text);
								TZmax = Convert::ToDouble(textBox20->Text);
								TSmin = Convert::ToDouble(textBox21->Text);
								TSmax = Convert::ToDouble(textBox22->Text);
								lymda = (TZmin + TZmax) / 2;
								VZ = (TZmax - TZmin)*VZ + TZmin; VO = (TSmax - TSmin)*VO + TSmin;
					 }break;
					 case 1:{
								TZmin = Convert::ToDouble(textBox19->Text);
								TZmax = Convert::ToDouble(textBox20->Text);
								lymda = TZmin;
								TZmin = 1.0 / TZmin; VZ = -TZmin*log(VZ); TZmax = 1.0 / TZmax; TZmax = 1.0 / TZmax; VO = -TZmax*log(VO);
					 }break;
					 }
					 if (SVZ == 0){ PS += VZ; SVO = VZ + VO;goto B; }
					 if (SVZ + VZ >= TRAB){ VZ = TRAB - SVZ; }
					 if (SVZ + VZ<SVO && BUF<N){ BUF++; MVO[BUF - 1] = VO; MPVB[BUF - 1] += VZ; OPB++; }
					 else if (SVZ + VZ<SVO && BUF == N){ OTKAZ++; MPVB[BUF] += VZ;}
					 if (SVZ + VZ >= SVO)
					 {
						 MPVB[BUF] += SVO - SVZ;
						 if (BUF == 0){ PS += SVZ + VZ - SVO; SVO += VO + SVZ + VZ - SVO; goto B; }
						 do {
							 temp = SVO;
							 temp2 = MVO[0];
							 SVO += MVO[0];
							 BUF--;
							 for (int i = 0; i<N; i++)
							 {
								 MVO[i] = MVO[i + 1];
							 }
							 if (BUF == 0 && SVZ + VZ >= SVO){ MPVB[BUF] += temp2; PS += SVZ + VZ - SVO; SVO += VO + SVZ + VZ - SVO; goto B; }
							 if (BUF >= 0 && SVZ + VZ<SVO){ BUF++; MPVB[BUF - 1] += SVZ + VZ - temp; MVO[BUF - 1] = VO; OPB++; goto B; }
							 if (BUF>0 && SVZ + VZ >= SVO){ MPVB[BUF] += temp2; }
						 } while (SVZ + VZ >= SVO);
					 }
				 B:; OP++;
				 }
				 label1->Visible = false;
				 textBox1->Visible = false;
				 textBox19->Visible = false;
				 textBox20->Visible = false;
				 textBox21->Visible = false;
				 textBox22->Visible = false;
				 groupBox3->Visible = false;
				 label20->Visible = false;
				 label21->Visible = false;
				 label22->Visible = false;
				 label23->Visible = false;
				 textBox2->Visible = true;
				 textBox6->Visible = true;
				 textBox7->Visible = true;
				 textBox8->Visible = true;
				 textBox9->Visible = true;
				 textBox10->Visible = true;
				 textBox11->Visible = true;
				 textBox12->Visible = true;
				 textBox13->Visible = true;
				 label2->Visible = true;
				 label6->Visible = true;
				 label7->Visible = true;
				 label8->Visible = true;
				 label9->Visible = true;
				 label10->Visible = true;
				 label11->Visible = true;
				 label12->Visible = true;
				 label18->Visible = true;
				 groupBox1->Visible = true;
				 groupBox2->Visible = true;
				 progressBar1->Visible = true;
				 progressBar1->Maximum = N;
				 for (j = 0; j<N+1; j++)
				 {
					 if (j >= 0 && j <= 9){ richTextBox1->Text += j.ToString() + "     Программ в буфере = " + MPVB[j].ToString() + ";" + Environment::NewLine+"       Вероятность = " + (MPVB[j] /  TRAB).ToString() + ";"; }
					 if (j >= 10 && j <= 99){ richTextBox1->Text += j.ToString() + "   Программ в буфере = " + MPVB[j].ToString() + ";"+Environment::NewLine+"       Вероятность = " + (MPVB[j] /  TRAB).ToString() + ";"; }
					 if (j >= 100 && j <= 999){ richTextBox1->Text += j.ToString() + " Программ в буфере = " + MPVB[j].ToString() + ";"+Environment::NewLine+"       Вероятность = " + (MPVB[j] /  TRAB).ToString() + ";"; }
					 richTextBox1->Text += Environment::NewLine;
					 richTextBox1->Text +="=============================================";
					 richTextBox1->Text += Environment::NewLine;
					 progressBar1->Value = j;
				 }
				 label3->Text =OP.ToString();
				 label4->Text =OPB.ToString();
				 label5->Text =OTKAZ.ToString();
				 Potk = MPVB[N] / TRAB;
				 Q = 1 - Potk;
				 A = Q*lymda;
				 textBox13->Text = "       Простой сервера = " + PS.ToString() + ";" + Environment::NewLine +  "       Вероятность = " + (PS /  TRAB).ToString();
				 textBox6->Text = Q.ToString();
				 textBox7->Text = A.ToString();
				 i = 1;
				 for (j = 0; j <= N; j++)
				 {
					 H = MPVB[j] * i;
					 HH += H;
					 i++;
				 }Tsys = HH / (OP-OTKAZ); HH = 0; H = 0;
				 textBox10->Text = Tsys.ToString();//((MPVB[0]+MPVB[1]*2+MPVB[2]*3+MPVB[3]*4)/OP)
				 textBox8->Text = Potk.ToString();
				 i = 1;
				 for (j = 0; j <= N; j++)
				 {
					 H = (i*MPVB[j]) / TRAB;
					 HH += H;
					 i++;
				 }Nsys = HH; HH = 0; H = 0;
				 textBox9->Text = Nsys.ToString();//((MPVB[0]/3600)+((MPVB[1]/3600)*2)+((MPVB[2]/3600)*3)+((MPVB[3]/3600)*4))
				 for (j = 0; j <= N; j++)
				 {
					 H = (MPVB[j] / TRAB)*j;
					 HH += H;
				 }Nbuf = HH; HH = 0; H = 0;
				 textBox11->Text = Nbuf.ToString();//((MPVB[1]/3600)+((MPVB[2]/3600)*2)+((MPVB[3]/3600)*3))
				 //s=(MPVB[1]+(MPVB[2]*2)+(MPVB[3]*3))/OP;
				 for (j = 0; j <= N; j++)
				 {
					 H = MPVB[j] * j;
					 HH += H;
				 }Tbuf = HH / OPB; HH = 0; H = 0;
				 textBox12->Text = Tbuf.ToString();
				 for (j = 0; j <= N; j++)
				 {
					 PSUM += MPVB[j] / TRAB;
				 }PSUM += PS / TRAB;
				 textBox2->Text = PSUM.ToString();
				 button2->Visible = true;
	}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox1->Checked == true){
				 checkBox2->Checked = false; m = 0;
				 textBox19->Text = "";
				 textBox20->Text = "";
				 label20->Text = "TZmin";
				 label21->Text = "TZmax";
				 label22->Visible = true;
				 label23->Visible = true;
				 textBox21->Visible = true;
				 textBox22->Visible = true;
			 }
			 if (checkBox1->Checked == false){
				 checkBox2->Checked = true; m = 1;
				 textBox19->Text = "";
				 textBox20->Text = "";
				 textBox21->Text = "";
				 textBox22->Text = "";
				 label20->Text = "Частота поступления заявок";
				 label21->Text = "Среднее время обработки";
				 label22->Visible = false;
				 label23->Visible = false;
				 textBox21->Visible = false;
				 textBox22->Visible = false;
			 }
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
			 if (checkBox2->Checked == true){
				 checkBox1->Checked = false; m = 1;
				 textBox19->Text = "";
				 textBox20->Text = "";
				 textBox21->Text = "";
				 textBox22->Text = "";
				 label20->Text = "Частота поступления заявок";
				 label21->Text = "Среднее время обработки";
				 label22->Visible = false;
				 label23->Visible = false;
				 textBox21->Visible = false;
				 textBox22->Visible = false;
			 }
			 if (checkBox2->Checked == false){
				 checkBox1->Checked = true; m = 0;
				 textBox19->Text = "";
				 textBox20->Text = "";
				 label20->Text = "TZmin";
				 label21->Text = "TZmax";
				 label22->Visible = true;
				 label23->Visible = true;
				 textBox21->Visible = true;
				 textBox22->Visible = true;
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
			 checkBox1->Visible = true;
			 checkBox2->Visible = true;
			 progressBar1->Visible = false;
			 button1->Visible = true;
			 button2->Visible = false;
			 SVZ = 0; VZ = 0; VO = 0; PS = 0; SVO = 0; OP = 0; OPB = 0; OTKAZ = 0; BUF = 0; richTextBox1->Text = ""; Tbuf = 0, Tsys = 0; Nbuf = 0; Nsys = 0; A = 0; Q = 0, Potk = 0; lymda = 0; PSUM = 0;

			 for (j = 0; j<1010; j++)
			 {
				 MVO[j] = 0; MPVB[j] = 0;
			 }
			 textBox2->Visible = false;
			 textBox6->Visible = false;
			 textBox7->Visible = false;
			 textBox8->Visible = false;
			 textBox9->Visible = false;
			 textBox10->Visible = false;
			 textBox11->Visible = false;
			 textBox12->Visible = false;
			 textBox13->Visible = false;
			 label2->Visible = false;
			 label6->Visible = false;
			 label7->Visible = false;
			 label8->Visible = false;
			 label9->Visible = false;
			 label10->Visible = false;
			 label11->Visible = false;
			 label12->Visible = false;
			 label18->Visible = false;
			 groupBox1->Visible = false;
			 groupBox2->Visible = false;
			 textBox19->Visible = true;
			 textBox20->Visible = true;
			 groupBox3->Visible = true;
			 label20->Visible = true;
			 label21->Visible = true;
			 textBox1->Visible = true;
			 label1->Visible = true;
			 if (m == 0)
			 {
				 textBox21->Visible = true;
				 textBox22->Visible = true;
				 label22->Visible = true;
				 label23->Visible = true;
			 }
}

	};
}
