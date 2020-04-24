#pragma once

#include <iostream>

using namespace std;

template<class T>
class Ring {
private:
	int m_pos;
	size_t m_size;
	T* m_values;

public:
	class iterator;

	Ring(size_t size) : m_pos(0), m_size(size), m_values(NULL) {
		m_values = new T[size];
	}

	~Ring() {
		delete[] m_values;
	};

	size_t size() {
		return m_size;
	}
	
	void add(T value) {
		m_values[m_pos++] = value;

		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	T& get(int pos) {
		return m_values[pos];
	}

	void print();
};
