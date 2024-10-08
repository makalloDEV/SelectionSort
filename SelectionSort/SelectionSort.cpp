﻿#include <iostream>


/*
Массив делится на отсортированную часть и не отсортированную часть. Ищется минимальный элемент из неотсортированной части и встает на свою позицию.
*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int m[100];
	int n;

	cout << "Введите количество элементов массива (до 100): ";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

// код алгоритма

	for (int i = 0; i < n; i++)
	{
		int min = i; // индекс минимального значения - первый индекс неотсортированной последовательности
		for (int j = i; j < n - 1; j++) // проходка начинается с первого значения неотсортированной последовательности
		{
			if (m[min] > m[j + 1]) // поиск минимального значения неотсортированной последовательности
			{
				min = j + 1; // записывает индекс минимального значения в min
			}
		}

		swap(m[min], m[i]); // меняет первое значение неотсортированной последовательности и минимальное найденное значение

	}


// код алгоритма кончается тут

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
}