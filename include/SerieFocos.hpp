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
        std::cout << std::endl;
     }
     void EncenderFocos(){
        for (auto &&f : focos)
        {
            f.Encender();
        }
     }
      void ApagarFocos(){
        for (auto &&f : focos)
        {
            f.Apagar();
        }
     }
    };
