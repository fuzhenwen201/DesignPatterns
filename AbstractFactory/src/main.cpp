#include "Factory.h"
#include <iostream>

int main(){

	Factory* TM_factory = Factory::CreateFactory(FACTORY_A);
	SingleCore* singcore = TM_factory->CreatSingleCore();
	Multicore* multicore = TM_factory->CreatMulticore();
	
	std::cout << singcore->Name() << std::endl;
	std::cout << multicore->Name() << std::endl;

	TM_factory = Factory::CreateFactory(FACTORY_B);
	singcore = TM_factory->CreatSingleCore();
	multicore = TM_factory->CreatMulticore();
	
	std::cout << singcore->Name() << std::endl;
	std::cout << multicore->Name() << std::endl;

	TM_factory = Factory::CreateFactory(FACTORY_C);
	singcore = TM_factory->CreatSingleCore();
	multicore = TM_factory->CreatMulticore();
	
	std::cout << singcore->Name() << std::endl;
	std::cout << multicore->Name() << std::endl;
}
