#include <iostream>


template <typename Type>
class SmartPointer
{
public:
	SmartPointer():data_(nullptr){}
	SmartPointer(Type* data):data_(nullptr){}
	~SmartPointer() { if (data_)delete data_; }

	Type& operator*() { return *data_; }
	Type* operator->() { return *data_; }

	void SetData(Type* data) { data_ = data;}
	Type* GetData() { return data_;}
private:
	Type* data_;
};
struct My
{
	int a;
	float b;
	bool c;
};
void F00(SmartPointer<My> obj)
{
	std::cout << obj->a;
}


int main()
{
	SmartPointer<My> obj;

}