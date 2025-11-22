#pragma once
int newId = 0;

int getNewId()
{
	int id = newId;
	newId++;
	return id;
}