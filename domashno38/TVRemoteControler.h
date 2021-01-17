#include "IRemoteControler.h"

class TVRemoteControler: public IRemoteControler{
private:
    int button;
public:
    TVRemoteControler(){std::cerr << "Member allocated some resources\n";}
    void getButton();
    void setFunction(int button);
    void On(){std::cout << "TV On" << std::endl;};
    void Of(){std::cout << "TV Of" << std::endl;};
    void Play(){std::cout << "TV Play" << std::endl;};
    virtual ~TVRemoteControler(){std::cerr << "Member cleaned up\n";}
};
