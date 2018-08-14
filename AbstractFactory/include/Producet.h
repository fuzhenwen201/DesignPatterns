#ifndef __PRODUCET_H__
#define __PRODUCET_H__

#include <string>
using namespace std;
class SingleCore {
    public:
        virtual string Name() = 0;
};

class SingleCoreA : public SingleCore{
    public :
        string Name(){
            return "Single core A";
        }
};

class SingleCoreB : public SingleCore{
    public :
        string Name(){
            return "Single core B";
        }
};

class SingleCoreC : public SingleCore{
    public :
        string Name(){
            return "Single core C";
        }
};


class Multicore {
    public :
    virtual string Name() = 0;
};

class MulticoreA : public Multicore{
    public :
        string Name(){
            return "Multicore A";
        }
};

class MulticoreB : public Multicore{
    public :
        string Name(){
            return "Multicore B";
        }
};

class MulticoreC : public Multicore{
    public :
        string Name(){
            return "Multicore C";
        }
};


#endif
