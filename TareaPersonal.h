#ifndef TAREAPERSONAL_H
#define TAREAPERSONAL_H
#include "Tarea.h"

#include <iostream>
using namespace std;

class TareaPersonal:public Tarea {
private:
    string categoria;

public:
    TareaPersonal(string _titulo ,string _descripcion, string _fechaLimite, bool _completada,int _prioridad, string _categoria);

    string getCategoria()const;
    
    void mostrarTarea()const;
    string serializar()const;
};



#endif // TAREAPERSONAL_H