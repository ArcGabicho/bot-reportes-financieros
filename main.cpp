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

         BOT DE GENERACIÓN Y ENVÍO DE REPORTES FINANCIEROS
=====================================================================
)";
    this_thread::sleep_for(chrono::seconds(2));
}

void mostrarMenu() {
    cout << R"(
---------------------- MENÚ PRINCIPAL ----------------------

1. Generar reporte financiero mensual
2. Generar reporte financiero anual
3. Enviar reporte por correo electrónico
4. Configuración del sistema
5. Créditos
0. Salir

-------------------------------------------------------------
Ingrese una opción: )";
}

int main() {
    mostrarPortada();

    int opcion = -1;

    while (opcion != 0) {
        mostrarMenu();
        cin >> opcion;

        // Validación simple (sin funcionalidad, como pediste)
        if (opcion < 0 || opcion > 5) {
            cout << "Opción inválida. Intente nuevamente.\n";
        } else if (opcion != 0) {
            cout << "\nFuncionalidad aún no implementada. Presione Enter para continuar...\n";
            cin.ignore(); // limpiar buffer
            cin.get();    // esperar Enter
            system(CLEAR);
            mostrarPortada();
        }
    }

    cout << "\nSaliendo del sistema...\n";
    return 0;
}
