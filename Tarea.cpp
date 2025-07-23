#include "Tarea.h"
#include <iostream>
using namespace std;

Tarea::Tarea(string _titulo,  int _descripcion, string _fechaLimite, bool _Status, int _prioridad)
      : titulo(_titulo), descripcion(_descripcion), fechaLimite(_fechaLimite), Status(_Status), prioridad(_prioridad){}

void Tarea::setStatus(){ this->Status=true;}

string Tarea:: getTitulo()const{ return titulo;}
int Tarea:: getDescripcion()const{ return descripcion;}
string Tarea:: getFechaLimite()const{ return fechaLimite;}
bool Tarea:: getStatus()const{ return Status;}
int Tarea::getPrioridad() const { return prioridad; }





    
 



