#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Producet.h"

class Factory{
    public:
    virtual Product* CreateProduct() = 0;
};

class FactoryA : public Factory{
    public:
        Product* CreateProduct(){
            return new ProductA();
        }
};

class FactoryB : public Factory{
    public:
        Product* CreateProduct(){
            return new ProductB();
        }
};

class FactoryC : public Factory{
    public:
        Product* CreateProduct(){
            return new ProductC();
        }
};
#endif