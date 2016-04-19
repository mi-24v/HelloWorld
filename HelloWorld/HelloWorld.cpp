#include<iostream>
//#include"FizzBuzz.hpp"
#include"Piece.hpp"

int main(int argc, char* argv[]) {
	std::cout << "Hello, World!!!!" << std::endl;
	std::cout << "うんちっていうのは、まだ完全に消化されてないから、栄養があるんだ。" << std::endl;

	//fizzBuzz(argc >= 2 ? std::atoi(argv[1]) : 100);

	Piece<10> p; // 辺の数。角の数。

	for (std::size_t i = 1; i <= 11; i++) {
		if (!p.add(i,i, 144)) { // 辺の長さと角度を追加。11個目を追加しようとするとfalseがかえる
			std::cerr << "muri" << std::endl;
			break;
		}
	}

	std::cout << std::boolalpha // これはbool型をtrueかfalseで表示するために必要
		<< p.valid_piece() << std::endl; // 内角の和が(n - 2)*180ならばtrue

	std::cout << p.edge_size(1) << std::endl; // n番目のedgeの長さがかえる。
	while (true)
	{
		//Something to do in main loop
	}

	return 0;
}