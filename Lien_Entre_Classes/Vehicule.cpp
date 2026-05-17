#include "Vehicule.h"
#include <iostream>
Vehicule::Vehicule(std::string marque, int chevaux, std::string carburant)
    : m_marque(marque), m_moteur(chevaux, carburant){}
void Vehicule::afficher(){
    std::cout << " Vehicule Marque : "<< m_marque << " | ";
    m_moteur.afficher()
}
