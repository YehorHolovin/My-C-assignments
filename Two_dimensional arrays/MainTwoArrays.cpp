#include "TwoArrays.h"
#include "RandomValue.h"
#include <iostream>


//7. ���� �������� �� ������ ������ �� �������� ��������
//�	�������� : �������� ����� 4x4 ����������� ������� �� ������� ���� ��������, �� ����������� �� ������ ������ � �������� ��������.
//�	ֳ�� : ��������� ��������� � ������� � ����� ����������� ������, �������� � ������� �������.


void InitRandom();	// ����������� ��������� �����
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //���������� ������ ���������� ������� �� 0 �� 100 ������ ����� �� ʲ��ʲ��� �����ֲ� ����²!!!
void DisplayArrays(int arr[ROWS][COLS], int row, int column); // ���� ������ �� ����� ��� int

int main() {

	int Arr[ROWS][COLS];

	RandomValueArrays(Arr, ROWS, COLS);
	DisplayArrays(Arr, ROWS, COLS);


	
	return 0;
}	

