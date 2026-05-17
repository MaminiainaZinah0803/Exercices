#include "PErsonne.h"
class Chauffeur : public PErsonne{
    private:
        std::string m_numeroPermis;
    public:
        void afficher() override;
        std::string getNumeroPermis();
        //constructeurs
    Chauffeur(std::string nom, int age, std::string m_numeroPermis);
};
