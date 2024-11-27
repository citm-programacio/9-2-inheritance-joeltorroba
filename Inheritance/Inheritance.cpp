// Inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

// Clase base Building
class Building {
protected:
    string name; // Miembro protegido: nombre del edificio

public:
    // Constructor que recibe el nombre del edificio
    Building(const string& name) : name(name) {}

    // Método público para obtener el nombre del edificio
    string getName() const {
        return name;
    }
};

// Clase derivada Warehouse
class Warehouse : public Building {
private:
    int wood, rocks, wheat; // Miembros privados

public:
    // Constructor que recibe el nombre y los recursos
    Warehouse(const string& name, int wood, int rocks, int wheat)
        : Building(name), wood(wood), rocks(rocks), wheat(wheat) {}

    // Método público para imprimir los recursos
    void printResources() const {
        cout << "Warehouse '" << getName() << "' resources:\n";
        cout << "Wood: " << wood << "\n";
        cout << "Rocks: " << rocks << "\n";
        cout << "Wheat: " << wheat << "\n";
    }
};

// Clase derivada House
class House : public Building {
private:
    int floors, inhabitants, servants; // Miembros privados

public:
    // Constructor que recibe el nombre y los datos de la casa
    House(const string& name, int floors, int inhabitants, int servants)
        : Building(name), floors(floors), inhabitants(inhabitants), servants(servants) {}

    // Método público para imprimir los datos de la casa
    void printHouse() const {
        cout << "House '" << getName() << "':\n";
        cout << "Floors: " << floors << "\n";
        cout << "Inhabitants: " << inhabitants << "\n";
        cout << "Servants: " << servants << "\n";
    }
};

// Clase derivada Temple
class Temple : public Building {
private:
    string god;     // Miembro privado: dios del templo
    int priests;    // Miembro privado: número de sacerdotes

public:
    // Constructor que recibe el nombre, dios y sacerdotes
    Temple(const string& name, const string& god, int priests)
        : Building(name), god(god), priests(priests) {}

    // Método público para imprimir los datos del templo
    void printTemple() const {
        cout << "Temple '" << getName() << "':\n";
        cout << "God: " << god << "\n";
        cout << "Priests: " << priests << "\n";
    }
};

int main() {
    // Crear un Warehouse
    Warehouse warehouse("Central Warehouse", 150, 300, 500);
    warehouse.printResources();
    cout << endl;

    // Crear una House
    House house("Villa Romana", 2, 10, 3);
    house.printHouse();
    cout << endl;

    // Crear un Temple
    Temple temple("Templo de Saturno", "Saturno", 5);
    temple.printTemple();

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
