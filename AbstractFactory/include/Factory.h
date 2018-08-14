#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Producet.h"

enum FACTORY_TYPE{
    FACTORY_A,
    FACTORY_B,
    FACTORY_C
};

class Factory{
    public:
    virtual SingleCore* CreatSingleCore() = 0;       
    virtual Multicore* CreatMulticore() = 0;

    static Factory* CreateFactory(FACTORY_TYPE type);
};

class FactoryA : public Factory{
    public:
        SingleCore* CreatSingleCore(){
            return new SingleCoreA();
        }

        Multicore* CreatMulticore(){
            return new MulticoreA();
        }
};

class FactoryB : public Factory{
    public:
        SingleCore* CreatSingleCore(){
            return new SingleCoreB();
        }

        Multicore* CreatMulticore(){
            return new MulticoreB();
        }
};

class FactoryC : public Factory{
    public:
        SingleCore* CreatSingleCore(){
            return new SingleCoreC();
        }

        Multicore* CreatMulticore(){
            return new MulticoreC();
        }
};

Factory* Factory::CreateFactory(FACTORY_TYPE type){
    Factory* factory = NULL;
    switch(type){   
        case FACTORY_A:
            factory = new FactoryA();
            break;
        case FACTORY_B:
            factory = new FactoryB();
            break;
        case FACTORY_C:
            factory = new FactoryC();
            break;
        default:
            break;
    }
    return factory;
}
#endif