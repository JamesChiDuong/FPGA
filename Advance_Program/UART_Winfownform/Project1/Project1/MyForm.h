#pragma once
#include <string>
#include "frm_chart.h"
#include "HTTPSERVER.h"
#define LENGTH  50
#define OUTPUTVOLTAGE "OutputVoltage"
#define OUTPUTCURRENT "OutputCurrent"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array<double>^ Voltage_Y_Value;
		array<double>^ Voltage_X_Value;

		array<double>^ Current_X_Value;
		array<double>^ Current_Y_Value;;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Voltage_X_Value = gcnew array<double>(LENGTH);
			Voltage_Y_Value = gcnew array<double>(LENGTH);

			Current_X_Value = gcnew array<double>(LENGTH);
			Current_Y_Value = gcnew array<double>(LENGTH);

			void setText(String ^text);
		}
	private: delegate void SetTextCallback(String^ text);
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbSerialPort;
	private: System::Windows::Forms::ComboBox^ cbBaudRatePort;
	private: System::Windows::Forms::Button^ btnConnect;


	private: System::Windows::Forms::Button^ btnSendTimer;

	private: System::IO::Ports::SerialPort^ sp;
	private: System::Windows::Forms::TextBox^ tbRead;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_HTTPServer;

	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartVoltage;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCurrent;
	private: System::Windows::Forms::TextBox^ tbDuty;
	private: System::Windows::Forms::TextBox^ tbfrequency;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbNumberOfTimer;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbNumberOfChannel;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbCutOff;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbSamplingFrequency;

	private: System::Windows::Forms::Button^ btnADCSend;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnMiddle;
	private: System::Windows::Forms::Button^ btnPWMSIGNAL;








	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->sp = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbSerialPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaudRatePort = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->btnSendTimer = (gcnew System::Windows::Forms::Button());
			this->tbRead = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_HTTPServer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chartVoltage = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartCurrent = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tbDuty = (gcnew System::Windows::Forms::TextBox());
			this->tbfrequency = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbNumberOfTimer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbNumberOfChannel = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbSamplingFrequency = (gcnew System::Windows::Forms::TextBox());
			this->tbCutOff = (gcnew System::Windows::Forms::TextBox());
			this->btnADCSend = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnMiddle = (gcnew System::Windows::Forms::Button());
			this->btnPWMSIGNAL = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVoltage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCurrent))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// sp
			// 
			this->sp->BaudRate = 115200;
			this->sp->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::sp_DataReceived);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Serial Port";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Baud Rate";
			// 
			// cbSerialPort
			// 
			this->cbSerialPort->FormattingEnabled = true;
			this->cbSerialPort->Location = System::Drawing::Point(133, 81);
			this->cbSerialPort->Name = L"cbSerialPort";
			this->cbSerialPort->Size = System::Drawing::Size(121, 28);
			this->cbSerialPort->TabIndex = 2;
			// 
			// cbBaudRatePort
			// 
			this->cbBaudRatePort->FormattingEnabled = true;
			this->cbBaudRatePort->Location = System::Drawing::Point(133, 120);
			this->cbBaudRatePort->Name = L"cbBaudRatePort";
			this->cbBaudRatePort->Size = System::Drawing::Size(121, 28);
			this->cbBaudRatePort->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(133, 154);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(121, 30);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// btnSendTimer
			// 
			this->btnSendTimer->Location = System::Drawing::Point(6, 165);
			this->btnSendTimer->Name = L"btnSendTimer";
			this->btnSendTimer->Size = System::Drawing::Size(121, 30);
			this->btnSendTimer->TabIndex = 7;
			this->btnSendTimer->Text = L"Send";
			this->btnSendTimer->UseVisualStyleBackColor = true;
			this->btnSendTimer->Click += gcnew System::EventHandler(this, &MyForm::btnSend_Click);
			// 
			// tbRead
			// 
			this->tbRead->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->tbRead->Location = System::Drawing::Point(10, 184);
			this->tbRead->Multiline = true;
			this->tbRead->Name = L"tbRead";
			this->tbRead->ReadOnly = true;
			this->tbRead->Size = System::Drawing::Size(650, 191);
			this->tbRead->TabIndex = 8;
			this->tbRead->TextChanged += gcnew System::EventHandler(this, &MyForm::tbRead_TextChanged_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1466, 33);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsm_HTTPServer });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(54, 29);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// tsm_HTTPServer
			// 
			this->tsm_HTTPServer->Name = L"tsm_HTTPServer";
			this->tsm_HTTPServer->Size = System::Drawing::Size(209, 34);
			this->tsm_HTTPServer->Text = L"HTTP Server";
			this->tsm_HTTPServer->Click += gcnew System::EventHandler(this, &MyForm::uARTModeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(507, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(499, 51);
			this->label3->TabIndex = 10;
			this->label3->Text = L"CLLC Control and Monitor";
			// 
			// chartVoltage
			// 
			this->chartVoltage->BackColor = System::Drawing::Color::MistyRose;
			chartArea1->Name = L"ChartArea1";
			this->chartVoltage->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartVoltage->Legends->Add(legend1);
			this->chartVoltage->Location = System::Drawing::Point(710, 82);
			this->chartVoltage->Name = L"chartVoltage";
			this->chartVoltage->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::MediumBlue;
			series1->LabelForeColor = System::Drawing::Color::Transparent;
			series1->Legend = L"Legend1";
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series1->Name = L"Output Voltage";
			this->chartVoltage->Series->Add(series1);
			this->chartVoltage->Size = System::Drawing::Size(724, 380);
			this->chartVoltage->SuppressExceptions = true;
			this->chartVoltage->TabIndex = 13;
			this->chartVoltage->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Output Voltage";
			this->chartVoltage->Titles->Add(title1);
			// 
			// chartCurrent
			// 
			this->chartCurrent->BackColor = System::Drawing::Color::Linen;
			this->chartCurrent->BorderlineColor = System::Drawing::Color::Black;
			chartArea2->Name = L"ChartArea1";
			this->chartCurrent->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartCurrent->Legends->Add(legend2);
			this->chartCurrent->Location = System::Drawing::Point(710, 468);
			this->chartCurrent->Name = L"chartCurrent";
			this->chartCurrent->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series2->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::BackwardDiagonal;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series2->Name = L"Output Current";
			this->chartCurrent->Series->Add(series2);
			this->chartCurrent->Size = System::Drawing::Size(724, 379);
			this->chartCurrent->TabIndex = 14;
			this->chartCurrent->Text = L"chart2";
			title2->Name = L"Title1";
			title2->Text = L"Output Current";
			this->chartCurrent->Titles->Add(title2);
			// 
			// tbDuty
			// 
			this->tbDuty->Location = System::Drawing::Point(6, 6);
			this->tbDuty->Name = L"tbDuty";
			this->tbDuty->Size = System::Drawing::Size(121, 26);
			this->tbDuty->TabIndex = 15;
			// 
			// tbfrequency
			// 
			this->tbfrequency->Location = System::Drawing::Point(6, 51);
			this->tbfrequency->Name = L"tbfrequency";
			this->tbfrequency->Size = System::Drawing::Size(121, 26);
			this->tbfrequency->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 423);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Duty Cycle";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(55, 471);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Frequency";
			// 
			// tbNumberOfTimer
			// 
			this->tbNumberOfTimer->Location = System::Drawing::Point(6, 90);
			this->tbNumberOfTimer->Name = L"tbNumberOfTimer";
			this->tbNumberOfTimer->Size = System::Drawing::Size(121, 26);
			this->tbNumberOfTimer->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 510);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Number of Timer";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(53, 378);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(242, 33);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Timer Configuration";
			// 
			// tbNumberOfChannel
			// 
			this->tbNumberOfChannel->Location = System::Drawing::Point(6, 128);
			this->tbNumberOfChannel->Name = L"tbNumberOfChannel";
			this->tbNumberOfChannel->Size = System::Drawing::Size(121, 26);
			this->tbNumberOfChannel->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 551);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 20);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Number of Channel";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.79747F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.20253F)));
			this->tableLayoutPanel1->Controls->Add(this->tbSamplingFrequency, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tbCutOff, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbDuty, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbfrequency, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tbNumberOfChannel, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->tbNumberOfTimer, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnSendTimer, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->btnADCSend, 1, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(154, 417);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.42466F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.57534F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(288, 205);
			this->tableLayoutPanel1->TabIndex = 24;
			// 
			// tbSamplingFrequency
			// 
			this->tbSamplingFrequency->Location = System::Drawing::Point(159, 51);
			this->tbSamplingFrequency->Name = L"tbSamplingFrequency";
			this->tbSamplingFrequency->Size = System::Drawing::Size(121, 26);
			this->tbSamplingFrequency->TabIndex = 24;
			// 
			// tbCutOff
			// 
			this->tbCutOff->Location = System::Drawing::Point(159, 6);
			this->tbCutOff->Name = L"tbCutOff";
			this->tbCutOff->Size = System::Drawing::Size(121, 26);
			this->tbCutOff->TabIndex = 23;
			// 
			// btnADCSend
			// 
			this->btnADCSend->Location = System::Drawing::Point(159, 165);
			this->btnADCSend->Name = L"btnADCSend";
			this->btnADCSend->Size = System::Drawing::Size(121, 30);
			this->btnADCSend->TabIndex = 25;
			this->btnADCSend->Text = L"Send";
			this->btnADCSend->UseVisualStyleBackColor = true;
			this->btnADCSend->Click += gcnew System::EventHandler(this, &MyForm::btnADCSend_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(306, 378);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(236, 33);
			this->label9->TabIndex = 25;
			this->label9->Text = L"ADC Configuration";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(448, 426);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Cut Off Frequency";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(448, 474);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 20);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Sampling Frequency";
			// 
			// btnMiddle
			// 
			this->btnMiddle->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnMiddle->Location = System::Drawing::Point(448, 495);
			this->btnMiddle->Name = L"btnMiddle";
			this->btnMiddle->Size = System::Drawing::Size(100, 49);
			this->btnMiddle->TabIndex = 28;
			this->btnMiddle->Text = L"MIDDLE";
			this->btnMiddle->UseVisualStyleBackColor = false;
			this->btnMiddle->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnPWMSIGNAL
			// 
			this->btnPWMSIGNAL->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnPWMSIGNAL->Location = System::Drawing::Point(558, 495);
			this->btnPWMSIGNAL->Name = L"btnPWMSIGNAL";
			this->btnPWMSIGNAL->Size = System::Drawing::Size(146, 50);
			this->btnPWMSIGNAL->TabIndex = 29;
			this->btnPWMSIGNAL->Text = L"PWMBYSIGNAL";
			this->btnPWMSIGNAL->UseVisualStyleBackColor = false;
			this->btnPWMSIGNAL->Click += gcnew System::EventHandler(this, &MyForm::btnPWMSIGNAL_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1466, 859);
			this->Controls->Add(this->btnPWMSIGNAL);
			this->Controls->Add(this->btnMiddle);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chartCurrent);
			this->Controls->Add(this->chartVoltage);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbRead);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaudRatePort);
			this->Controls->Add(this->cbSerialPort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UART";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::tbRead_TextChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVoltage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCurrent))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void setText(String^ text)
		{
			static int Voltage_index;
			static int Voltage_index_y = 1;
			static int Voltage_index_x = 1;

			static int Current_index;
			static int Current_index_y = 1;
			static int Current_index_x = 1;
			String^ Voltage_data;
			String^ Current_data;
		//	chartVoltage->Series["Output Voltage"]->Points->DataBindY("20");
			if (this->tbRead->InvokeRequired)
			{
				SetTextCallback^ d = gcnew SetTextCallback(this, &MyForm::setText);
				this->Invoke(d, gcnew array<Object^>{text });
			}
			else
			{
				//	tbRead->AppendText("\n" + text );
				if (text->Compare(text,0,OUTPUTVOLTAGE,0,12) == 0)
				{
					Voltage_data = text->Substring(14);

					Voltage_X_Value[Voltage_index_x] = Voltage_X_Value[Voltage_index_x -1] + 1;
					Voltage_Y_Value[0] = double::Parse(Voltage_data);
					if (Voltage_index < LENGTH-2)
					{
						Voltage_index = Voltage_index + 1;
						Voltage_index_y++;
						Voltage_index_x++;
					}
					else
					{
						Voltage_index = 0;
						Voltage_index_y = 1;
						Voltage_index_x = 1;
						
					}
					for (int i = Voltage_index; i >= 1; i--)
					{
						Voltage_Y_Value[i] = Voltage_Y_Value[i - 1];
					}
					chartVoltage->Series["Output Voltage"]->Points->Clear();
					chartVoltage->Series["Output Voltage"]->Points->DataBindXY(Voltage_X_Value, Voltage_Y_Value);
					chartVoltage->Series["Output Voltage"]->Points->ResumeUpdates();
					chartVoltage->Series["Output Voltage"]->LegendText = "Output Voltage: " + Voltage_Y_Value[0].ToString()+ "V";
				}
				else if(text->Compare(text, 0, OUTPUTCURRENT, 0, 12) == 0)
				{
					Current_data = text->Substring(14);
					Current_X_Value[Current_index_x] = Current_X_Value[Current_index_x - 1] + 1;
					Current_Y_Value[0] = double::Parse(Current_data);
					if (Current_index < LENGTH - 2)
					{
						Current_index = Current_index + 1;
						Current_index_y++;
						Current_index_x++;
					}
					else
					{
						Current_index = 0;
						Current_index_x = 1;
						Current_index_y = 1;
					}
					for (int i = Current_index; i >= 1; i--)
					{
						Current_Y_Value[i] = Current_Y_Value[i - 1];
					}
					chartCurrent->Series["Output Current"]->Points->Clear();
					chartCurrent->Series["Output Current"]->Points->DataBindXY(Current_X_Value, Current_Y_Value);
					chartCurrent->Series["Output Current"]->Points->ResumeUpdates();
					chartCurrent->Series["Output Current"]->LegendText = "Output Current: " + Current_Y_Value[0].ToString() + "A";
				}
				else
				{
					tbRead->AppendText(text + "\r\n");
				}
				
			}
		}
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			array<Object^>^ comport = SerialPort::GetPortNames();
			cbSerialPort->Items->AddRange(comport);
			//cbSerialPort->SelectedIndex = 0;

			array<Object^>^ baudrate = { 9600,115200 };
			cbBaudRatePort->Items->AddRange(baudrate);
			cbBaudRatePort->SelectedIndex = 0;
			/*Chart Voltage*/
			chartVoltage->ChartAreas[0]->AxisX->Minimum = 0;
			chartVoltage->ChartAreas[0]->AxisX->Interval = 1;
			chartVoltage->ChartAreas[0]->AxisY->Minimum = 1300;
			chartVoltage->ChartAreas[0]->AxisY->Interval = 10;
			chartVoltage->ChartAreas[0]->AxisY->Maximum = 1370;
			/*Chart Current*/
			chartCurrent->ChartAreas[0]->AxisX->Minimum = 0;
			chartCurrent->ChartAreas[0]->AxisX->Interval = 1;
			chartCurrent->ChartAreas[0]->AxisY->Minimum = 3902;
			chartCurrent->ChartAreas[0]->AxisY->Interval = 1;
			chartCurrent->ChartAreas[0]->AxisY->Maximum = 3905;
		}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (btnConnect->Text == "Connect")
			{
				if (sp->IsOpen)
				{
					sp->Close();
				}
				sp->PortName = cbSerialPort->Text;
				sp->BaudRate = Int32::Parse(cbBaudRatePort->Text);
				sp->Open();
				btnConnect->Text = "Disconnect";
			}
			else if (btnConnect->Text == "Disconnect")
			{
				sp->Close();
				btnConnect->Text = "Connect";
			}
		}
		catch (...)
		{
			MessageBox::Show("Something is error");
		}
	}

	private: System::Void sp_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	//	String^ data = sp->ReadLine();
		setText((sp->ReadLine()));
	}
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ data;
		data = "TIMER" + "-" + tbDuty->Text + "-" + tbfrequency->Text + "-" + tbNumberOfTimer->Text + "-" + tbNumberOfChannel->Text + "\r\n";
		sp->WriteLine(data);
	//	tbRead->AppendText(tbSend->Text);
	}	
	private: System::Void tbRead_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbRead_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frm_chart^ f = gcnew frm_chart;
		f->Show();
	}
	private: System::Void btnADCSend_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ data;
		data = "ADC" + "-" + tbCutOff->Text + "-" + tbSamplingFrequency->Text + "\r\n";
		sp->WriteLine(data);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ data;
		data = "MIDDLE" + "\r\n";
		sp->WriteLine(data);
	}
	private: System::Void btnPWMSIGNAL_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ data;
		data = "PWMBYSIGNAL" + "\r\n";
		sp->WriteLine(data);
	}
	private: System::Void uARTModeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		HTTPSERVER^ f = gcnew HTTPSERVER;
		f->Show();
	}
};
}
