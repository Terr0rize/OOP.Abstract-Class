// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Parallelepiped.h"
#include "Body.h"
#include "Ball.h"
#include "Cone.h"
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");	
	int e;
	do {
		system("pause");
		system("cls");
		cout << "[Protected By Airat]=> Введите номер выбора: " << endl;
		cout << "1. Найти объем и площадь прямоугольного параллелепипеда.  " << endl;
		cout << "2. Найти объем и площадь шара." << endl;
		cout << "3. Найти объем и площадь конуса." << endl;
		cout << "4. Выход из программы." << endl;
		cin >> e;
		switch (e)
		{
		case 1:
		{
			std::vector<Body *> bodies;
			bodies.emplace_back(new Parallelepiped(1, 2, 3));

			for (auto* body : bodies)
				body->Print(std::cout) << ", S = " << body->SurfaceArea() << ", V = " << body->Volume() << std::endl;

			for (auto* body : bodies)
				delete body;
		}; break;
		case 2:
		{
			std::vector<Body *> bodies;
			bodies.emplace_back(new Ball(1, 2, 3));		

			for (auto* body : bodies)
				body->Print(std::cout) << ", S = " << body->SurfaceArea() << ", V = " << body->Volume() << std::endl;

			for (auto* body : bodies)
				delete body;
		}; break;
		case 3: 
		{
			std::vector<Body *> bodies;
			bodies.emplace_back(new Cone(1, 2, 3));			

			for (auto* body : bodies)
				body->Print(std::cout) << ", S = " << body->SurfaceArea() << ", V = " << body->Volume() << std::endl;

			for (auto* body : bodies)
				delete body;
		}break;
		case 4: {
			return 0;

		}; break;
		}
	}
		while (e != 7);
	
	return 0;
}
