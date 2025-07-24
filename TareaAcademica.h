#ifndef TAREAACADEMICA_H
#define TAREAACADEMICA_H
#include "Tarea.h"
#include <iostream>
using namespace std;

class TareaAcademica:public Tarea{
private:
    string materia;
    string tipo; 
public:
    TareaAcademica(string _titulo ,string _descripcion, string _fechaLimite, bool _completada,int _prioridad, string _materia, string _tipo);
    void setCompletada();
    string  getMateria()const;
    string  getTipo()const;
    
    void mostrarTarea()const;
    string serializar()const;


};



#endif // TAREAACADEMICA_H