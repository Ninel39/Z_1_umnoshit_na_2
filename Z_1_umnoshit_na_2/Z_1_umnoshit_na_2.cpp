// Z_1_umnoshit_na_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{ /*Напишите программу, которая создает двухмерный массив и заполняет его по следующему
принципу: пользователь вводит число (например, 3) первый элемент массива принимает
значение этого числа, последующий элемент массива принимает значение этого числа
умноженного на 2 (т.е. 6 для нашего примера), третий элемент массива предыдущий элемент,
умноженный на 2 (т.е. 6*2=12 для нашего примера). Созданный массив вывести на экран.
  */
	//setlocale(0, " ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[5][5];
	cout << "Введите число""\n";
     cin >> arr[0][0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0 && j != 0)
				arr[i][j] = arr[i][j - 1] * 2;
			if (i >= 1)
				arr[i][j] = arr[i - 1][j] * 2;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << "\t";
		cout << "\n";
	}
	return 0;
}

