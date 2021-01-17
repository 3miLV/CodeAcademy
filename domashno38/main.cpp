#include "IRemoteControler.h"
#include "TVRemoteControler.h"
#include "ClimaRemoteControler.h"

int main(){
    TVRemoteControler control;
    ClimaRemoteControler clima_control;
    control.setFunction(1);
    control.setFunction(4);
    return 0;
}
