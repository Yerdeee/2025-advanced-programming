#include "Adapter.hpp"

// 외부 클래스의 메서드 구현
std::string ExternalClass::search() {
    return "get user info";
}

// 어댑터 클래스의 생성자 구현
Adapter::Adapter(ExternalClass& external) : external(external) {}

// 어댑터의 fetch 메서드 구현
std::string Adapter::fetch() {
    return external.search();
}
