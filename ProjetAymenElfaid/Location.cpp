//Auteur: Aymen El-faid
//But: Un programme qui calcule le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée
//Date: 17 Septembre 2020

#include <iostream>

using namespace std;

int main()
{
	//Déclaration des variables 
	float km;
	float coutKm;
	int duree;
	float coutDuree;
	float kmMax;
	float total;
	//On demande à l'utilisateur le kilometrage voyagé
	cout << "Combien de kilometres avez-vous voyagé? ";

	cin >> km;

	//On demande à lèutilisateur le nombre de jours voyagé
	cout << "Combien de jours avez-vous voyagé? ";
	cin >> duree;
	cout << endl;

	//On calcule le montant a payer selon le nonmbre de jour voyagé
	coutDuree = duree * 45;

	//On calcule le maximum de kilometrage permis en fonction du nombre de jours voyagé (250 km gratuit par jour)
	kmMax = duree * 250;


	//Si le nombre de kilometre permis par jour est depassé, on fait le calcul nécessaire
	if (km > kmMax)
	{
	 coutKm = (((km / 100) * 7.6)*1.25)+(km - 250)*0.05;
	}

	//Si le kilometrage nèest pas dépassé, on garde le cout lié au kilometrage à 0
	else
	{
		coutKm = 0;
	}

	//On additionne le tout 
	total = coutKm + coutDuree;

	//Et on imprime la réponse à l'utilisateur
	cout << "Le cout total est de $"<< total <<"!"<<endl;
	system("pause"); //Je mets un system pause car mon visual studio ferme mon application directement si j'en mets pas
}