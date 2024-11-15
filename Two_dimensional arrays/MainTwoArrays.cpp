#include "TwoArrays.h"
#include "RandomValue.h"
#include <iostream>
#include <Windows.h>





void InitRandom();	// ініціалізація рандомних чисел
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //заповнення масива рандомними числами від 0 до 100 ЗВЕРНИ УВАГУ НА КІЛЬКІСТЬ СТОВБЦІВ МАСИВІ!!!

// Основні функції.
void EnterTwoArrays(int arr[ROWS][COLS], int row, int column); // заповнення масиву.
void DisplayArrays(int arr[ROWS][COLS], int row, int column); // вивід масива на екран тип int
void DisplayArrays(double arr[ROWS][COLS], int row, int column); // вивід масива на екран тип double
void DisplayMainDiagonal(int arr[ROWS][COLS], int str, int col); //вивід значень головної діагоналі
void DisplaySideDiagonal(int arr[ROWS][COLS], int str, int col);  //вивід значень побічної діагоналі

// Пошук ЗНАЧЕНЬ.
int MinValArr(int arr[ROWS][COLS], int row, int column); //Пошук мінімального значення.
int MaxValArr(int arr[ROWS][COLS], int row, int column); //Пошук максимального значення.

// Підрахунок СУМИ:
int SumArrays(int arr[ROWS][COLS], int row, int column); //сума всіх чисел масиву
void SumStrArrays(int arr[ROWS][COLS], int row, int column); // сума рядків масиву
void SumColArrays(int arr[ROWS][COLS], int row, int column); //сума стовчиків з виводом на екран
int SumEvenRowsNotEvenClos(int arr[ROWS][COLS], int row, int cols); // Сума елементів на парних рядках та непарних стовпцях

//Заміна значень масиву
void TransposeWithTemp(int arr[ROWS][COLS], int str, int col); //зміна місцями значень рядок в строку за допомогою зміної.
void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col); //зміна місцями значень рядок в строку за допомогою масиву.

//перевірка симетріїї масиву
bool SimetricArray(int arr[ROWS][COLS], int str, int col); // перевірка симетріїї масиву

//знаходження значення
void FindValArray(int arr[ROWS][COLS], int str, int col, int number); // знаходження значення в масиві

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	InitRandom();

	int choise = 0;

	do {
		std::cout << "\n1.Task: Заповнення та виведення масиву.\n";
		std::cout << "2.Task: Сума всіх елементів масиву.\n";
		std::cout << "3.Task: Сума елементів у рядках та стовпцях.\n";
		std::cout << "4.Task: Пошук мінімального та максимального значення.\n";
		std::cout << "5.Task: Транспонування матриці.\n";
		std::cout << "6.Task: Діагоналі квадратної матриці.\n";
		std::cout << "7.Task: Вивід суми елементів на парних рядках та непарних стовпцях.\n";
		std::cout << "8.Task: Перевірка симетрії матриці.\n";
		std::cout << "9.Task: Пошук числа в масиві.\n";
		std::cout << "Вибери пункт меню і програма покже рішення: ";
		std::cin >> choise;
		switch (choise)
		{

		case 1: {
			std::cout << "1.Task: Заповнення та виведення масиву\n";
			int Arr[ROWS][COLS];
			EnterTwoArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			break;
		}
		case 2: {
			std::cout << "2.Task: Сума всіх елементів масиву.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "Сума всіх елементів масиву: " << SumArrays(Arr, ROWS, COLS)<< std::endl;
			break;
		}

		case 3: {
			std::cout << "3.Task: Сума елементів у рядках та стовпцях.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			SumStrArrays(Arr, ROWS, COLS);
			SumColArrays(Arr, ROWS, COLS);
			break;
		}

		case 4: {
			std::cout << "4.Task: Пошук мінімального та максимального значення.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "Мнімальне значення масиву: " << MinValArr(Arr, ROWS, COLS) << std::endl;
			std::cout << "Максимальне значення масиву: " << MaxValArr(Arr, ROWS, COLS) << std::endl;
			break;
		}

		case 5: {
			std::cout << "5.Task: Транспонування матриці.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			TransposeWithTemp(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			break;
		}

		case 6: {
			std::cout << "6.Task: Діагоналі квадратної матриці.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			DisplayMainDiagonal(Arr, ROWS, COLS);
			DisplaySideDiagonal(Arr, ROWS, COLS);
			break;
		}

		case 7: {
			int Arr[ROWS][COLS];
			std::cout << "7.Task: Вивід суми елементів на парних рядках та непарних стовпцях.\n";
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "Сума елементів на парних рядках та непарних стовпцях дорівнює: " << SumEvenRowsNotEvenClos(Arr, ROWS, COLS) << std::endl;
			break;
		}
		case 8: {
			std::cout << "8.Task: Перевірка симетрії матриці.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			if (SimetricArray(Arr, ROWS, COLS)) {
				std::cout << "Твій масив симетричний." << std::endl;
			}
			else {
				std::cout << "Твій масив не симетричний." << std::endl;
			}
			break;
		}

		case 9: {
			std::cout << "9.Task: Пошук числа в масиві.\n";
			int Arr[ROWS][COLS];
			int number = 0;
			RandomValueArrays(Arr, ROWS, COLS);
			std::cout << "Введіть число для перевірки чи є воно в масиві: ";
			std::cin >> number;
			DisplayArrays(Arr, ROWS, COLS);
			FindValArray(Arr, ROWS, COLS, number);

			break;
		}
		case 10: {
			std::cout << "Exit \n";
			break;
		}

		default: {
			std::cout << "Invalid choise. Pleace try agine";
		}
		}
	} while (choise != 10);




	return 0;
}


//
