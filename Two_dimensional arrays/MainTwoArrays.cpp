#include "TwoArrays.h"
#include "RandomValue.h"
#include <iostream>


//7. Сума елементів на парних рядках та непарних стовпцях
//•	Завдання : Заповніть масив 4x4 випадковими числами та знайдіть суму елементів, що знаходяться на парних рядках і непарних стовпцях.
//•	Ціль : Навчитися працювати з умовами в межах двовимірного масиву, особливо з парністю індексів.


void InitRandom();	// ініціалізація рандомних чисел
void RandomValueArrays(int arr[ROWS][COLS], int row, int column); //заповнення масива рандомними числами від 0 до 100 ЗВЕРНИ УВАГУ НА КІЛЬКІСТЬ СТОВБЦІВ МАСИВІ!!!
void DisplayArrays(int arr[ROWS][COLS], int row, int column); // вивід масива на екран тип int

int main() {

	int Arr[ROWS][COLS];

	RandomValueArrays(Arr, ROWS, COLS);
	DisplayArrays(Arr, ROWS, COLS);


	
	return 0;
}	

