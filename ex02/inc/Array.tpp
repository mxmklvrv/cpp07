#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(nullptr), _size(n) {
	if(_size > 0)
		_arr = new T[_size]();
}

template <typename T>
Array<T>::Array(const Array& other) : _arr(nullptr), _size(other._size){
	if(_size > 0){
		_arr = new T[_size];
		for(size_t  i = 0; i < _size; i++)
			_arr[i]= other._arr[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other){
	if(this != &other){
		delete[] _arr;
		_arr = nullptr;
		_size = other._size;
		if(_size > 0){
			_arr = new T[_size];
			for(size_t i = 0; i < _size; i++)
				_arr[i] = other._arr[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array(){
	delete[] _arr;
}

template <typename T>
T& Array<T>::operator[](unsigned int i){
	if(i >= _size)
		throw std::out_of_range("Index is out of range");
	return _arr[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

