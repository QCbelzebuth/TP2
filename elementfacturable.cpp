#include "elementfacturable.h"
#include <vector>

using namespace std;

//constructeur sans paramètres
ElementFacturable::ElementFacturable(){
    ElementFacturable::frais_unite;
    ElementFacturable::frais_fixe;

}

//constructeur, prends frais_unite et frais_fixe en paramètres
ElementFacturable::ElementFacturable(double frais_unite, double frais_fixe){
    ElementFacturable::frais_unite = frais_unite;
    ElementFacturable::frais_fixe = frais_fixe;
}

//destructeur
ElementFacturable::~ElementFacturable(){}

//getters

const double ElementFacturable::getFraisUnite() const{
    return this->frais_unite;
}

const double ElementFacturable::getFraisFixe() const {
    return this->frais_fixe;
}

//fonction, permet de calculer le prix total des frais à payer
double ElementFacturable::calculerFrais()
{
    double total = getFraisUnite() + getFraisFixe();
    return total;
}

//fonction, permet d'afficher la facture
void ElementFacturable::afficherFacture() {

	double frais;
	frais = calculerFrais();
	cout << "Total: " <<frais << "$" << endl; 
}
