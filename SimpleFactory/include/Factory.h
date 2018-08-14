#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "ConsumeProduct.h"
enum PRODUCT_TYPE{
    PRODUCT_A,
    PRODUCT_B,
    PRODUCT_C
};

class Factory{
    public:
    Product* CreateProduct(PRODUCT_TYPE type){
        Product* product = NULL;
        switch(type){
            case PRODUCT_A:
                product = new ProductA();
                break;
            case PRODUCT_B:
                product = new ProductB();
                break;
            case PRODUCT_C:
                product = new Productc();
                break;
            default:
                break;
        }
        return product;
    }
};

#endif