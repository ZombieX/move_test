
#include"shout_class.hpp"

void nr(size_t s = 1) {
	for (size_t i{ 0 }; i < s; i++) {
		std::cout << "\n";
	}
}

int main() {
	{
		std::cout << "a{}\n";
		zxc::test::shouter a; nr();

		std::cout << "b = a\n";
		auto b = a; nr();

		std::cout << "c = std::move(a)\n";
		auto c = std::move(a); nr();

		std::cout << "d{b}\n";
		auto d{ b }; nr();

		std::cout << "e{std::move(c)}\n";
		auto e{ std::move(c) }; nr();

		std::cout << "b = d\n";
		b = d; nr();

		std::cout << "d = std::move(e)\n";
		d = std::move(e); nr();
	} 
	nr(3);
	{
		using namespace zxc::test;
		std::cout << "a{}\n";
		shouter a;	nr();

		std::cout << "auto b = make_shouter();\n";
		auto b = make_shouter(); nr();

		std::cout << "c{make_shouter()};\n";
		auto c{ make_shouter() }; nr();

		std::cout << "auto d = move( make_shouter() );\n";
		auto d = std::move( make_shouter() ); nr();

		std::cout << "e{move( make_shouter() )};\n";
		auto e{std::move( make_shouter() )}; nr();

	}
}