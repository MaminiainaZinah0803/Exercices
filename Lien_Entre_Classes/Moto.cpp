#include "Moto.h"
#include <>
Moto::Moto(std::string marque, int chevaux, std::string carburant, bool aSidecar)
    :Vehicule(marque, chevaux, carburant), m_aSidecar(aSidecar){}
void Moto::afficher(){
    Vehicule::afficher();
    std::cout << " | Type : Moto" << (m_aSidecar ? " avec Sidecar" : "") << std::endl;
}
