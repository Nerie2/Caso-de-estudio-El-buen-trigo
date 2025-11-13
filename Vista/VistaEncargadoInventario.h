#ifndef VISTA_ENCARGADO_INVENTARIO_H
#define VISTA_ENCARGADO_INVENTARIO_H

#include <iostream>
using namespace std;

class VistaEncargadoInventario {
public:
    void mostrarMenuEncargadoInventario();
    void mostrarInventarioIngredientes();
    void mostrarAlertasReposicion();
    bool advertenciaEliminacionIngrediente();
    void stockNegativo();
};

#endif
