#include <iostream>
#include <vector>
#include <memory>

#include "Chauffeur.h"
#include "Moto.h"
#include "Camion.h"
int main(){
    std::cout << " creation du personnel " << std::endl;
    Chauffeur chaffeur1("Bema", 34, " PERMIS-B-12345");
    PErsonne passager("Rabe", 25);

    chauffeur1.afficher();
    passager.afficher();
    std::cout << "\n\n";

    std::cout << " creation et demonstration des vehicules"<< std::endl;

    std::vector<std::unique_ptr<Vehicule>> flotte;

    flotte.push_back(std::make_unique<Moto>("Yamaha", 75, "Essence", false));
    flotte.push_back(std::make_unique<Camion>("Scania", 500, "Diesel", 18.5));

    for (auto & vehicule : flotte){
        vehicule -> afficher();
    }

    std::cout << " \n Attribution d'un chauffeur "<< std::endl;
    std::cout << chauffeur1.getNom() << " prend le volant du camion Scania" << std::endl;
    return 0;
}
