#include <iostream>
#include <string_view>
#include "String.hpp"

String::String()
{
	size = 0;
	capacity = 0;
	pointer = nullptr;
}

String::String(const char* str)
{
	size = strlen(str);
	capacity = strlen(str);
	pointer = new char[capacity];
	
	for (int i = 0; i < capacity; i++) {
		pointer[i] = str[i];
	}
}

String::String(const String& str)
{
	size = str.size;
	capacity = str.capacity;
	pointer = new char[capacity];
	
	for (int i = 0; i < capacity; i++) {
		pointer[i] = str.pointer[i];
	}
}

String::String(String&& str) noexcept
{
	size = str.size;
	capacity = str.capacity;
	pointer = str.pointer;
	str.size = 0;
	str.capacity = 0;
	str.pointer = nullptr;
}

String::~String()
{
	if (pointer != nullptr) {
		delete[] pointer;
	}
}

String& String::operator = (const char* str)
{
	size = strlen(str);
	capacity = strlen(str);
	
	if (pointer != nullptr) {
		delete[] pointer;
	}

	pointer = new char[capacity];

	for (int i = 0; i < capacity; i++) {
		pointer[i] = str[i];
	}

	return *this;
}

void String::swap(String& right) noexcept
{
	std::swap(size, right.size);
	std::swap(capacity, right.capacity);
	std::swap(pointer, right.pointer);
}

String& String::operator = (String&& str) noexcept
{
	if (this != &str) {
		swap(str);
	}
	
	return *this;
}

char& String::operator[] (std::size_t pos)
{
	if (pos >= 0 && pos <= size - 1) {
		return pointer[pos];
	}
	
	throw std::exception();
}

String& String::insert(std::size_t pos, const char* str)
{
	if (strlen(str) == 0) {
		return *this;
	}

	if (pointer == nullptr) {
		return *this;
	}
	
	if (pos > size - 1 || pos < 0) {
		return *this;
	}
	
	char* temp = new char[strlen(str) + size];

	if (capacity < strlen(str) + size) {
		capacity = strlen(str) + size;
	}

	int j = 0;
	int k = 0;

	for (int i = 0; i < pos; i++) {
		temp[i] = pointer[j];
		j++;
	}

	for (int i = pos; i < strlen(str) + pos; i++) {
		temp[i] = str[k];
		k++;
	}

	for (int i = pos + strlen(str); i < size; i++) {
		temp[i] = pointer[j];
		j++;
	}
	
	delete[] pointer;
	pointer = temp;
	return *this;
}
