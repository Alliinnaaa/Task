#include "pch.h"
#include "Task.h"
#include <iostream>
using namespace std;

void DeleteList(ListItem*& firstItem)
{
	auto temp = firstItem;
						   
	while (firstItem != nullptr)
	{
		firstItem = firstItem->next;
		delete temp;
		temp = firstItem;
	}
}

TEST(TestTask, EmptyList) {
	ListItem* first = nullptr;
	EXPECT_NO_THROW(ItemsCount(first));
	EXPECT_EQ(ItemsCount(first), 0);
}

TEST(TestTask, ListWithOneElement) {

	ListItem* first = new ListItem();
	first->next = nullptr;
	EXPECT_NO_THROW(ItemsCount(first));
	EXPECT_EQ(ItemsCount(first), 1);
	delete first;
}

TEST(TestTask, ListWithTwoElements) {

	ListItem* first = new ListItem();
	first->next = new ListItem();
	first->next->next = nullptr;
	EXPECT_NO_THROW(ItemsCount(first));
	EXPECT_EQ(ItemsCount(first), 2);
	DeleteList(first);
}

TEST(TestTask, ListWithThreeElements) {

	ListItem* first = new ListItem();
	first->next = new ListItem();
	first->next->next = new ListItem();
	first->next->next->next = nullptr;
	EXPECT_NO_THROW(ItemsCount(first));
	EXPECT_EQ(ItemsCount(first), 3);
	DeleteList(first);
}
