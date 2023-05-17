#pragma once
#include <iostream>
class Location
{
	size_t serialNumber;
	size_t section;
	size_t shelf;
	
	void setSerialNumber(size_t number);
	void setSection(size_t section);
	void setShelf(size_t shelf);
	
public:
	const size_t getSerialNumber() const;
	const size_t getSection() const;
	const size_t getShelf() const;

	Location& operator=(const Location& other);
	Location(size_t number, size_t section, size_t shelf);
	Location();
	~Location();

	friend std::ostream& operator<<(std::ostream&, const Location&);
	friend std::istream& operator>>(std::istream&, Location&);

	size_t incrementShelf(const Location&);
	bool enoughSpace(const Location& other);
	size_t randomLocation(const Location&);
};

