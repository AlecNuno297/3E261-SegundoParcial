#pragma once
#include <Foco.hpp>
#include <iostream>

using namespace std; 

class SerieFocos
{
    private:
    Foco focos[10];

    public:
    SerieFocos(){}

     ~SerieFocos(){}
     void MostrarFocos(){
        for (auto &&f :foco)
        {
            cout <<f.LeerEstado();
        }
     }
    };
}