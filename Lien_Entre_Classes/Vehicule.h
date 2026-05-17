#include <string>
#include <Moteur.h>

class Vehicule{
    protected:
        std::string m_marque;
        Moteur m_moteur;
    public:
        Vehicule(std::string marque, int chevaux, std::string carburant);
        virtual ~Vehicule() = default;
        virtual void afficher();
};
