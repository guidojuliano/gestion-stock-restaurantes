#ifndef STOCKMANAGER_H
#define STOCKMANAGER_H

#include <vector>
#include <string>
#include "Producto.h"
#include "Menu.h"

class StockManager {
private:
    std::vector<Producto> productos;
    std::vector<Menu> menus;

public:
    void agregarProducto(const Producto& p);
    void eliminarProducto(int id);
    Producto* buscarProducto(int id);

    void agregarMenu(const Menu& m);
    Menu* buscarMenu(int id);

    bool puedePrepararMenu(int idMenu, std::vector<std::string>& faltantes);
    void descontarStockMenu(int idMenu);

    std::vector<Producto> getProductosBajoMinimo() const;
    const std::vector<Producto>& getProductos() const;
};

#endif
