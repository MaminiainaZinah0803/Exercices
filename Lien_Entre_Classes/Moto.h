#include "Vehicule.h"
class Moto : public Vehicule{
    private:
        bool m_aSidecar;
    public:
        void afficher() override;
//constructeurs
    Moto(std::string marque, float chevaux, std::string carburant, bool aSidecar);
};
