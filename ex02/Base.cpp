#include "Base.hpp"

Base::~Base() {}

Base* Base::generate(void) {
	int result = rand() % 3;
	if (result == 0)
		return new A;
	if (result == 1)
		return new B;
	if (result == 2)
		return new C;
	return NULL;
}

void Base::identify(Base* p) {
	if(dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

void Base::identify(Base& p) {
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception&)	{}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception&) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception&) {}
}
