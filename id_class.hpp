
#ifndef MOVE_CALL_CLASS_HPP_ZXCWFEFWEFRAWFWEFDEAWF
#define MOVE_CALL_CLASS_HPP_ZXCWFEFWEFRAWFWEFDEAWF
#pragma once

#include<utility>

namespace zxc{

	namespace test {
		class tester {
			size_t id_;
			static size_t count_;
		public:
			tester() :id_(count_) { ++count_; }
			tester(const tester& t):id_(t.id_){}
			auto& operator=(const tester& t){
				this->id_ = t.id_;
				return *this;
			}
			tester(tester&& m){
				using std::swap;
				swap(this->id_, m.id_);
			}
			auto& operator=(tester&& m) {
				using std::swap;
				swap(  *this, std::move(m)  );
				return *this;
			}
			virtual ~tester() { --count_; }
			auto id()const{ return id_; }
			static auto count() { return count_; }
		};

		size_t tester::count_ = 0;
	} // namespace 
} // namespace 


#endif
