#ifndef TWOARRAYS_H
#define TWOARRAYS_H
#include"Constants.h"


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

//����� ������� ������
void TransposeWithTemp(int arr[ROWS][COLS], int str, int col); //���� ������ ������� ����� � ������ �� ��������� ����.
void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col); //���� ������ ������� ����� � ������ �� ��������� ������.

#endif // TWOARRAYS_H
