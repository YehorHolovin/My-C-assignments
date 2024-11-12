#ifndef RANDOMVALUE_H
#define RANDOMVALUE_H
#include "Constants.h"
void InitRandom();	// ініціалізація рандомних чисел
int RandValue(int min = 1, int max = 100); // рандомне значення з визначеним діапазоном
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //заповнення масива рандомними числами від 0 до 100 ЗВЕРНИ УВАГУ НА КІЛЬКІСТЬ СТОВБЦІВ МАСИВІ!!!

#endif // !RANDOMVALUE_H
