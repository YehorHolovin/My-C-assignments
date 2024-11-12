#include "RandomValue.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

void InitRandom() {	// ініціалізація рандомних чисел
	std::srand(static_cast<unsigned>(std::time(0)));
}

int RandValue(int min, int max) { // рандомне значення з визначеним діапазоном
	return min + rand() % (max - min + 1);
}

void RandomValueArrays(int arr[ROWS][COLS], int row, int column) { //заповнення масива рандомними числами від 0 до 100 ЗВЕРНИ УВАГУ НА КІЛЬКІСТЬ СТОВБЦІВ МАСИВІ!!!
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = RandValue();
		}
	}
}
