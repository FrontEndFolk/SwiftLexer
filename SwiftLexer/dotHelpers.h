#pragma once
#include <string>
#include <sstream>

std::string getListNodeLabel(std::string listName, int id)
{
	std::stringstream ss;

	ss << '"' << listName << id << '"' << " [label=\"" << listName << "\"]";

	return ss.str();
}

std::string getListNode(std::string listName, int id) 
{
	std::stringstream ss;

	ss << '"' << listName << id << '"';

	return ss.str();
}