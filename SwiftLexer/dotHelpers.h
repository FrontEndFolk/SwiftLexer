#pragma once
#include <string>
#include <sstream>

std::string getSupportNodeLabel(std::string nodeName, int id)
{
	std::stringstream ss;

	ss << '"' << nodeName << id << '"' << " [label=\"" << nodeName << "\"]";

	return ss.str();
}

std::string getSupportNode(std::string nodeName, int id)
{
	std::stringstream ss;

	ss << '"' << nodeName << id << '"';

	return ss.str();
}