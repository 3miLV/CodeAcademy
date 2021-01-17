#include "TVRemoteControler.h"
#include <iostream>


//void TVRemoteControler::setButton(int button){
//    this->button = button;
//}

void TVRemoteControler::setFunction(int button){
    this->button = button;
    try{
        if(button < 1 || button > 3)
            throw "invalid function";
        switch (button) {
            case 1:
                On();
                break;
            case 2:
                Of();
                break;
            case 3:
                Play();
                break;
        }
    }
    catch(const char* exception){
        std:std::cerr <<"Error: "  << exception << '\n';
    }
}
