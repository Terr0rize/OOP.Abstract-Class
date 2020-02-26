#pragma once
#include "Body.h"
#include <iostream>

class Series 
{
public:
	Series(size_t cap)
		: m_bodies(new Body *[cap])
	{
	}
	~Series()
	{
		for (int i = 0; i < m_sz; ++i)
			delete m_bodies[i];

		delete[] m_bodies;
	}
	void Add(Body* body)
	{
		m_bodies[m_sz++] = body;
	}
	size_t Size() const;


	Body* operator[](size_t idx)
	{
		return m_bodies[idx];
	}
protected:
	Body **m_bodies;
	size_t m_sz = 0;
};
