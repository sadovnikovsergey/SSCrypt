﻿// CryptoTesting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "SSMagma.h"
#include "SSPadding.h"
#include <stdio.h>

void ssEncryptBlockMagmaTest()
{
	uint8_t Key[] =
	{ 0xff, 0xee, 0xdd, 0xcc, 0xbb, 0xaa, 0x99, 0x88,
	  0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00,
	  0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
	  0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff };

	uint64_t a = 0xfedcba9876543210;
	uint64_t b = 0;

	ssEncryptBlockMagma((uint8_t*)&a, Key, (uint8_t*)&b);
	printf("%llx", b);
}

//Сделать проверку для Decrypt

//Переделать
void ssPaddingTest()
{
	uint8_t a1[] = { 0x92, 0xde, 0xf0, 0x6b };
	uint8_t a0[] = { 0x92, 0xde, 0xf0, 0x6b, 0x3c, 0x13 };
	uint8_t b[8] = { 0 };
	ssPadding01(a0, 6, b, 8);
	printf("\nssPadding01 result = ");
	for (int i = 0; i < 8; ++i) {
		if (b[i] >= 0x10)
		{
			printf("%x", b[i]);
		}
		else
		{
			printf("0%x", b[i]);
		}
	}
	ssPadding02(a0, 6, b, 8);
	printf("\nssPadding02 result = ");
	for (int i = 0; i < 8; ++i) {
		if (b[i] >= 0x10)
		{
			printf("%x", b[i]);
		}
		else
		{
			printf("0%x", b[i]);
		}
	}
	ssPadding03(a0, 6, b, 8);
	printf("\nssPadding03 result = ");
	for (int i = 0; i < 8; ++i) {
		if (b[i] >= 0x10)
		{
			printf("%x", b[i]);
		}
		else
		{
			printf("0%x", b[i]);
		}
	}
}

int main()
{
	ssPaddingTest();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
