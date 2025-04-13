#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include <string>

// 외부 클래스
class ExternalClass {
public:
    std::string search();
};

// 내부 클래스 (인터페이스)
class InternalClass {
public:
    virtual std::string fetch() = 0;
};

// 어댑터 클래스
class Adapter : public InternalClass {
private:
    ExternalClass& external;

public:
    Adapter(ExternalClass& external);
    std::string fetch() override;
};

#endif // ADAPTER_HPP
