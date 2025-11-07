#include "Graph.hpp" // Asegúrate de que este archivo contenga la definición de la clase Graph

using namespace std;

int main() {
    // Crear un grafo con 10 vértices
    Graph G(10);
    
    // Agregar aristas al grafo
    G.addEdge(0, 9);
    G.addEdge(4, 2);
    
    // Imprimir la matriz de adyacencia
    cout << "Matriz de adyacencia:\n";
    G.print();
    
    // Mostrar el número total de aristas
    cout << "Número de aristas: " << G.numEdges() << "\n";
    
    // Elegir un vértice para calcular su in-degree
    int vertex = 4;
    cout << "In-degree de " << vertex << ": " << G.inDegree(vertex) << "\n";
    
    // Verificar si el vértice es un influencer
    cout << "¿Es el vértice " << vertex << " un influencer? " 
         << (G.isInfluencer(vertex) ? "Sí" : "No") << "\n";

    return 0;
}
