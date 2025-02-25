#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "../Views/ConsolaVista.h"
#include "../Clases/Imagen.h"
#include "../Clases/SegmentadorImagenes.cpp"

class ControladorSegmentador {
private:
    ConsolaVista vista;
    SegmentadorImagen segmentador;
    Imagen imagenActual;

public:
    /**
    * Segmenta una imagen usando semillas y guarda el resultado en un archivo
    * @param std::vector<std::tuple<int, int, int>>& semillas - Lista de semillas para la segmentación
    * @param std::string& salida - Nombre del archivo de salida donde se guardará la imagen segmentada
    * @return void
    */
    // Metodo para segmentar una imagen usando semillas y guardar el resultado en un archivo
    void segmentarImagen(std::vector<std::tuple<int, int, int>>& semillas, std::string& salida) {
        std::cout << "Llamada a segmentarImagen con " << semillas.size() << " semillas y salida: " << salida << std::endl;
        // Se simula la segmentacion de la imagen
        Imagen imagenSegmentada = segmentador.segmentar(imagenActual, semillas);
        imagenSegmentada.guardarComoPGM(salida);
    }
};
