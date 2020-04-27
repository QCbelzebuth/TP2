#ifndef __FACTURABLEPARUNITE_H__
#define __FACTURABLEPARUNITE_H__

#include <iostream>
#include "elementfacturable.h"
#include <vector>
using namespace std;

class FacturableParUnite : public ElementFacturable {
private:

    //attributs
    int duree = 0;
    int nb_repas = 0;
    const double PRIX_NUITEE = 100.00;
    const double PRIX_REPAS = 20.00;


public:

    //constructeur sans param�tres
    FacturableParUnite();

    //constructeur, prends la dur�e et le monbre de repas en param�tres
    FacturableParUnite(int duree, int nb_repas);

    //destructeur
    virtual~FacturableParUnite();

    //getters
    virtual const double getPrixNuitee() const;
    virtual const double getPrixRepas() const;
    virtual int getDuree() const;
    virtual int getNbRepas() const;

    //fonctions pour calculer les prix des facturables par unit�
    double calculerPrixNuitees(int duree);
    double calculerPrixRepas(int nb_repas);
    double calculerFrais();

    //fonction pour afficher les elements facturables
    void afficherFacture();
};

#endif // __FACTURABLEPARUNITE_H__