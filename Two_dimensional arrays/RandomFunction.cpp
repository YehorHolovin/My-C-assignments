#include "RandomValue.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

void InitRandom() {	// ����������� ��������� �����
	std::srand(static_cast<unsigned>(std::time(0)));
}

int RandValue(int min, int max) { // �������� �������� � ���������� ���������
	return min + rand() % (max - min + 1);
}

void RandomValueArrays(int arr[ROWS][COLS], int row, int column) { //���������� ������ ���������� ������� �� 0 �� 100 ������ ����� �� ʲ��ʲ��� �����ֲ� ����²!!!
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = RandValue();
		}
	}
}
