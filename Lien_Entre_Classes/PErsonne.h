#include <string>
class PErsonne{
    protected:
        std::string m_nom;
        int m_age;
    public:
    //constructeurs
    PErsonne(std::string nom, int age);
    //destructeur
    virtual ~PErsonne() = default;
    virtual void afficher();
    std::string getNom();
};
