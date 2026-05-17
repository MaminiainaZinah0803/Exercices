#include <string>
class Moteur{
    private:
        int m_chevaux
        std::string m_typeCarburant;
    public:
        Moteur(int chevaux, std::string typeCarburant);
        void afficher();
};
