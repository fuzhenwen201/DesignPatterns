#include "Factory.h"
#include <iostream>

int main(){
	Factory* factory = new Factory();
	Product* product = factory->CreateProduct(PRODUCT_A);
	std::cout << product->Name() << std::endl;

	product = factory->CreateProduct(PRODUCT_B);
	std::cout << product->Name() << std::endl;

	product = factory->CreateProduct(PRODUCT_C);
	std::cout << product->Name() << std::endl;
}
