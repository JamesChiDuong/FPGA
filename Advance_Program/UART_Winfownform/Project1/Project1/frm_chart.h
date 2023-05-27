#pragma once
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for frm_chart
	/// </summary>
	public ref class frm_chart : public System::Windows::Forms::Form
	{

	public:
		frm_chart(void)
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
		~frm_chart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Syntax";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(481, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 57);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Function";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(291, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"TIMER-duty-frequency-NumberOfTimer-NumberOfChannel";
			this->label3->Click += gcnew System::EventHandler(this, &frm_chart::label3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::LightYellow;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.16064F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.83936F)));
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 109);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(660, 189);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(309, 147);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(312, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"- To control trigger ADC at the middle PWM";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"PWMBYSIGNAL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(309, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(309, 40);
			this->label6->TabIndex = 5;
			this->label6->Text = L"- To set up the low pass filter and samping frequency of ADC Module";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ADC-cutoff-sampling";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(309, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(322, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"- To set up these parameter of Timer Module";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(309, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(257, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"- To control ADC follow PWM signal";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"MIDDLE";
			// 
			// frm_chart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 698);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"frm_chart";
			this->Text = L"frm_chart";
			this->Load += gcnew System::EventHandler(this, &frm_chart::frm_chart_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLoad_frmChart_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void frm_chart_Load(System::Object^ sender, System::EventArgs^ e) {
		//chartVoltage->Series["Voltage"]->Points->AddXY("RawVoltage1", 1000);
		//chartVoltage->Series["Voltage"]->Points->AddXY("RawVoltage2", 4000);
		//chartVoltage->Series["Voltage"]->Points->AddXY("RawVoltage3", 7000);
		//chartVoltage->Series["Voltage"]->Points->AddXY("RawVoltage4", 9000);
	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
