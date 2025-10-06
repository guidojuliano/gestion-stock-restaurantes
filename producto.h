#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto
{
private:
    int id;
    std::string nombre;
    int cantidad;
    int stockMinimo;
    std::string unidad;

public:
    Producto();
    Producto(int id, const std::string& nombre, int cantidad, int stockMinimo, const std::string& unidad);

    int getId() const;
    std::string getNombre() const;
    int getCantidad() const;
    int getStockMinimo() const;
    std::string getUnidad() const;

    void setCantidad(int nuevaCantidad);
    bool necesitaReposicion() const;
};

#endif // PRODUCTO_H
