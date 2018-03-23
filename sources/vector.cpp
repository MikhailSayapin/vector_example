#include <algorithm>
#include <cassert> 

#include "vector.hpp"

vector_t::vector_t()
{
	size_ = 0;
	capacity_ = 0;
	elements_ = nullptr;
}

vector_t::vector_t(vector_t const & other)
{
	size_ = other.size_;
	capacity_ = other.capacity_;
	elements_ = new int[capacity_];
	for (int i = 0; i < size_; i++)
	{
		elements_[i] = other.elements_[i];
	}

}

vector_t & vector_t::operator =(vector_t const & other)
{
	if (&other != this)
	{
		delete[] elements_;
		this->size_ = other.size_;
		this->capacity_ = other.capacity_;
		this->elements_ = new int[capacity_];

		for (int i = 0; i < size_; i++)
		{
			elements_[i] = other.elements_[i];
		}
	}
	return *this;
}

bool vector_t::operator ==(vector_t const & other) const
{
	if (this->size_ == other.size_)
	{
		for (int i = 0; i < size_; i++)
		{
			if (this->elements_[i] != other.elements_[i])
			{
				return false;
				break;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

vector_t::~vector_t()
{
	size_ = 0;
	capacity_ = 0;
	delete[] elements_;
}

std::size_t vector_t::size() const
{
	return size_;
	return 0; //EXIT
}

std::size_t vector_t::capacity() const
{
	return capacity_;
	return 0; //EXIT
}

void vector_t::push_back(int value)
{
	if (size_ == 0)
	{
		size_ = 1;
		capacity_ = 1;
		elements_ = new int[capacity_];
		elements_[0] = value;
	}

	else if (size_ = capacity_)
	{
		capacity *= 2;
		int *massiv = new int[capacity_];
		for (std::size_t i = 0; i < size_; i++)
		{
			massiv[i] = elements_[i];
		}

		delete[] elements_;
		elements_ = massiv;
		elements_[size_] = value;
		size_ = size_ + 1;
	}

	else
	{
		elements_[size_] = value;
		size_ = size_ + 1;
	}
}

void vector_t::pop_back()
{
	size_ = size_ - 1;
	if ((size_ == 0) || (capacity_ == size_ * 4))
	{
		int *massiv;
		massiv = new int[size_];
		for (std::size_t i = 0; i < size_; i++)
		{
			massiv[i] = elements_[i];
		}

		delete[] elements_;
		capacity_ /= 2;
		elements_ = new int[capacity_];

		for (std::size_t i = 0; i < size_; i++)
		{
			elements_[i] = massiv[i];
		}
		delete[] massiv;
	}
}

int & vector_t::operator [](std::size_t index)
{
	return elements_[index];
}

int vector_t::operator [](std::size_t index) const
{
	return elements_[index];
}

bool operator !=(vector_t const & lhs, vector_t const & rhs)
{
	if (lhs == rhs)
	{
		return false;
	}
	return true;
}
