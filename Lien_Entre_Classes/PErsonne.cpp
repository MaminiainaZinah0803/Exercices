#include "PErsonne.h"
#include <string>
PErsonne::PErsonne(std::string nom, int age): m_nom(nom), m_age(age){}
void PErsonne::afficher(){
    std::cout << "Nom : " <<m_nom<< ", Age : " << m_age << " ans";
}
std::string PErsonne::getNom(){
    return m_nom;
}
