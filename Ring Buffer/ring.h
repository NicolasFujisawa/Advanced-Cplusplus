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
		cout << "deleting ring buffer" << endl;
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

	void print() {
		cout << "{" << flush;
		for (int i = 0; i < m_size; ++i) {
			cout << m_values[i] << ", " << flush;
		}
		cout << "}" << endl;
	}

	/* Making class iterable*/
	iterator begin() {
		return iterator(0, *this);
	}

	iterator end() {
		return iterator((int)m_size, *this);
	}
};

template<class T>
class Ring<T>::iterator {
private:
	int m_pos;
	Ring &m_ring;
public:
	iterator(int pos, Ring& ring) : 
			m_ring(ring), m_pos(pos) {

	}

	iterator& operator++(int) { /* post-fix ov */
		m_pos++;
		return *this;
	}

	iterator& operator++() { /* pre-fix ov */
		m_pos++;
		return *this;
	}

	T& operator*() {
		return m_ring.get(m_pos);
	}

	bool operator!=(const iterator& other)const {
		return m_pos != other.m_pos;
	}
};