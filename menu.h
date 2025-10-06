#ifndef MENU_H
#define MENU_H

#include <string>
#include <map>

class Menu {
private:
    int id;
    std::string nombre;
    std::map<int, int> ingredientes; // idProducto -> cantidad necesaria

public:
    Menu();
    Menu(int id, const std::string& nombre);

    void agregarIngrediente(int idProducto, int cantidad);
    const std::map<int, int>& getIngredientes() const;
    std::string getNombre() const;
};

#endif
