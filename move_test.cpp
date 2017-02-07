
#include<iostream>
#include<utility>
#include"move_call_class.hpp"

template<class T>
void put(const T& t) {
	std::cout << "id : " << t.id() << ", count : " << t.count() << "\n";
}

template<class Head,class ...T>
void put(const Head& h, const T&... arg) {
	put(h);
	put(arg...);
}
template<class ...T>
void print(const T&... arg){
	put(arg...);
	std::cout << "\n";
}


int main() {
	std::cout << "hello world\n";
	{
		zxc::test::tester a, b;
		auto c = a;
		print(a, b, c);

		auto d = std::move(b);
		print(a, b, c, d);
	}
	//auto
	//
	return 0;
}