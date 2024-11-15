#include "TwoArrays.h"
#include "RandomValue.h"
#include <iostream>
#include <Windows.h>





void InitRandom();	// ����������� ��������� �����
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //���������� ������ ���������� ������� �� 0 �� 100 ������ ����� �� ʲ��ʲ��� �����ֲ� ����²!!!

// ������ �������.
void EnterTwoArrays(int arr[ROWS][COLS], int row, int column); // ���������� ������.
void DisplayArrays(int arr[ROWS][COLS], int row, int column); // ���� ������ �� ����� ��� int
void DisplayArrays(double arr[ROWS][COLS], int row, int column); // ���� ������ �� ����� ��� double
void DisplayMainDiagonal(int arr[ROWS][COLS], int str, int col); //���� ������� ������� �������
void DisplaySideDiagonal(int arr[ROWS][COLS], int str, int col);  //���� ������� ������ �������

// ����� �������.
int MinValArr(int arr[ROWS][COLS], int row, int column); //����� ���������� ��������.
int MaxValArr(int arr[ROWS][COLS], int row, int column); //����� ������������� ��������.

// ϳ�������� ����:
int SumArrays(int arr[ROWS][COLS], int row, int column); //���� ��� ����� ������
void SumStrArrays(int arr[ROWS][COLS], int row, int column); // ���� ����� ������
void SumColArrays(int arr[ROWS][COLS], int row, int column); //���� �������� � ������� �� �����
int SumEvenRowsNotEvenClos(int arr[ROWS][COLS], int row, int cols); // ���� �������� �� ������ ������ �� �������� ��������

//����� ������� ������
void TransposeWithTemp(int arr[ROWS][COLS], int str, int col); //���� ������ ������� ����� � ������ �� ��������� ����.
void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col); //���� ������ ������� ����� � ������ �� ��������� ������.

//�������� �����𳿿 ������
bool SimetricArray(int arr[ROWS][COLS], int str, int col); // �������� �����𳿿 ������

//����������� ��������
void FindValArray(int arr[ROWS][COLS], int str, int col, int number); // ����������� �������� � �����

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	InitRandom();

	int choise = 0;

	do {
		std::cout << "\n1.Task: ���������� �� ��������� ������.\n";
		std::cout << "2.Task: ���� ��� �������� ������.\n";
		std::cout << "3.Task: ���� �������� � ������ �� ��������.\n";
		std::cout << "4.Task: ����� ���������� �� ������������� ��������.\n";
		std::cout << "5.Task: �������������� �������.\n";
		std::cout << "6.Task: ĳ������ ��������� �������.\n";
		std::cout << "7.Task: ���� ���� �������� �� ������ ������ �� �������� ��������.\n";
		std::cout << "8.Task: �������� ������ �������.\n";
		std::cout << "9.Task: ����� ����� � �����.\n";
		std::cout << "������ ����� ���� � �������� ����� ������: ";
		std::cin >> choise;
		switch (choise)
		{

		case 1: {
			std::cout << "1.Task: ���������� �� ��������� ������\n";
			int Arr[ROWS][COLS];
			EnterTwoArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			break;
		}
		case 2: {
			std::cout << "2.Task: ���� ��� �������� ������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "���� ��� �������� ������: " << SumArrays(Arr, ROWS, COLS)<< std::endl;
			break;
		}

		case 3: {
			std::cout << "3.Task: ���� �������� � ������ �� ��������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			SumStrArrays(Arr, ROWS, COLS);
			SumColArrays(Arr, ROWS, COLS);
			break;
		}

		case 4: {
			std::cout << "4.Task: ����� ���������� �� ������������� ��������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "�������� �������� ������: " << MinValArr(Arr, ROWS, COLS) << std::endl;
			std::cout << "����������� �������� ������: " << MaxValArr(Arr, ROWS, COLS) << std::endl;
			break;
		}

		case 5: {
			std::cout << "5.Task: �������������� �������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			TransposeWithTemp(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			break;
		}

		case 6: {
			std::cout << "6.Task: ĳ������ ��������� �������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			DisplayMainDiagonal(Arr, ROWS, COLS);
			DisplaySideDiagonal(Arr, ROWS, COLS);
			break;
		}

		case 7: {
			int Arr[ROWS][COLS];
			std::cout << "7.Task: ���� ���� �������� �� ������ ������ �� �������� ��������.\n";
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			std::cout << "���� �������� �� ������ ������ �� �������� �������� �������: " << SumEvenRowsNotEvenClos(Arr, ROWS, COLS) << std::endl;
			break;
		}
		case 8: {
			std::cout << "8.Task: �������� ������ �������.\n";
			int Arr[ROWS][COLS];
			RandomValueArrays(Arr, ROWS, COLS);
			DisplayArrays(Arr, ROWS, COLS);
			if (SimetricArray(Arr, ROWS, COLS)) {
				std::cout << "��� ����� �����������." << std::endl;
			}
			else {
				std::cout << "��� ����� �� �����������." << std::endl;
			}
			break;
		}

		case 9: {
			std::cout << "9.Task: ����� ����� � �����.\n";
			int Arr[ROWS][COLS];
			int number = 0;
			RandomValueArrays(Arr, ROWS, COLS);
			std::cout << "������ ����� ��� �������� �� � ���� � �����: ";
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
