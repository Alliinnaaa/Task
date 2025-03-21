﻿

// Task.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Task.h"

int ItemsCount(ListItem* firstItem)
{
	auto temp = firstItem; // начинаем с первого элемента
	int i = 0;
	while (temp!= nullptr) // перебираем весь список
	{
		i++;
		temp = temp->next;// перемещаемся к следующему элементу
	}
	return i;
}
/*
Создайте функцию, которая ищет длину (количество элементов) связного списка.

1. Функция должна иметь имя ItemsCount
2. Функция в качестве параметров должна принимать следующее:
- первый параметр - указатель на первый элемент списка

3. Функция должна возвращать длину связного списка (другими словами - количество элементов в списке).

Тип возвращаемого результата - int.

!!!!! ВАЖНО !!!!!
В данном файле разрешается разместить кроме кода требуемой функции - код любых других вспомогательных
функций. Никакой функции main() в этом файле быть не должно.
Если вы хотите испытать и отладить вашу функцию - пишите код в файле Example.cpp проекта Example данного решения
Для этого задайте в качестве запускаемого проекта проект Example.

ДЛЯ АВТОМАТИЧЕСКОГО ТЕСТИРОВАНИЯ проверки правильности работы вашего задания - сделайте запукаемым проект
Tests и запустите его. Если функция написана правильно - все тесты должны успешно выполниться
(зеленый цвет в консоли). Если ваша функция работает некорректно - в консоли будут сообщения красным цветом
*/
