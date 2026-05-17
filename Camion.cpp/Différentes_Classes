include "Camion.h"
include <iostream>
Camion::Camion(std::string marque, int chevaux, std::string carburant, double capaciteCharge)
    :Vehicule(marque, chevaux, carburant), m_capaciteCharge(capaciteCharge){}
void Camion::afficher(){
    Vehicule::afficher();
    std::cout <<" | Type : Camion (Capacité max : " << m_capaciteCharge << " tonnes)" << std::endl;
}
