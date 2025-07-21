#include "Tarea.h"
#include <iostream>
using namespace std;

Tarea::Tarea(string _titulo,  int _descripcion, string _fechaLimite, bool _completada, int _prioridad)
      : titulo(_titulo), descripcion(_descripcion), fechaLimite(_fechaLimite), completada(_completada), prioridad(_prioridad){}

void Tarea::setCompletada(){ this->completada;}

string Tarea:: getTitulo()const{ return titulo;}
int Tarea:: getDescripcion()const{ return descripcion;}
string Tarea:: getFechaLimite()const{ return fechaLimite;}
bool Tarea:: getCompletada()const{ return completada;}
int Tarea::getPrioridad() const { return prioridad; }





    
 



