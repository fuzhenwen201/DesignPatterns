#include "Factory.h"
#include <iostream>

int main(){
	Factory* factory = new FactoryA();
	Product* product = factory->CreateProduct();
	std::cout << product->Name() << std::endl;

	factory = new FactoryB();
	product = factory->CreateProduct();
	std::cout << product->Name() << std::endl;

	factory = new FactoryC();
	product = factory->CreateProduct();
	std::cout << product->Name() << std::endl;
}
