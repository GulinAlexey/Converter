#pragma once
#include "ConvertAmericanToSi.h"
#include "ConvertRussianToSi.h"
#include "ConvertAmericanToRussian.h"
#include "MeasureSystems.h"
#include <string>
#include <vector>

int lastChangedValue = 1;

namespace converterProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ system1;
	private: System::Windows::Forms::ComboBox^ system2;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ measure1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ measure2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ value2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ value1;
	private: System::Windows::Forms::Label^ label7;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->system1 = (gcnew System::Windows::Forms::ComboBox());
			this->system2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->measure1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->measure2 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->value2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->value1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(20, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Система мер 1";
			// 
			// system1
			// 
			this->system1->FormattingEnabled = true;
			this->system1->Location = System::Drawing::Point(109, 27);
			this->system1->Name = L"system1";
			this->system1->Size = System::Drawing::Size(140, 21);
			this->system1->TabIndex = 1;
			this->system1->TextChanged += gcnew System::EventHandler(this, &MainForm::system1_TextChanged);
			// 
			// system2
			// 
			this->system2->FormattingEnabled = true;
			this->system2->Location = System::Drawing::Point(373, 27);
			this->system2->Name = L"system2";
			this->system2->Size = System::Drawing::Size(140, 21);
			this->system2->TabIndex = 2;
			this->system2->TextChanged += gcnew System::EventHandler(this, &MainForm::system2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(284, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Система мер 2";
			// 
			// measure1
			// 
			this->measure1->FormattingEnabled = true;
			this->measure1->Location = System::Drawing::Point(102, 69);
			this->measure1->Name = L"measure1";
			this->measure1->Size = System::Drawing::Size(148, 21);
			this->measure1->TabIndex = 3;
			this->measure1->TextChanged += gcnew System::EventHandler(this, &MainForm::measure1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(20, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Мера 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(284, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Мера 2";
			// 
			// measure2
			// 
			this->measure2->FormattingEnabled = true;
			this->measure2->Location = System::Drawing::Point(364, 69);
			this->measure2->Name = L"measure2";
			this->measure2->Size = System::Drawing::Size(149, 21);
			this->measure2->TabIndex = 4;
			this->measure2->TextChanged += gcnew System::EventHandler(this, &MainForm::measure2_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->value2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->value1);
			this->panel1->Location = System::Drawing::Point(12, 101);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 41);
			this->panel1->TabIndex = 13;
			// 
			// value2
			// 
			this->value2->Location = System::Drawing::Point(351, 9);
			this->value2->Name = L"value2";
			this->value2->Size = System::Drawing::Size(150, 20);
			this->value2->TabIndex = 6;
			this->value2->TextChanged += gcnew System::EventHandler(this, &MainForm::value2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Indigo;
			this->label6->Location = System::Drawing::Point(272, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Значение 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Indigo;
			this->label5->Location = System::Drawing::Point(8, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Значение 1";
			// 
			// value1
			// 
			this->value1->Location = System::Drawing::Point(88, 9);
			this->value1->Name = L"value1";
			this->value1->Size = System::Drawing::Size(150, 20);
			this->value1->TabIndex = 5;
			this->value1->TextChanged += gcnew System::EventHandler(this, &MainForm::value1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Indigo;
			this->label7->Location = System::Drawing::Point(250, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"=";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(538, 165);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->measure2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->measure1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->system2);
			this->Controls->Add(this->system1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(554, 204);
			this->MinimumSize = System::Drawing::Size(554, 204);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Конвертер различных величин";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void convertValue1ToValue2()
	{
		double inputValue;
		double convertedValue;
		bool fSuccess = false;
		try
		{
			inputValue = Convert::ToDouble(value1->Text);
		}
		catch (const FormatException^ e)
		{
			value2->Text = L"";
			return;
		}
		switch (system1->SelectedIndex)
		{
		case americ:
			switch (measure1->SelectedIndex)
			{
			case inch:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::inchToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::inchToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::inchToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::inchToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::inchToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::inchToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::inchToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case foot:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::footToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::footToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::footToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::footToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::footToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::footToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::footToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case yard:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::yardToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::yardToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::yardToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::yardToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::yardToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::yardToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::yardToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case mile:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::mileToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::mileToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::mileToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::mileToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::mileToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::mileToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::mileToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case acre:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case squareMetre:
						convertedValue = ConvertAmericanToSi::acreToSquareMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case desyatina:
						convertedValue = ConvertAmericanToRussian::acreToDesyatina(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pound:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertAmericanToSi::poundToKg(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertAmericanToRussian::poundUsaToFuntRus(inputValue, true);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertAmericanToRussian::poundUsaToPoodRus(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case hundredweight:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertAmericanToSi::hundredweightToKg(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertAmericanToRussian::hundredweightToFuntRus(inputValue, true);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertAmericanToRussian::hundredweightToPoodRus(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case fahrenheit:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kelvin:
						convertedValue = ConvertAmericanToSi::fahrenheitToKelvin(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case gallon:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case cubicMetre:
						convertedValue = ConvertAmericanToSi::gallonToCubicMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertAmericanToRussian::gallonToBochka(inputValue, true);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertAmericanToRussian::gallonToCharka(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case barrel:
				switch (system2->SelectedIndex)
				{
				case americ:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case cubicMetre:
						convertedValue = ConvertAmericanToSi::barrelToCubicMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertAmericanToRussian::barrelToBochka(inputValue, true);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertAmericanToRussian::barrelToCharka(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		case si:
			switch (measure1->SelectedIndex)
			{
			case metre:
				switch (system2->SelectedIndex)
				{
				case si:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToSi::inchToMetre(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToSi::footToMetre(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToSi::yardToMetre(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToSi::mileToMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertRussianToSi::arshinToMetre(inputValue, false);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertRussianToSi::lokotToMetre(inputValue, false);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertRussianToSi::sazhenToMetre(inputValue, false);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertRussianToSi::verstaToMetre(inputValue, false);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertRussianToSi::pyadToMetre(inputValue, false);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertRussianToSi::ladonToMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case squareMetre:
				switch (system2->SelectedIndex)
				{
				case si:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case acre:
						convertedValue = ConvertAmericanToSi::acreToSquareMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case desyatina:
						convertedValue = ConvertRussianToSi::desyatinaToSquareMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case kg:
				switch (system2->SelectedIndex)
				{
				case si:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToSi::poundToKg(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToSi::hundredweightToKg(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure2->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertRussianToSi::funtToKg(inputValue, false);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertRussianToSi::poodToKg(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case kelvin:
				switch (system2->SelectedIndex)
				{
				case si:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case fahrenheit:
						convertedValue = ConvertAmericanToSi::fahrenheitToKelvin(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case cubicMetre:
				switch (system2->SelectedIndex)
				{
				case si:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToSi::gallonToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToSi::barrelToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					}
				case rus:
					switch (measure2->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertRussianToSi::bochkaToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertRussianToSi::charkaToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		case rus:
			switch (measure1->SelectedIndex)
			{
			case arshin:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::arshinToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToArshin(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToArshin(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToArshin(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToArshin(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case lokot:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::lokotToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToLokot(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToLokot(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToLokot(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToLokot(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case sazhen:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::sazhenToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToSazhen(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case versta:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::verstaToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToVersta(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToVersta(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToVersta(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToVersta(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pyad:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::pyadToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToPyad(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToPyad(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToPyad(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToPyad(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case ladon:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::ladonToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToLadon(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToLadon(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToLadon(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToLadon(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case desyatina:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case squareMetre:
						convertedValue = ConvertRussianToSi::desyatinaToSquareMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case acre:
						convertedValue = ConvertAmericanToRussian::acreToDesyatina(inputValue, false);
						fSuccess = true;
					}
					break;
				}
				break;
			case funt:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::funtToKg(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToRussian::poundUsaToFuntRus(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToRussian::hundredweightToFuntRus(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pood:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::poodToKg(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToRussian::poundUsaToPoodRus(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToRussian::hundredweightToPoodRus(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case bochka:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::bochkaToCubicMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToRussian::gallonToBochka(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToRussian::barrelToBochka(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case charka:
				switch (system2->SelectedIndex)
				{
				case rus:
					if (measure1->SelectedIndex == measure2->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure2->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::charkaToCubicMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure2->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToRussian::gallonToCharka(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToRussian::barrelToCharka(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		if (fSuccess == true)
		{
			value2->Text = Convert::ToString(convertedValue);
		}
		else
		{
			value2->Text = L"";
		}
	}
	private: void convertValue2ToValue1()
	{
		double inputValue;
		double convertedValue;
		bool fSuccess = false;
		try
		{
			inputValue = Convert::ToDouble(value2->Text);
		}
		catch (const FormatException^ e)
		{
			value1->Text = L"";
			return;
		}
		switch (system2->SelectedIndex)
		{
		case americ:
			switch (measure2->SelectedIndex)
			{
			case inch:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::inchToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::inchToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::inchToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::inchToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::inchToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::inchToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::inchToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case foot:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::footToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::footToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::footToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::footToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::footToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::footToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::footToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case yard:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::yardToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::yardToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::yardToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::yardToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::yardToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::yardToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::yardToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case mile:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertAmericanToSi::mileToMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertAmericanToRussian::mileToArshin(inputValue, true);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertAmericanToRussian::mileToLokot(inputValue, true);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertAmericanToRussian::mileToSazhen(inputValue, true);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertAmericanToRussian::mileToVersta(inputValue, true);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertAmericanToRussian::mileToPyad(inputValue, true);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertAmericanToRussian::mileToLadon(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case acre:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case squareMetre:
						convertedValue = ConvertAmericanToSi::acreToSquareMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case desyatina:
						convertedValue = ConvertAmericanToRussian::acreToDesyatina(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pound:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertAmericanToSi::poundToKg(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertAmericanToRussian::poundUsaToFuntRus(inputValue, true);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertAmericanToRussian::poundUsaToPoodRus(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case hundredweight:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertAmericanToSi::hundredweightToKg(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertAmericanToRussian::hundredweightToFuntRus(inputValue, true);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertAmericanToRussian::hundredweightToPoodRus(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case fahrenheit:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kelvin:
						convertedValue = ConvertAmericanToSi::fahrenheitToKelvin(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case gallon:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case cubicMetre:
						convertedValue = ConvertAmericanToSi::gallonToCubicMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertAmericanToRussian::gallonToBochka(inputValue, true);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertAmericanToRussian::gallonToCharka(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case barrel:
				switch (system1->SelectedIndex)
				{
				case americ:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case cubicMetre:
						convertedValue = ConvertAmericanToSi::barrelToCubicMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertAmericanToRussian::barrelToBochka(inputValue, true);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertAmericanToRussian::barrelToCharka(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		case si:
			switch (measure2->SelectedIndex)
			{
			case metre:
				switch (system1->SelectedIndex)
				{
				case si:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToSi::inchToMetre(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToSi::footToMetre(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToSi::yardToMetre(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToSi::mileToMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case arshin:
						convertedValue = ConvertRussianToSi::arshinToMetre(inputValue, false);
						fSuccess = true;
						break;
					case lokot:
						convertedValue = ConvertRussianToSi::lokotToMetre(inputValue, false);
						fSuccess = true;
						break;
					case sazhen:
						convertedValue = ConvertRussianToSi::sazhenToMetre(inputValue, false);
						fSuccess = true;
						break;
					case versta:
						convertedValue = ConvertRussianToSi::verstaToMetre(inputValue, false);
						fSuccess = true;
						break;
					case pyad:
						convertedValue = ConvertRussianToSi::pyadToMetre(inputValue, false);
						fSuccess = true;
						break;
					case ladon:
						convertedValue = ConvertRussianToSi::ladonToMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case squareMetre:
				switch (system1->SelectedIndex)
				{
				case si:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case acre:
						convertedValue = ConvertAmericanToSi::acreToSquareMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case desyatina:
						convertedValue = ConvertRussianToSi::desyatinaToSquareMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case kg:
				switch (system1->SelectedIndex)
				{
				case si:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToSi::poundToKg(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToSi::hundredweightToKg(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				case rus:
					switch (measure1->SelectedIndex)
					{
					case funt:
						convertedValue = ConvertRussianToSi::funtToKg(inputValue, false);
						fSuccess = true;
						break;
					case pood:
						convertedValue = ConvertRussianToSi::poodToKg(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case kelvin:
				switch (system1->SelectedIndex)
				{
				case si:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case fahrenheit:
						convertedValue = ConvertAmericanToSi::fahrenheitToKelvin(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case cubicMetre:
				switch (system1->SelectedIndex)
				{
				case si:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToSi::gallonToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToSi::barrelToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					}
				case rus:
					switch (measure1->SelectedIndex)
					{
					case bochka:
						convertedValue = ConvertRussianToSi::bochkaToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					case charka:
						convertedValue = ConvertRussianToSi::charkaToCubicMetre(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		case rus:
			switch (measure2->SelectedIndex)
			{
			case arshin:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::arshinToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToArshin(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToArshin(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToArshin(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToArshin(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case lokot:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::lokotToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToLokot(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToLokot(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToLokot(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToLokot(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case sazhen:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::sazhenToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToSazhen(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToSazhen(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case versta:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::verstaToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToVersta(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToVersta(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToVersta(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToVersta(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pyad:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::pyadToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToPyad(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToPyad(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToPyad(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToPyad(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case ladon:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case metre:
						convertedValue = ConvertRussianToSi::ladonToMetre(inputValue, true);
						fSuccess = true;
						break;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case inch:
						convertedValue = ConvertAmericanToRussian::inchToLadon(inputValue, false);
						fSuccess = true;
						break;
					case foot:
						convertedValue = ConvertAmericanToRussian::footToLadon(inputValue, false);
						fSuccess = true;
						break;
					case yard:
						convertedValue = ConvertAmericanToRussian::yardToLadon(inputValue, false);
						fSuccess = true;
						break;
					case mile:
						convertedValue = ConvertAmericanToRussian::mileToLadon(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case desyatina:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case squareMetre:
						convertedValue = ConvertRussianToSi::desyatinaToSquareMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case acre:
						convertedValue = ConvertAmericanToRussian::acreToDesyatina(inputValue, false);
						fSuccess = true;
					}
					break;
				}
				break;
			case funt:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::funtToKg(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToRussian::poundUsaToFuntRus(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToRussian::hundredweightToFuntRus(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case pood:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::poodToKg(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case pound:
						convertedValue = ConvertAmericanToRussian::poundUsaToPoodRus(inputValue, false);
						fSuccess = true;
						break;
					case hundredweight:
						convertedValue = ConvertAmericanToRussian::hundredweightToPoodRus(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case bochka:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::bochkaToCubicMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToRussian::gallonToBochka(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToRussian::barrelToBochka(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			case charka:
				switch (system1->SelectedIndex)
				{
				case rus:
					if (measure2->SelectedIndex == measure1->SelectedIndex)
					{
						convertedValue = inputValue;
						fSuccess = true;
					}
					break;
				case si:
					switch (measure1->SelectedIndex)
					{
					case kg:
						convertedValue = ConvertRussianToSi::charkaToCubicMetre(inputValue, true);
						fSuccess = true;
					}
					break;
				case americ:
					switch (measure1->SelectedIndex)
					{
					case gallon:
						convertedValue = ConvertAmericanToRussian::gallonToCharka(inputValue, false);
						fSuccess = true;
						break;
					case barrel:
						convertedValue = ConvertAmericanToRussian::barrelToCharka(inputValue, false);
						fSuccess = true;
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		if (fSuccess == true)
		{
			value1->Text = Convert::ToString(convertedValue);
		}
		else
		{
			value1->Text = L"";
		}
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < systemNames.size(); i++)
			system1->Items->Add(gcnew System::String(systemNames[i].c_str()));
		for (int i = 0; i < systemNames.size(); i++)
			system2->Items->Add(gcnew System::String(systemNames[i].c_str()));

		system1->DropDownStyle = ComboBoxStyle::DropDownList;
		system1->SelectedIndex = americ;

		system2->DropDownStyle = ComboBoxStyle::DropDownList;
		system2->SelectedIndex = si;

		measure1->DropDownStyle = ComboBoxStyle::DropDownList;

		measure2->DropDownStyle = ComboBoxStyle::DropDownList;
	}
private: System::Void system1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	measure1->Items->Clear();
	switch (system1->SelectedIndex)
	{
	case americ:
		for (int i = 0; i < americanSystemNames.size(); i++)
			measure1->Items->Add(gcnew System::String(americanSystemNames[i].c_str()));
		measure1->SelectedIndex = 0;
		break;
	case si:
		for (int i = 0; i < siSystemNames.size(); i++)
			measure1->Items->Add(gcnew System::String(siSystemNames[i].c_str()));
		measure1->SelectedIndex = 0;
		break;
	case rus:
		for (int i = 0; i < russianSystemNames.size(); i++)
			measure1->Items->Add(gcnew System::String(russianSystemNames[i].c_str()));
		measure1->SelectedIndex = 0;
		break;
	}
}
private: System::Void system2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	measure2->Items->Clear();
	switch (system2->SelectedIndex)
	{
	case americ:
		for (int i = 0; i < americanSystemNames.size(); i++)
			measure2->Items->Add(gcnew System::String(americanSystemNames[i].c_str()));
		measure2->SelectedIndex = 0;
		break;
	case si:
		for (int i = 0; i < siSystemNames.size(); i++)
			measure2->Items->Add(gcnew System::String(siSystemNames[i].c_str()));
		measure2->SelectedIndex = 0;
		break;
	case rus:
		for (int i = 0; i < russianSystemNames.size(); i++)
			measure2->Items->Add(gcnew System::String(russianSystemNames[i].c_str()));
		measure2->SelectedIndex = 0;
		break;
	}
}
private: System::Void value1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (value1->Focused != true)
		return;

	convertValue1ToValue2();

	lastChangedValue = 1;
}
private: System::Void value2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (value2->Focused != true)
		return;

	convertValue2ToValue1();

	lastChangedValue = 2;
}
private: System::Void measure1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (lastChangedValue == 1)
		convertValue1ToValue2();
	else
		convertValue2ToValue1();
}
private: System::Void measure2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if(lastChangedValue == 1)
		convertValue1ToValue2();
	else
		convertValue2ToValue1();
}
};
}
