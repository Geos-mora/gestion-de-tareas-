#ifndef TAREALABORAL_H
#define TAREALABORAL_H
#include "Tarea.h"
#include <iostream>
using namespace std;

class TareaLaboral: public Tarea{
private:
    string proyecto;
    string responsable;
public:
    TareaLaboral(string _titulo ,int _descripcion, string _fechaLimite, bool _completada,int _prioridad, string _proyecto, string _responsable);

    string getProyecto()const;
    string getResponsable()const;

    void mostrarTarea()const;
    string serializar()const;

};




#endif // TAREALABORAL_H