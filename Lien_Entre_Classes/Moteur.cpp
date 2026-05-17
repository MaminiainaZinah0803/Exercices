#include "Moteur.h"
#include <iostream>

Moteur::Moteur(int chevaux, std::string typeCarburant)
    :m_chevaux(chevaux), m_typeCarburant(typeCarburant){}
void Moteur::afficher(){
    std::cout << " Moteur: " << m_chevaux << " cv (" << m_typeCarburant << ")";
}
