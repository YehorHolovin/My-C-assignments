#ifndef RANDOMVALUE_H
#define RANDOMVALUE_H
#include "Constants.h"
void InitRandom();	// ����������� ��������� �����
int RandValue(int min = 1, int max = 100); // �������� �������� � ���������� ���������
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //���������� ������ ���������� ������� �� 0 �� 100 ������ ����� �� ʲ��ʲ��� �����ֲ� ����²!!!

#endif // !RANDOMVALUE_H
