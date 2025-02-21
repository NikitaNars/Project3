#include <iostream>


template <typename Type>
class SmartPointer
{
public:
	SmartPointer():data_(nullptr){}
	SmartPointer(Type* data):data_(data){}
	~SmartPointer() { if (data_)delete data_; }

	Type& operator*() { return *data_; }
	Type* operator->() { return data_; }

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
void F00(SmartPointer<My> &obj)
{
	std::cout << obj->b;
}


int main()
{
	SmartPointer<My> obj (new My{ 1, 2.2f, true });
	F00(obj);

}