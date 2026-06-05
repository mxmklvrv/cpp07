#pragma once

#include <iostream>


template <typename T>
class Array
{
private:
	T* _arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	T& operator[](unsigned int i);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();

	unsigned int size() const;
};

#include "Array.tpp"
