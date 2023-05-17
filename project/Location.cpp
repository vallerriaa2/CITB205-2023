#include "Location.h"

Location::Location() : Location(0,0,0)
{}
Location::Location(size_t number, size_t section, size_t shelf)
{
	setSerialNumber(number);
	setSection(section);
	setShelf(shelf);
}
Location::~Location()
{
	serialNumber = 0;
	shelf = 0;
	section = 0;
}
Location& Location::operator=(const Location& other)
{
	if (this != &other)
	{
		this->serialNumber = other.serialNumber;
		this->shelf = other.shelf;
		this->section = other.section;
	}
	return *this;
}

void Location::setSerialNumber(size_t number)
{
	if (number >= 1)
	{
		this->serialNumber = number;
	}
	else
	{
		return;
	}
}

void Location::setSection(size_t section)
{
	if (section >= 1)
	{
		this->section = section;
	}
	else
	{
		return;
	}
}

void Location::setShelf(size_t shelf)
{
	if (shelf >= 1)
	{
		this->shelf = shelf;
	}
	else
	{
		return;
	}
}

const size_t Location::getSerialNumber() const
{
	return serialNumber;
}
const size_t Location::getSection() const
{
	return section;
}
const size_t Location::getShelf() const
{
	return shelf;
}
std::ostream& operator<<(std::ostream& os, const Location& location)
{
	return os << location.serialNumber << "," << location.shelf << "," << location.section << std::endl;
}
std::istream& operator>>(std::istream& is, Location& location)
{
	return is >> location.serialNumber >> location.shelf >> location.section;
}
size_t Location::incrementShelf(const Location&)
{
	if (shelf <= 100)
	{
		shelf += 1;
		return shelf;
	}
	else if (section <= 100)
	{
		std::cout << "no space on the shelf! The product is going to be located in other section.";
		section++;
		return section;
	}
}
bool Location::enoughSpace(const Location& other)
{
	return other.shelf <= 100 && other.section <= 100;
}
size_t Location::randomLocation(const Location&)
{
	shelf = rand() % 100;
	return shelf;
}
