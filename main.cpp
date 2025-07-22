#include <iostream>
#include <cstdlib>   // Para system("cls") o system("clear")
#include <thread>    // Para std::this_thread::sleep_for
#include <chrono>    // Para std::chrono::seconds

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

void mostrarPortada() {
    system(CLEAR);
    cout << R"(
   ____        _        ____                           _
  |  _ \  __ _| |_ __ _| __ )  ___  ___  ___ _ ____   _(_) ___  _ __
  | | | |/ _` | __/ _` |  _ \ / _ \/ __|/ _ \ '__\ \ / / |/ _ \| '_ \
  | |_| | (_| | || (_| | |_) | (_) \__ \  __/ |   \ V /| | (_) | | | |
  |____/ \__,_|\__\__,_|____/ \___/|___/\___|_|    \_/ |_|\___/|_| |_|

         BOT DE GENERACION Y ENVÍO DE REPORTES FINANCIEROS
=====================================================================
)";
    this_thread::sleep_for(chrono::seconds(2));
}

void mostrarMenu() {
    cout << R"(
---------------------- MENU PRINCIPAL ----------------------

1. Generar reporte financiero mensual
2. Generar reporte financiero anual
3. Enviar reporte por correo electronico
4. Configuracion del sistema
5. Creditos
0. Salir

-------------------------------------------------------------
Ingrese una opcion: )";
}

int main() {
    mostrarPortada();

    int opcion = -1;

    while (opcion != 0) {
        mostrarMenu();
        cin >> opcion;

        // Validación simple (sin funcionalidad, como pediste)
        if (opcion < 0 || opcion > 5) {
            cout << "Opcion invalida. Intente nuevamente.\n";
        } else if (opcion != 0) {
            cout << "\nFuncionalidad aun no implementada. Presione Enter para continuar...\n";
            cin.ignore(); // limpiar buffer
            cin.get();    // esperar Enter
            system(CLEAR);
            mostrarPortada();
        }
    }

    cout << "\nSaliendo del sistema...\n";
    return 0;
}
