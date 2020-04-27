#ifndef __FACTURABLEFRAISFIXE_H__
#define __FACTURABLEFRAISFIXE_H__

#include <iostream>
#include "elementfacturable.h"

class FacturableFraisFixe : public ElementFacturable {
private:

    //attributs
    const double PRIX_SPA = 75.00;
    const double PRIX_GYM = 50.00;
    bool spa = false;
    bool gym = false;

public:

    //constructeur sans paramètres
    FacturableFraisFixe();
    //constructeur, prends en paramètres les booléens spa et gym
    FacturableFraisFixe(bool spa, bool gym);
    //destructeur
    virtual ~FacturableFraisFixe();

    //getters
    virtual const double getPrixSpa() const;
    virtual const double getPrixGym() const;
    virtual bool getSpa() const;
    virtual bool getGym() const;

    //fonctions pour calculer les prix des facturables à frais fixes
    double calculerPrixSpa();
    double calculerPrixGym();
    double calculerFrais();

    //fonction pour afficher les elements facturables
    void afficherFacture();
};

#endif // __FACTURABLEFRAISFIXE_H__