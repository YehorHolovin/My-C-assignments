#include "TwoArrays.h"
#include <iostream>
#include <iomanip>
// ������ �������.
void EnterTwoArrays(int arr[ROWS][COLS], int row, int column) { // ���������� ������.

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			do {
				std::cout << "Enter an integer: [" << i << "] [" << j << "] ;";
				std::cin >> arr[i][j];

				if (std::cin.fail()) { // ���� ��� �����������
					std::cin.clear(); // �������� ����������� �����
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ������������ �����
					std::cout << "Invalid input! Please enter an integer." << std::endl;
				}
			} while (std::cin.fail());
		}
	}
}

void DisplayArrays(int arr[ROWS][COLS], int row, int column) { // ���� ������ �� �����
	std::cout << "You Arrays: " << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void DisplayArrays(double arr[ROWS][COLS], int row, int column) { // ���� ������ �� �����
	std::cout << std::fixed << std::setprecision(1); // ������������ ������ ������ ����� � ��������� ������� ����� ������
	std::cout << "You Arrays: " << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::defaultfloat; // ������� ������ ����������� ����������� ������
}
void DisplayMainDiagonal(int arr[ROWS][COLS], int str, int col) { //���� ������� ������� �������
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

void DisplaySideDiagonal(int arr[ROWS][COLS], int str, int col) {  //���� ������� ������ �������
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



// ����� �������.
int MinValArr(int arr[ROWS][COLS], int row, int column) { //����� ���������� ��������.
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
int MaxValArr(int arr[ROWS][COLS], int row, int column) { //����� ������������� �������� 
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

// ϳ�������� ����:

int SumArrays(int arr[ROWS][COLS], int row, int column) { //���� ��� ����� ������ � ������� �� �����
	int temp = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			temp += arr[i][j];
		}
	}
	return temp;
}
void SumStrArrays(int arr[ROWS][COLS], int row, int column) { // ���� ����� ������ � ������� �� �����
	for (int i = 0; i < row; i++) {
		int rowSum = 0;
		for (int j = 0; j < column; j++) {
			rowSum += arr[i][j];
		}
		std::cout << "Sun string number  [" << i + 1 << "]: " << rowSum << std::endl;
	}
}
void SumColArrays(int arr[ROWS][COLS], int row, int column) { //���� �������� � ������� �� �����
	for (int i = 0; i < column; i++) {
		int colSum = 0;
		for (int j = 0; j < row; j++) {
			colSum += arr[j][i];
		}
		std::cout << "Sum column number [" << i + 1 << "]: " << colSum << std::endl;
	}
}
int SumEvenRowsNotEvenClos(int arr[ROWS][COLS], int row, int cols) { // ���� �������� �� ������ ������ �� �������� ��������
	int sumArr = 0;
	for (int i = 0; i < ROWS; i += 2) {
		for (int j = 1; j < COLS; j += 2) {
			sumArr += arr[i][j];
		}
	}
	return sumArr;
}

//����� ������� ������

void TransposeWithTemp(int arr[ROWS][COLS], int str, int col) { //���� ������ ������� ����� � ������ �� ��������� ����.
	for (int i = 0; i < str; i++) {
		int temp_arr;
		for (int j = i + 1; j < col; j++) {
			temp_arr = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp_arr;
		}
	}
}

void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col) { //���� ������ ������� ����� � ������ �� ��������� ������.
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < col; j++) {
			new_arr[j][i] = arr[i][j];
		}
	}
}
bool SimetricArray(int arr[ROWS][COLS], int str, int col) { // �������� �����𳿿 ������
	bool isSimetric = true;  // ��������� ��� �������� ������
	for (int i = 0; i < ROWS - 1; i++) {
		for (int j = i + 1; j < COLS; j++) {
			if (arr[i][j] != arr[j][i]) {
				isSimetric = false; 
				break; // ����� �� ����������� �����, ���� �������� ������������
			}
		}
		if (!isSimetric) break;// ����� �� ���������� �����, ���� �������� ������������
	}
	return isSimetric;
}
void FindValArray(int arr[ROWS][COLS], int str, int col,int number) { // ����������� �������� � �����	
	bool found = false;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (number == arr[i][j]) {
				std::cout << "���� ����� � � ����� � ���� ����������� �� ����� �������� [" << i << "] [" << j << "] " << std::endl;
				found = true;
				break;
			}
		}
	}
	if (!found) {
		std::cout << "������ ����� �� ��." << std::endl;
	}
}
