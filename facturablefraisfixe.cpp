#include "facturablefraisfixe.h"

//constructeur sans paramètres
FacturableFraisFixe::FacturableFraisFixe() {
    FacturableFraisFixe::PRIX_SPA;
    FacturableFraisFixe::PRIX_GYM;
    FacturableFraisFixe::spa;
    FacturableFraisFixe::gym;
};
//constructeur, prends en paramètres les booléens spa et gym
FacturableFraisFixe::FacturableFraisFixe(bool spa, bool gym) {
    FacturableFraisFixe::PRIX_SPA;
    FacturableFraisFixe::PRIX_GYM;
    FacturableFraisFixe::spa = spa;
    FacturableFraisFixe::gym = gym;
};

//destructeur
FacturableFraisFixe::~FacturableFraisFixe() {}

//getters
const double FacturableFraisFixe::getPrixSpa() const{ 
    return PRIX_SPA; 
}
const double FacturableFraisFixe::getPrixGym() const {
    return PRIX_GYM; 
}
bool FacturableFraisFixe::getSpa() const {
    return spa;
}
bool FacturableFraisFixe::getGym() const {
    return gym;
}

//fonction, permet de calculer le prix du spa après taxes
double FacturableFraisFixe::calculerPrixSpa()
{
    double taxe_spa = (PRIX_SPA * 15 / 100) + PRIX_SPA;
    return taxe_spa;
}

//fonction, permet de calculer le prix du gym après taxes
double FacturableFraisFixe::calculerPrixGym()
{
    double taxe_gym = (PRIX_GYM * 15 / 100) + PRIX_GYM;
    return taxe_gym;
}

//fonction, permet de calculer le prix total des frais fixes à payer
double FacturableFraisFixe::calculerFrais()
{
	bool spa, gym;
	spa = getSpa();
	gym = getGym();
	double prix_spa, prix_gym, total;
	total = 0;

	prix_gym = calculerPrixGym();
	if (spa == true) {
		prix_spa = calculerPrixSpa();
		total += prix_spa;
	}
	else {
		total =0;
	}
	if (gym == true) {
		prix_gym = calculerPrixGym();
		total += prix_gym;
	}
	else {
		total = 0;
	}
    return total;
}

//fonction pour afficher les elements facturables
void FacturableFraisFixe::afficherFacture() {

	bool spa, gym;
	spa = getSpa();
	gym = getGym();
	double prix_spa, prix_gym;
	prix_spa = calculerPrixSpa();
	prix_gym = calculerPrixGym();
	if (spa == true) {
		cout << "Vous avez l'acces au spa pour : " << prix_spa << "$" << endl;
	}
	else {
		cout << "Vous n'avez pas acces au spa " << endl;
	}
	if (gym == true) {
		cout << "Vous avez l'acces au gym pour : " << prix_gym << "$" << endl;
	}
	else {
		cout << "Vous n'avez pas acces au gym " << endl;
	}

}