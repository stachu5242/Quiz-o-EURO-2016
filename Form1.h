#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Powitanie;
	protected:
	private: System::Windows::Forms::Label^  Pytanie;
	private: System::Windows::Forms::Label^  Q1;
	private: System::Windows::Forms::Label^  Q2;
	private: System::Windows::Forms::Label^  Q3;
	private: System::Windows::Forms::Label^  Q4;
	private: System::Windows::Forms::Label^  Q5;
	private: System::Windows::Forms::Label^  Q6;
	private: System::Windows::Forms::Label^  Q7;
	private: System::Windows::Forms::Label^  Q8;
	private: System::Windows::Forms::Label^  Q9;
	private: System::Windows::Forms::Label^  Q10;
	private: System::Windows::Forms::Label^  Zo;
	private: System::Windows::Forms::Label^  Po;
	private: System::Windows::Forms::Label^  zo1;
	private: System::Windows::Forms::Label^  zo2;
	private: System::Windows::Forms::Label^  zo3;
	private: System::Windows::Forms::Label^  zo4;
	private: System::Windows::Forms::Label^  zo5;
	private: System::Windows::Forms::Label^  zo6;
	private: System::Windows::Forms::Label^  zo7;
	private: System::Windows::Forms::Label^  zo8;
	private: System::Windows::Forms::Label^  zo9;
	private: System::Windows::Forms::Label^  zo10;
	private: System::Windows::Forms::Label^  po1;
	private: System::Windows::Forms::Label^  po2;
	private: System::Windows::Forms::Label^  po3;
	private: System::Windows::Forms::Label^  po4;
	private: System::Windows::Forms::Label^  po5;
	private: System::Windows::Forms::Label^  po6;
	private: System::Windows::Forms::Label^  po7;
	private: System::Windows::Forms::Label^  po8;
	private: System::Windows::Forms::Label^  po9;
	private: System::Windows::Forms::Label^  po10;
	private: System::Windows::Forms::Button^  rozpocznij;
	private: System::Windows::Forms::Label^  wynik;
	private: int i = 0;
	private: int licznik = 0;
	//tabela zaznaczonych odpowiedzi:
	private: array<System::String^> ^zaznaczone = gcnew array<System::String^>(10);
	//tabela  pytan 0-tresc pytania, 1-odp1, 2-odp2, 3-odp3, 4-odp4, 5- prawidlowa odpowiedz
	private: array<System::String^,2> ^pytanie = gcnew array<System::String^,2>(10,6);
	//tabela kolorow:
	private: array<System::Drawing::Color> ^kolor = gcnew array<System::Drawing::Color>(10);
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
			this->Powitanie = (gcnew System::Windows::Forms::Label());
			this->Pytanie = (gcnew System::Windows::Forms::Label());
			this->Q1 = (gcnew System::Windows::Forms::Label());
			this->Q2 = (gcnew System::Windows::Forms::Label());
			this->Q3 = (gcnew System::Windows::Forms::Label());
			this->Q4 = (gcnew System::Windows::Forms::Label());
			this->Q5 = (gcnew System::Windows::Forms::Label());
			this->Q6 = (gcnew System::Windows::Forms::Label());
			this->Q7 = (gcnew System::Windows::Forms::Label());
			this->Q8 = (gcnew System::Windows::Forms::Label());
			this->Q9 = (gcnew System::Windows::Forms::Label());
			this->Q10 = (gcnew System::Windows::Forms::Label());
			this->Zo = (gcnew System::Windows::Forms::Label());
			this->Po = (gcnew System::Windows::Forms::Label());
			this->zo1 = (gcnew System::Windows::Forms::Label());
			this->zo2 = (gcnew System::Windows::Forms::Label());
			this->zo3 = (gcnew System::Windows::Forms::Label());
			this->zo4 = (gcnew System::Windows::Forms::Label());
			this->zo5 = (gcnew System::Windows::Forms::Label());
			this->zo6 = (gcnew System::Windows::Forms::Label());
			this->zo7 = (gcnew System::Windows::Forms::Label());
			this->zo8 = (gcnew System::Windows::Forms::Label());
			this->zo9 = (gcnew System::Windows::Forms::Label());
			this->zo10 = (gcnew System::Windows::Forms::Label());
			this->po1 = (gcnew System::Windows::Forms::Label());
			this->po2 = (gcnew System::Windows::Forms::Label());
			this->po3 = (gcnew System::Windows::Forms::Label());
			this->po4 = (gcnew System::Windows::Forms::Label());
			this->po5 = (gcnew System::Windows::Forms::Label());
			this->po6 = (gcnew System::Windows::Forms::Label());
			this->po7 = (gcnew System::Windows::Forms::Label());
			this->po8 = (gcnew System::Windows::Forms::Label());
			this->po9 = (gcnew System::Windows::Forms::Label());
			this->po10 = (gcnew System::Windows::Forms::Label());
			this->rozpocznij = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Powitanie
			// 
			this->Powitanie->AutoSize = true;
			this->Powitanie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Powitanie->Location = System::Drawing::Point(62, 9);
			this->Powitanie->Name = L"Powitanie";
			this->Powitanie->Size = System::Drawing::Size(258, 20);
			this->Powitanie->TabIndex = 0;
			this->Powitanie->Text = L"Quiz o EURO 2016";
			this->Powitanie->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pytanie
			// 
			this->Pytanie->AutoSize = true;
			this->Pytanie->Location = System::Drawing::Point(13, 38);
			this->Pytanie->Name = L"Pytanie";
			this->Pytanie->Size = System::Drawing::Size(100, 200);
			this->Pytanie->TabIndex = 1;
			this->Pytanie->Text = L"Numer pytania:";
			// 
			// Q1
			// 
			this->Q1->AutoSize = true;
			this->Q1->Location = System::Drawing::Point(13, 61);
			this->Q1->Name = L"Q1";
			this->Q1->Size = System::Drawing::Size(16, 13);
			this->Q1->TabIndex = 2;
			this->Q1->Text = L"1.";
			// 
			// Q2
			// 
			this->Q2->AutoSize = true;
			this->Q2->Location = System::Drawing::Point(13, 84);
			this->Q2->Name = L"Q2";
			this->Q2->Size = System::Drawing::Size(16, 13);
			this->Q2->TabIndex = 3;
			this->Q2->Text = L"2.";
			// 
			// Q3
			// 
			this->Q3->AutoSize = true;
			this->Q3->Location = System::Drawing::Point(13, 107);
			this->Q3->Name = L"Q3";
			this->Q3->Size = System::Drawing::Size(16, 13);
			this->Q3->TabIndex = 4;
			this->Q3->Text = L"3.";
			// 
			// Q4
			// 
			this->Q4->AutoSize = true;
			this->Q4->Location = System::Drawing::Point(13, 130);
			this->Q4->Name = L"Q4";
			this->Q4->Size = System::Drawing::Size(16, 13);
			this->Q4->TabIndex = 5;
			this->Q4->Text = L"4.";
			// 
			// Q5
			// 
			this->Q5->AutoSize = true;
			this->Q5->Location = System::Drawing::Point(12, 153);
			this->Q5->Name = L"Q5";
			this->Q5->Size = System::Drawing::Size(16, 13);
			this->Q5->TabIndex = 6;
			this->Q5->Text = L"5.";
			// 
			// Q6
			// 
			this->Q6->AutoSize = true;
			this->Q6->Location = System::Drawing::Point(12, 178);
			this->Q6->Name = L"Q6";
			this->Q6->Size = System::Drawing::Size(16, 13);
			this->Q6->TabIndex = 7;
			this->Q6->Text = L"6.";
			// 
			// Q7
			// 
			this->Q7->AutoSize = true;
			this->Q7->Location = System::Drawing::Point(12, 201);
			this->Q7->Name = L"Q7";
			this->Q7->Size = System::Drawing::Size(16, 13);
			this->Q7->TabIndex = 8;
			this->Q7->Text = L"7.";
			// 
			// Q8
			// 
			this->Q8->AutoSize = true;
			this->Q8->Location = System::Drawing::Point(12, 223);
			this->Q8->Name = L"Q8";
			this->Q8->Size = System::Drawing::Size(16, 13);
			this->Q8->TabIndex = 9;
			this->Q8->Text = L"8.";
			// 
			// Q9
			// 
			this->Q9->AutoSize = true;
			this->Q9->Location = System::Drawing::Point(13, 246);
			this->Q9->Name = L"Q9";
			this->Q9->Size = System::Drawing::Size(16, 13);
			this->Q9->TabIndex = 10;
			this->Q9->Text = L"9.";
			// 
			// Q10
			// 
			this->Q10->AutoSize = true;
			this->Q10->Location = System::Drawing::Point(13, 268);
			this->Q10->Name = L"Q10";
			this->Q10->Size = System::Drawing::Size(22, 13);
			this->Q10->TabIndex = 11;
			this->Q10->Text = L"10.";
			// 
			// Zo
			// 
			this->Zo->AutoSize = true;
			this->Zo->Location = System::Drawing::Point(98, 38);
			this->Zo->Name = L"Zo";
			this->Zo->Size = System::Drawing::Size(123, 13);
			this->Zo->TabIndex = 12;
			this->Zo->Text = L"Zaznaczona odpowiedŸ:";
			// 
			// Po
			// 
			this->Po->AutoSize = true;
			this->Po->Location = System::Drawing::Point(235, 38);
			this->Po->Name = L"Po";
			this->Po->Size = System::Drawing::Size(112, 13);
			this->Po->TabIndex = 13;
			this->Po->Text = L"Poprawna odpowiedŸ:";
			// 
			// zo1
			// 
			this->zo1->AutoSize = true;
			this->zo1->Location = System::Drawing::Point(101, 60);
			this->zo1->Name = L"zo1";
			this->zo1->Size = System::Drawing::Size(29, 13);
			this->zo1->TabIndex = 14;
			this->zo1->Text = L"Brak";
			// 
			// zo2
			// 
			this->zo2->AutoSize = true;
			this->zo2->Location = System::Drawing::Point(101, 84);
			this->zo2->Name = L"zo2";
			this->zo2->Size = System::Drawing::Size(29, 13);
			this->zo2->TabIndex = 15;
			this->zo2->Text = L"Brak";
			// 
			// zo3
			// 
			this->zo3->AutoSize = true;
			this->zo3->Location = System::Drawing::Point(101, 107);
			this->zo3->Name = L"zo3";
			this->zo3->Size = System::Drawing::Size(29, 13);
			this->zo3->TabIndex = 16;
			this->zo3->Text = L"Brak";
			// 
			// zo4
			// 
			this->zo4->AutoSize = true;
			this->zo4->Location = System::Drawing::Point(101, 130);
			this->zo4->Name = L"zo4";
			this->zo4->Size = System::Drawing::Size(29, 13);
			this->zo4->TabIndex = 17;
			this->zo4->Text = L"Brak";
			// 
			// zo5
			// 
			this->zo5->AutoSize = true;
			this->zo5->Location = System::Drawing::Point(101, 153);
			this->zo5->Name = L"zo5";
			this->zo5->Size = System::Drawing::Size(29, 13);
			this->zo5->TabIndex = 18;
			this->zo5->Text = L"Brak";
			// 
			// zo6
			// 
			this->zo6->AutoSize = true;
			this->zo6->Location = System::Drawing::Point(101, 178);
			this->zo6->Name = L"zo6";
			this->zo6->Size = System::Drawing::Size(29, 13);
			this->zo6->TabIndex = 19;
			this->zo6->Text = L"Brak";
			// 
			// zo7
			// 
			this->zo7->AutoSize = true;
			this->zo7->Location = System::Drawing::Point(101, 201);
			this->zo7->Name = L"zo7";
			this->zo7->Size = System::Drawing::Size(29, 13);
			this->zo7->TabIndex = 20;
			this->zo7->Text = L"Brak";
			// 
			// zo8
			// 
			this->zo8->AutoSize = true;
			this->zo8->Location = System::Drawing::Point(101, 223);
			this->zo8->Name = L"zo8";
			this->zo8->Size = System::Drawing::Size(29, 13);
			this->zo8->TabIndex = 21;
			this->zo8->Text = L"Brak";
			// 
			// zo9
			// 
			this->zo9->AutoSize = true;
			this->zo9->Location = System::Drawing::Point(101, 246);
			this->zo9->Name = L"zo9";
			this->zo9->Size = System::Drawing::Size(29, 13);
			this->zo9->TabIndex = 22;
			this->zo9->Text = L"Brak";
			// 
			// zo10
			// 
			this->zo10->AutoSize = true;
			this->zo10->Location = System::Drawing::Point(101, 268);
			this->zo10->Name = L"zo10";
			this->zo10->Size = System::Drawing::Size(29, 13);
			this->zo10->TabIndex = 23;
			this->zo10->Text = L"Brak";
			// 
			// po1
			// 
			this->po1->AutoSize = true;
			this->po1->Location = System::Drawing::Point(235, 60);
			this->po1->Name = L"po1";
			this->po1->Size = System::Drawing::Size(128, 13);
			this->po1->TabIndex = 24;
			this->po1->Text = L"";
			// 
			// po2
			// 
			this->po2->AutoSize = true;
			this->po2->Location = System::Drawing::Point(235, 84);
			this->po2->Name = L"po2";
			this->po2->Size = System::Drawing::Size(128, 13);
			this->po2->TabIndex = 25;
			this->po2->Text = L"";
			// 
			// po3
			// 
			this->po3->AutoSize = true;
			this->po3->Location = System::Drawing::Point(235, 107);
			this->po3->Name = L"po3";
			this->po3->Size = System::Drawing::Size(128, 13);
			this->po3->TabIndex = 26;
			this->po3->Text = L"";
			// 
			// po4
			// 
			this->po4->AutoSize = true;
			this->po4->Location = System::Drawing::Point(235, 130);
			this->po4->Name = L"po4";
			this->po4->Size = System::Drawing::Size(128, 13);
			this->po4->TabIndex = 27;
			this->po4->Text = L"";
			// 
			// po5
			// 
			this->po5->AutoSize = true;
			this->po5->Location = System::Drawing::Point(235, 153);
			this->po5->Name = L"po5";
			this->po5->Size = System::Drawing::Size(128, 13);
			this->po5->TabIndex = 28;
			this->po5->Text = L"";
			// 
			// po6
			// 
			this->po6->AutoSize = true;
			this->po6->Location = System::Drawing::Point(235, 178);
			this->po6->Name = L"po6";
			this->po6->Size = System::Drawing::Size(128, 13);
			this->po6->TabIndex = 29;
			this->po6->Text = L"";
			// 
			// po7
			// 
			this->po7->AutoSize = true;
			this->po7->Location = System::Drawing::Point(235, 201);
			this->po7->Name = L"po7";
			this->po7->Size = System::Drawing::Size(128, 13);
			this->po7->TabIndex = 30;
			this->po7->Text = L"";
			// 
			// po8
			// 
			this->po8->AutoSize = true;
			this->po8->Location = System::Drawing::Point(235, 223);
			this->po8->Name = L"po8";
			this->po8->Size = System::Drawing::Size(128, 13);
			this->po8->TabIndex = 31;
			this->po8->Text = L"";
			// 
			// po9
			// 
			this->po9->AutoSize = true;
			this->po9->Location = System::Drawing::Point(235, 246);
			this->po9->Name = L"po9";
			this->po9->Size = System::Drawing::Size(128, 13);
			this->po9->TabIndex = 32;
			this->po9->Text = L"";
			// 
			// po10
			// 
			this->po10->AutoSize = true;
			this->po10->Location = System::Drawing::Point(235, 268);
			this->po10->Name = L"po10";
			this->po10->Size = System::Drawing::Size(128, 13);
			this->po10->TabIndex = 33;
			this->po10->Text = L"";
			// 
			// rozpocznij
			// 
			this->rozpocznij->Location = System::Drawing::Point(12, 307);
			this->rozpocznij->Name = L"rozpocznij";
			this->rozpocznij->Size = System::Drawing::Size(114, 29);
			this->rozpocznij->TabIndex = 34;
			this->rozpocznij->Text = L"Rozpocznij Quiz";
			this->rozpocznij->UseVisualStyleBackColor = true;
			this->rozpocznij->Click += gcnew System::EventHandler(this, &Form1::rozpocznij_Click);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Location = System::Drawing::Point(146, 315);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(122, 13);
			this->wynik->TabIndex = 35;
			this->wynik->Text = L"Wynik";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 370);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->rozpocznij);
			this->Controls->Add(this->po10);
			this->Controls->Add(this->po9);
			this->Controls->Add(this->po8);
			this->Controls->Add(this->po7);
			this->Controls->Add(this->po6);
			this->Controls->Add(this->po5);
			this->Controls->Add(this->po4);
			this->Controls->Add(this->po3);
			this->Controls->Add(this->po2);
			this->Controls->Add(this->po1);
			this->Controls->Add(this->zo10);
			this->Controls->Add(this->zo9);
			this->Controls->Add(this->zo8);
			this->Controls->Add(this->zo7);
			this->Controls->Add(this->zo6);
			this->Controls->Add(this->zo5);
			this->Controls->Add(this->zo4);
			this->Controls->Add(this->zo3);
			this->Controls->Add(this->zo2);
			this->Controls->Add(this->zo1);
			this->Controls->Add(this->Po);
			this->Controls->Add(this->Zo);
			this->Controls->Add(this->Q10);
			this->Controls->Add(this->Q9);
			this->Controls->Add(this->Q8);
			this->Controls->Add(this->Q7);
			this->Controls->Add(this->Q6);
			this->Controls->Add(this->Q5);
			this->Controls->Add(this->Q4);
			this->Controls->Add(this->Q3);
			this->Controls->Add(this->Q2);
			this->Controls->Add(this->Q1);
			this->Controls->Add(this->Pytanie);
			this->Controls->Add(this->Powitanie);
			this->Name = L"Form1";
			this->Text = L"Quiz";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rozpocznij_Click(System::Object^  sender, System::EventArgs^  e) {
		//
		//pytania
		//
		//1
		pytanie[0, 0] = "W jakim kraju by³y Organizowane ME 2016?";
		pytanie[0, 1] = "A. Niemcy";
		pytanie[0, 2] = "B. Holandia";
		pytanie[0, 3] = "C. Brazylia";
		pytanie[0, 4] = "D. Francja";
		pytanie[0, 5] = "D";
		//2
		pytanie[1, 0] = "Kto by³ w grupie razem z Polakami?";
		pytanie[1, 1] = "A. Niemcy";
		pytanie[1, 2] = "B. Francja";
		pytanie[1, 3] = "C. W³ochy";
		pytanie[1, 4] = "D. Urugwaj";
		pytanie[1, 5] = "A";
		//3
		pytanie[2, 0] = "Które miejsce w grupie zajê³a reprezentacja Polski";
		pytanie[2, 1] = "A. 1";
		pytanie[2, 2] = "B. 2";
		pytanie[2, 3] = "C. 3";
		pytanie[2, 4] = "D. 4";
		pytanie[2, 5] = "B";
		//4
		pytanie[3, 0] = "W której grupie gra³a Rep. Polski";
		pytanie[3, 1] = "A. A";
		pytanie[3, 2] = "B. B";
		pytanie[3, 3] = "C. C";
		pytanie[3, 4] = "D. E";
		pytanie[3, 5] = "C";
		//5
		pytanie[4, 0] = "Kto zosta³ królem strzelców EURO 2016";
		pytanie[4, 1] = "A. Ronaldo";
		pytanie[4, 2] = "B. Rooney";
		pytanie[4, 3] = "C. Griezman";
		pytanie[4, 4] = "D. Messi";
		pytanie[4, 5] = "C";
		//6
		pytanie[5, 0] = "Kto zosta³ najepszym pi³karzem euro 2016?";
		pytanie[5, 1] = "A. Griezman";
		pytanie[5, 2] = "B. Ronaldo";
		pytanie[5, 3] = "C. Messi";
		pytanie[5, 4] = "D. Neuer";
		pytanie[5, 5] = "A";
		//7
		pytanie[6, 0] = "Która z tuch dru¿yn zaje³a 3 Miejsce na EURO 2016?";
		pytanie[6, 1] = "A. Francja";
		pytanie[6, 2] = "B. Ukraina";
		pytanie[6, 3] = "C. Walia";
		pytanie[6, 4] = "D. Belgia";
		pytanie[6, 5] = "C";
		//8
		pytanie[7, 0] = "Ile Gra³o zespo³ów na Euro 2016?";
		pytanie[7, 1] = "A. 11";
		pytanie[7, 2] = "B. 16";
		pytanie[7, 3] = "C. 22";
		pytanie[7, 4] = "D. 24";
		pytanie[7, 5] = "D";
		//9
		pytanie[8, 0] = "Na jakim stadionie by³ rozgrywany Fina³?";
		pytanie[8, 1] = "A. Nicea";
		pytanie[8, 2] = "B. Marsylia";
		pytanie[8, 3] = "C. Pary¿";
		pytanie[8, 4] = "D. Toulussa";
		pytanie[8, 5] = "C";
		//10
		pytanie[9, 0] = "Kto wygra³ Euro 2016";
		pytanie[9, 1] = "A. Portugalia";
		pytanie[9, 2] = "B. W³ochy";
		pytanie[9, 3] = "C. Polska";
		pytanie[9, 4] = "D. Niemcy";
		pytanie[9, 5] = "A";
		if (rozpocznij->Text != "Zakoñcz"){
			while (i < 10){
				Form^ okno_pytanie = gcnew Form();
				System::Windows::Forms::Label^  tresc_pytania = gcnew Label();

				System::Windows::Forms::GroupBox^  groupBox1 = gcnew GroupBox();

				System::Windows::Forms::RadioButton^  odpowiedz4 = gcnew RadioButton();

				System::Windows::Forms::RadioButton^  odpowiedz2 = gcnew RadioButton();

				System::Windows::Forms::RadioButton^  odpowiedz3 = gcnew RadioButton();

				System::Windows::Forms::RadioButton^  odpowiedz1 = gcnew RadioButton();

				System::Windows::Forms::Button^  dalej = gcnew Button();


				// 
				// tresc_pytania
				// 
				tresc_pytania->AutoSize = true;
				tresc_pytania->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(238)));
				tresc_pytania->Location = System::Drawing::Point(40, 28);
				tresc_pytania->Name = L"tresc_pytania";
				tresc_pytania->Size = System::Drawing::Size(179, 20);
				tresc_pytania->TabIndex = 0;
				//tresc_pytania->Text = L"Przykladowe pytanie\?";
				// 
				// groupBox1
				// 
				groupBox1->Controls->Add(odpowiedz4);
				groupBox1->Controls->Add(odpowiedz2);
				groupBox1->Controls->Add(odpowiedz3);
				groupBox1->Controls->Add(odpowiedz1);
				groupBox1->Location = System::Drawing::Point(34, 93);
				groupBox1->Name = L"groupBox1";
				groupBox1->Size = System::Drawing::Size(398, 155);
				groupBox1->TabIndex = 1;
				groupBox1->TabStop = false;
				groupBox1->Text = L"Odpowiedzi:";
				groupBox1->ResumeLayout(false);
				groupBox1->PerformLayout();
				groupBox1->SuspendLayout();
				// 
				// odpowiedz1
				// 
				odpowiedz1->AutoSize = true;
				odpowiedz1->Location = System::Drawing::Point(7, 20);
				odpowiedz1->Name = L"odpowiedz1";
				odpowiedz1->Size = System::Drawing::Size(85, 17);
				odpowiedz1->TabIndex = 0;
				odpowiedz1->TabStop = true;
				//odpowiedz1->Text = L"odpowiedz1";
				odpowiedz1->UseVisualStyleBackColor = true;
				// 
				// odpowiedz3
				// 
				odpowiedz3->AutoSize = true;
				odpowiedz3->Location = System::Drawing::Point(7, 77);
				odpowiedz3->Name = L"odpowiedz3";
				odpowiedz3->Size = System::Drawing::Size(85, 17);
				odpowiedz3->TabIndex = 1;
				odpowiedz3->TabStop = true;
				//odpowiedz3->Text = L"odpowiedz3";
				odpowiedz3->UseVisualStyleBackColor = true;
				// 
				// odpowiedz2
				// 
				odpowiedz2->AutoSize = true;
				odpowiedz2->Location = System::Drawing::Point(231, 20);
				odpowiedz2->Name = L"odpowiedz2";
				odpowiedz2->Size = System::Drawing::Size(85, 17);
				odpowiedz2->TabIndex = 2;
				odpowiedz2->TabStop = true;
				//odpowiedz2->Text = L"odpowiedz2";
				odpowiedz2->UseVisualStyleBackColor = true;
				// 
				// odpowiedz4
				// 
				odpowiedz4->AutoSize = true;
				odpowiedz4->Location = System::Drawing::Point(231, 77);
				odpowiedz4->Name = L"odpowiedz4";
				odpowiedz4->Size = System::Drawing::Size(85, 17);
				odpowiedz4->TabIndex = 3;
				odpowiedz4->TabStop = true;
				//odpowiedz4->Text = L"odpowiedz4";
				odpowiedz4->UseVisualStyleBackColor = true;
				//
				// dalej
				//
				dalej->Location = System::Drawing::Point(500, 200);
				dalej->Name = L"dalej";
				dalej->Size = System::Drawing::Size(114, 29);
				dalej->Text = L"Dalej";
				dalej->UseVisualStyleBackColor = true;
				dalej->DialogResult = System::Windows::Forms::DialogResult::OK;
				// 
				// okno_pytanie
				// 
				okno_pytanie->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				okno_pytanie->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				okno_pytanie->ClientSize = System::Drawing::Size(650, 250);
				okno_pytanie->Controls->Add(groupBox1);
				okno_pytanie->Controls->Add(tresc_pytania);
				okno_pytanie->Controls->Add(dalej);
				okno_pytanie->Name = L"Okno_pytanie";
				okno_pytanie->Text = L"Pytanie" + (i + 1).ToString();
				okno_pytanie->ResumeLayout(false);
				okno_pytanie->PerformLayout();

				//
				//zadanie
				//
				//wyswietlanie pytañ
				
				tresc_pytania->Text = pytanie[i, 0];
				odpowiedz1->Text = pytanie[i, 1];
				odpowiedz2->Text = pytanie[i, 2];
				odpowiedz3->Text = pytanie[i, 3];
				odpowiedz4->Text = pytanie[i, 4];

				okno_pytanie->ShowDialog();
				//sterowanie zaznaczonymi odpowiedziami
				if (odpowiedz1->Checked){
					zaznaczone[i] = "A";
				}
				if (odpowiedz2->Checked){
					zaznaczone[i] = "B";
				}
				if (odpowiedz3->Checked){
					zaznaczone[i] = "C";
				}
				if (odpowiedz4->Checked){
					zaznaczone[i] = "D";
				}

				for (int j = i + 1; j < 10; j++){
					zaznaczone[j] = "Brak";
				}
				zo1->Text = zaznaczone[0];
				zo2->Text = zaznaczone[1];
				zo3->Text = zaznaczone[2];
				zo4->Text = zaznaczone[3];
				zo5->Text = zaznaczone[4];
				zo6->Text = zaznaczone[5];
				zo7->Text = zaznaczone[6];
				zo8->Text = zaznaczone[7];
				zo9->Text = zaznaczone[8];
				zo10->Text = zaznaczone[9];

				i++;
			}

			//uzupelnianie poprawnych odpowiedzi
			po1->Text = pytanie[0, 5];
			po2->Text = pytanie[1, 5];
			po3->Text = pytanie[2, 5];
			po4->Text = pytanie[3, 5];
			po5->Text = pytanie[4, 5];
			po6->Text = pytanie[5, 5];
			po7->Text = pytanie[6, 5];
			po8->Text = pytanie[7, 5];
			po9->Text = pytanie[8, 5];
			po10->Text = pytanie[9, 5];

			//liczenie wyniku
			licznik = 0;
			for (int i = 0; i < 10; i++){
				if (zaznaczone[i] == pytanie[i, 5]){
					licznik++;
					kolor[i] = System::Drawing::Color::Green;
				}
				else{
					kolor[i] = System::Drawing::Color::Red;
				}
			}

			//wyswietlenie wyniku

			zo1->ForeColor = kolor[0];
			zo2->ForeColor = kolor[1];
			zo3->ForeColor = kolor[2];
			zo4->ForeColor = kolor[3];
			zo5->ForeColor = kolor[4];
			zo6->ForeColor = kolor[5];
			zo7->ForeColor = kolor[6];
			zo8->ForeColor = kolor[7];
			zo9->ForeColor = kolor[8];
			zo10->ForeColor = kolor[9];

			wynik->Text = "Gratulacje, uda³o Ci siê uzyskaæ " + (licznik * 10).ToString() + "% punktów!!!";

			rozpocznij->Text = "Zakoñcz";
		}
 else{
	 Close();
 }
	}
};
}

