#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__
#include <vector>
#include <iostream>


using namespace std;

class ElementFacturable{

private:
    //attributs
    /*int nuitees;
    int repas;
    bool spa;
    bool gym;
    double prix_nuitees;
    double prix_repas;
    double prix_spa;
    double prix_gym;
    double total;*/
    double frais_unite=0;
    double frais_fixe=0;

    //vector<ElementFacturable*> tab;


public:

    //constructeur pas défaut
    ElementFacturable();

    //constructeur, prends frais_unite et frais_fixe en paramètres
    ElementFacturable(double frais_unite, double frais_fixe);

    //destructeur
    virtual ~ElementFacturable();

    virtual const double getFraisUnite() const;

    virtual const double getFraisFixe() const;

    //fonction, permet de calculer le prix total des frais à payer
    virtual double calculerFrais();

    //fonction, permet d'afficher la facture
    virtual void afficherFacture();

};

#endif // __ELEMENTFACTURABLE_H__