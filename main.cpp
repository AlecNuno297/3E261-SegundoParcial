#include <iostream>
#include <foco.hpp>
#include <seriesfocos.hpp>

int main (int argc, char const *argv[])
{

Foco foquito;

foquito.Encender();
foquito.Apagar();

std::cout
<<" Estado Foco: "
<< foquito.LeerEstado()
<< std::endl;

return 0;
}