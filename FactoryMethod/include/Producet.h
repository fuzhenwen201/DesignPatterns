#ifndef __PRODUCET_H__
#define __PRODUCET_H__

#include <string>
using namespace std;
class Product {
    public:
        virtual string Name() = 0;
};

class ProductA : public Product{
    public:
        string Name(){
            return "ProductA";
        }
};

class ProductB : public Product{
    public:
        string Name(){
            return "ProductB";
        }
};

class ProductC : public Product{
    public:
        string Name(){
            return "ProductC";
        }
};

#endif
