#pragma once
#include<iostream>
#include<array>

template <std::size_t size>
class Piece {
public:
	Piece();
	~Piece();

	bool add(std::uint32_t position, std::int16_t len,std::int16_t angle);

	bool valid_piece();

	std::int16_t edge_size(std::uint32_t position);
private:
	std::array<std::uint32_t, size> sides_length, angles;
};

#include"Piece.hpp"