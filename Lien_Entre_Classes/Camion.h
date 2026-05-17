#include "Vehicule.h"
class Camion : public Vehicule{
    private:
        double m_capaciteCharge;
    public:
        void afficher() override;
    //constructeurs
    Camion(std::string marque, int chevaux, std::string carburant, double capaciteCharge);
};
