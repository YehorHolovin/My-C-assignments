#include "TwoArrays.h"
#include <iostream>
#include <iomanip>
// Основні функції.
void EnterTwoArrays(int arr[ROWS][COLS], int row, int column) { // заповнення масиву.

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			do {
				std::cout << "Enter an integer: [" << i << "] [" << j << "] ;";
				std::cin >> arr[i][j];

				if (std::cin.fail()) { // Якщо ввід некоректний
					std::cin.clear(); // Очищення помилкового стану
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Пропуск некоректного вводу
					std::cout << "Invalid input! Please enter an integer." << std::endl;
				}
			} while (std::cin.fail());
		}
	}
}

void DisplayArrays(int arr[ROWS][COLS], int row, int column) { // вивід масива на екран
	std::cout << "You Arrays: " << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void DisplayArrays(double arr[ROWS][COLS], int row, int column) { // вивід масива на екран
	std::cout << std::fixed << std::setprecision(1); // Встановлення формат виводу чисел з плавоючою крапкою перед циклом
	std::cout << "You Arrays: " << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::defaultfloat; // повертає формат стандартних налаштувань виводу
}
void DisplayMainDiagonal(int arr[ROWS][COLS], int str, int col) { //вивід значень головної діагоналі
	std::cout << "Value main diagonal: ";
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			if (i == j) {
				std::cout << arr[i][j] << "; ";
			}
		}
	}
	std::cout << std::endl;
}

void DisplaySideDiagonal(int arr[ROWS][COLS], int str, int col) {  //вивід значень побічної діагоналі
	std::cout << "Value side diagonal: ";
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			if (i + j == str - 1) {
				std::cout << arr[i][j] << "; ";
			}
		}
	}
	std::cout << std::endl;
}



// Пошук ЗНАЧЕНЬ.
int MinValArr(int arr[ROWS][COLS], int row, int column) { //Пошук мінімального значення.
	int minTemp = arr[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (minTemp > arr[i][j]) {
				minTemp = arr[i][j];
			}
		}
	}
	return minTemp;
}
int MaxValArr(int arr[ROWS][COLS], int row, int column) { //Пошук максимального значення 
	int maxTemp = arr[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (maxTemp < arr[i][j]) {
				maxTemp = arr[i][j];
			}
		}
	}
	return maxTemp;
}

// Підрахунок СУМИ:

int SumArrays(int arr[ROWS][COLS], int row, int column) { //сума всіх чисел масиву з виводом на екран
	int temp = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			temp += arr[i][j];
		}
	}
	return temp;
}
void SumStrArrays(int arr[ROWS][COLS], int row, int column) { // сума рядків масиву з виводом на екран
	for (int i = 0; i < row; i++) {
		int rowSum = 0;
		for (int j = 0; j < column; j++) {
			rowSum += arr[i][j];
		}
		std::cout << "Sun string number  [" << i + 1 << "]: " << rowSum << std::endl;
	}
}
void SumColArrays(int arr[ROWS][COLS], int row, int column) { //сума стовчиків з виводом на екран
	for (int i = 0; i < column; i++) {
		int colSum = 0;
		for (int j = 0; j < row; j++) {
			colSum += arr[j][i];
		}
		std::cout << "Sum column number [" << i + 1 << "]: " << colSum << std::endl;
	}
}

//Заміна значень масиву

void TransposeWithTemp(int arr[ROWS][COLS], int str, int col) { //зміна місцями значень рядок в строку за допомогою зміної.
	for (int i = 0; i < str; i++) {
		int temp_arr;
		for (int j = i + 1; j < col; j++) {
			temp_arr = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp_arr;
		}
	}
}

void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col) { //зміна місцями значень рядок в строку за допомогою масиву.
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			new_arr[j][i] = arr[i][j];
		}
	}
}
