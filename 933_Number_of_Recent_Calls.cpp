
class RecentCounter {
private:
    int solicitudes[3001];
    int inicio;
    int fin;
    int cantidad;

public:
    // Inicializar la cola
    RecentCounter() {
        inicio = 0;
        fin = 0;
        cantidad = 0;
    }

    // Registrar y contar las solicitudes recientes
    int ping(int t) {
        int tiempoMinimo = t - 3000;

        // Eliminar las solicitudes antiguas
        while (cantidad > 0 && solicitudes[inicio] < tiempoMinimo) {
            inicio = (inicio + 1) % 3001;
            cantidad--;
        }

        // Agregar la nueva solicitud
        solicitudes[fin] = t;
        fin = (fin + 1) % 3001;
        cantidad++;

        return cantidad;
    }
};

