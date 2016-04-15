#include<iostream>
#include<string>

void fizzBuzz(uint64_t max) {
	const std::string FIZZBUZZ = "FizzBuzz";
	const std::string FIZZ = "Fizz";
	const std::string BUZZ = "Buzz";
	std::string out;

	for (uint64_t i = 0; i < max; i++) {
		out = i % 5 ? i % 3 ? std::to_string(i) : BUZZ : i % 3 ? FIZZ : FIZZBUZZ;
		std::cout << out << std::endl;
	}
}