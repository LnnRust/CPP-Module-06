#include "Base.hpp"

int main() {
	srand(time(0));

	std::cout << "--- TEST POINTEUR ---" << std::endl;
	Base* p = Base::generate();
	Base::identify(p);
	delete p;

	std::cout << std::endl;

	std::cout << "--- TEST REFERENCE ---" << std::endl;
	Base* p2 = Base::generate();
	Base::identify(*p2);
	delete p2;

	std::cout << std::endl;

	std::cout << "--- TEST MULTIPLE ---" << std::endl;
	for (int i = 0; i < 9; i++) {
		Base* tmp = Base::generate();
		std::cout << "pointeur  : ";
		Base::identify(tmp);
		std::cout << "reference : ";
		Base::identify(*tmp);
		std::cout << std::endl;
		delete tmp;
	}

	return 0;
}
