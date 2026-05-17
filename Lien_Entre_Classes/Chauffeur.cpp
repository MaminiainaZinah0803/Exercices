#include "Chauffeur.h"
#include <iostream>
Chauffeur::Chauffeur(std::string nom, int age, std::string numeroPermis)
    :PErsonne(nom, age), m_numeroPermis(numeroPermis){}
void Chauffeur::afficher(){
    PErsonne::afficher();
    std::cout << " | Chauffeur - Permis N°: " << m_numeroPermis << std::endl; 
}
std::string Chauffeur::getNumeroPermis(){
    return m_numeroPermis;
}
