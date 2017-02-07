#pragma once
#include<iostream>

namespace zxc {
	namespace test {
		class shouter;
	} // namespace 	
} // namespace 


class zxc::test::shouter {

	public:
		using type = shouter;
	shouter() { std::cout << "ctor\n"; }
	shouter(const type& t) { std::cout << "copy ctor(const T&)\n"; }
	auto& operator=(const type&t){
		std::cout << "copy operator=(const T&)\n";
		return *this;
	}

	shouter(type&& t) { std::cout << "move ctor\n"; }
	auto operator=(type&& t) { std::cout << "move operator(T&&)\n"; }
	virtual ~shouter() { std::cout << "dtor\n"; }
};


namespace zxc{
	namespace test{
		auto make_shouter() {
			return shouter{};
		}
	} // namespace 
} // namespace 

