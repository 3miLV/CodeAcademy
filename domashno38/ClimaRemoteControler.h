#include "IRemoteControler.h"

class ClimaRemoteControler: public IRemoteControler{
public:
    void On(){std::cout << "Clima On" << std::endl;};
    void Of(){std::cout << "Clima Of" << std::endl;};
    void Play(){std::cout << "Clima Play" << std::endl;};
    virtual ~ClimaRemoteControler(){std::cout << "Clima destructor" << std::endl;};
};
