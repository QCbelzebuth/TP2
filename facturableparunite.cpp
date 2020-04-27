#include "facturableparunite.h"
#include <vector>
using namespace std;

//constructeur sans paramètres
FacturableParUnite::FacturableParUnite() {
    FacturableParUnite::duree;
    FacturableParUnite::nb_repas;
    FacturableParUnite::PRIX_NUITEE;
    FacturableParUnite::PRIX_REPAS;

};

//constructeur, prend en paramètres les entiers durée et nb_repas
FacturableParUnite::FacturableParUnite(int duree, int nb_repas) {
    FacturableParUnite::duree = duree;
    FacturableParUnite::nb_repas = nb_repas;
    FacturableParUnite::PRIX_NUITEE;
    FacturableParUnite::PRIX_REPAS;
}

//destructeur
FacturableParUnite::~FacturableParUnite() {}

//getters
const double FacturableParUnite::getPrixNuitee() const{ 
    return PRIX_NUITEE; 
}
const double FacturableParUnite::getPrixRepas() const{ 
    return PRIX_REPAS; 
}
int FacturableParUnite::getDuree() const { 
    return duree; 
}
int FacturableParUnite::getNbRepas() const {
    return nb_repas;
}

//fonction, permet de calculer le prix total des nuitées après taxes
double FacturableParUnite::calculerPrixNuitees(int duree)
{
    double taxe_nuitee = ((PRIX_NUITEE * 13 / 100) + PRIX_NUITEE) * duree;
    return taxe_nuitee;
}

//fonction, permet de calculer le prix total des repas après taxes
double FacturableParUnite::calculerPrixRepas(int nb_repas)
{
    double taxe_repas = ((PRIX_REPAS * 13 / 100) + PRIX_REPAS) * nb_repas;
    return taxe_repas;
}

//fonction, permet de calculer le total des frais facturables par unité
double FacturableParUnite::calculerFrais()
{
    double frais_nuitee, frais_repas, total;
    frais_nuitee = calculerPrixNuitees(getDuree());
    frais_repas = calculerPrixRepas(getNbRepas());
    total = frais_nuitee + frais_repas;
    return total;
}

//fonction, permet d'afficher la facture
void FacturableParUnite::afficherFacture() {
	double prix_nuitees, prix_repas;
	prix_nuitees =calculerPrixNuitees(duree);
	prix_repas = calculerPrixRepas(nb_repas);
	cout << "Le nombre total de nuitees est de " << duree << " et le montant total est de " << prix_nuitees << "$" << endl;
	cout << "Le nombre total de repas est de " << nb_repas << " et le montant total est de " << prix_repas << "$" << endl;

}