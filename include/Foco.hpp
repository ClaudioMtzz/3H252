#pragma once
#include <EstadoFoco.hpp>
class Foco
{
private:

EstadoFoco estado;

public:
    Foco( ) {   }
    ~Foco( ) {}
    void Encender(){ }
    void Apagar(){}
    EstadoFoco MostrarEstado(){}
};