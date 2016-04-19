#include<iostream>
#include"Piece.hpp"

template<std::size_t size>
Piece<size>::Piece() {
}

template<std::size_t size>
Piece<size>::~Piece() {
}

template<std::size_t size>
bool Piece<size>::add(std::uint32_t position, std::int16_t len, std::int16_t angle) {
	if (size < position)return false;

	this->sides_length[position] = len;
	this->angles[position] = angle;

	return true;
}

template<std::size_t size>
bool Piece<size>::valid_piece() {
	int16_t sum = 0;
	for each (std::int16_t angle in this->angles){
		sum += angle;
	}
	if (sum == ((size - 2) * 180)) {
		return true;
	}
	else {
		return false;
	}
}

template<std::size_t size>
std::int16_t Piece<size>::edge_size(std::uint32_t position) {
	return this->sides_length[position];
}