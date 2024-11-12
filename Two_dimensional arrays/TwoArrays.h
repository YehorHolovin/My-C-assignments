#ifndef TWOARRAYS_H
#define TWOARRAYS_H
#include"Constants.h"


// Основні функції.
void EnterTwoArrays(int arr[ROWS][COLS], int row, int column); // заповнення масиву.
void DisplayArrays(int arr[ROWS][COLS], int row, int column); // вивід масива на екран тип int
void DisplayArrays(double arr[ROWS][COLS], int row, int column); // вивід масива на екран тип double
void DisplayMainDiagonal(int arr[ROWS][COLS], int str, int col); //вивід значень головної діагоналі
void DisplaySideDiagonal(int arr[ROWS][COLS], int str, int col);  //вивід значень побічної діагоналі

// Пошук ЗНАЧЕНЬ.
int MinValArr(int arr[ROWS][COLS], int row, int column); //Пошук мінімального значення.
int MaxValArr(int arr[ROWS][COLS], int row, int column); //Пошук максимального значення.

// Підрахунок СУМИ:
int SumArrays(int arr[ROWS][COLS], int row, int column); //сума всіх чисел масиву
void SumStrArrays(int arr[ROWS][COLS], int row, int column); // сума рядків масиву
void SumColArrays(int arr[ROWS][COLS], int row, int column); //сума стовчиків з виводом на екран

//Заміна значень масиву
void TransposeWithTemp(int arr[ROWS][COLS], int str, int col); //зміна місцями значень рядок в строку за допомогою зміної.
void TransposeArray(int arr[ROWS][COLS], int new_arr[ROWS][COLS], int str, int col); //зміна місцями значень рядок в строку за допомогою масиву.

#endif // TWOARRAYS_H
