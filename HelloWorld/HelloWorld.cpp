#include<iostream>
#include"FizzBuzz.hpp"

int main(int argc, char* argv[]) {
	std::cout << "Hello, World!!!!" << std::endl;
	std::cout << "うんちっていうのは、まだ完全に消化されてないから、栄養があるんだ。" << std::endl;

	fizzBuzz(argc >= 2 ? std::atoi(argv[1]) : 100);
	while (true)
	{
		//Something to do in main loop
	}

	return 0;
}