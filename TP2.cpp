// TP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

#include "elementfacturable.h"
#include "facturablefraisfixe.h"
#include "facturableparunite.h"
#include "exceptionnuitee.h"
#include "exceptionnuiteedejaselectionee.h"
#include "exceptionrepas.h"
#include "exceptionrepasdejaselectionne.h"

using namespace std;

int main()
{
    int choix = 0;
    int nuitees = 0;
    int repas = 0;
    bool spa = false;
    bool gym = false;
    bool menu = false;
    vector<ElementFacturable*> tab;

    do {    
   
        cout << "Veuillez choisir parmi les facturables suivants. Vous devez choisir vos nuitees en premier ensuite vos repas." << endl;
        cout << "  1. Ajouter des nuitees : 100$ par nuit" << endl;
        cout << "  2. Ajouter des repas : 20$ par repas" << endl;
        cout << "  3. Ajouter un acces au spa : pour 75$, la personne a acces au spa pour la duree de son sejour" << endl;
        cout << "  4. Ajouter un acces au gym : pour 50$, la personne a acces au gym pour la duree de son sejour" << endl;
        cout << "  5. Afficher la facture " << endl;
        cin >> choix;

                switch (choix) {
                   
                case 1:
                    try {
                        if (nuitees <= 0) {
                            {
                                cout << "Saisir le nombre de nuitee pour votre sejour a l'hotel " << endl;
                                cin >> nuitees;
                                cout << "Vous avez choisi " << nuitees << " nuitees " << endl;
                                try {
                                    if (nuitees <= 0)  throw ExceptionNuitee(nuitees); {
                                        menu = true;
                                    }
                                }
                                catch (ExceptionNuitee ex) {
                                    cout << ex.what() << endl;
                                }
                           
                            }
                        }
                        else throw ExceptionNuiteeDejaSelectionee(nuitees); {
                           
                        }
                    }
                    catch (ExceptionNuiteeDejaSelectionee ex) {
                        cout << ex.what() << endl;
                    }
                   break;
               
                case 2:

                    if (nuitees > 0) {
                        try {
                            if (repas <= 0) {
                                {
                                    cout << "Saisir le nombre de repas pour votre sejour a l'hotel " << endl;
                                    cin >> repas;
                                    cout << "Vous avez choisi " << repas << " repas " << endl;
                                    try {
                                        if (repas <= 0)  throw ExceptionRepas(repas); {
                                            menu = true;
                                        }
                                    }
                                    catch (ExceptionRepas ex) {
                                        cout << ex.what() << endl;
                                    }

                                }
                            }
                            else throw ExceptionRepasDejaSelectionne(repas); {
   
                            }
                        }
                        catch (ExceptionRepasDejaSelectionne ex) {
                            cout << ex.what() << endl;
                        }
                    }
  
                    else {
                        cout << "Vous avez choisi " << nuitees << " nuitees " << endl;
                        cout << "Veuillez choisir vos nuitees en premier " << endl;
                    }
                    break;

                case 3:
                    if (nuitees > 0 || repas > 0) {
                        {
                            cout << "Vous avez ajoute l'acces au spa pour votre sejour a l'hotel " << endl;
                            spa = true;
                        }
                    }
                    else {
                        cout << "Veuillez choisir vos nuitees en premier ensuite vos repas " << endl;
                    }
                    break;

                case 4:
                    if (nuitees > 0 || repas > 0) {
                        {
                            cout << "Vous avez ajoute l'acces au gym pour votre sejour a l'hotel " << endl;
                            gym = true;
                        }
                    }
                    else {
                        cout << "Veuillez choisir vos nuitees en premier ensuite vos repas " << endl;
                    }
                    break;

                case 5:
                    ElementFacturable* fpu = new FacturableParUnite(nuitees, repas);
                    ElementFacturable* fff = new FacturableFraisFixe(spa, gym);
                    ElementFacturable* ef = new ElementFacturable(fpu->calculerFrais(), fff->calculerFrais());
                    tab.push_back(fpu);
                    tab.push_back(fff);
                    tab.push_back(ef);
            
                    for (int i = 0; i < tab.size(); i++) {
                        tab[i]->afficherFacture();
                    }
                    break;
                };        
    }
    while (choix != 5);
    cout << "Merci d'avoir choisi notre hotel" << endl;
    for (int i = 0; i < tab.size(); i++) {
        delete tab[i];
        cout << "Element facturable efface!" << endl;
        tab[i] == NULL;
    }
    exit(0);
    return 0;
}


