//Auteur: Aymen El-faid
//But: Un programme qui calcule le montant qu'un individu devra d�bourser pour faire un voyage dans une automobile lou�e
//Date: 17 Septembre 2020

#include <iostream>

using namespace std;

int main()
{
	//D�claration des variables 
	float km;
	float coutKm;
	int duree;
	float coutDuree;
	float kmMax;
	float total;
	//On demande � l'utilisateur le kilometrage voyag�
	cout << "Combien de kilometres avez-vous voyag�? ";

	cin >> km;

	//On demande � l�utilisateur le nombre de jours voyag�
	cout << "Combien de jours avez-vous voyag�? ";
	cin >> duree;
	cout << endl;

	//On calcule le montant a payer selon le nonmbre de jour voyag�
	coutDuree = duree * 45;

	//On calcule le maximum de kilometrage permis en fonction du nombre de jours voyag� (250 km gratuit par jour)
	kmMax = duree * 250;


	//Si le nombre de kilometre permis par jour est depass�, on fait le calcul n�cessaire
	if (km > kmMax)
	{
	 coutKm = (((km / 100) * 7.6)*1.25)+(km - 250)*0.05;
	}

	//Si le kilometrage n�est pas d�pass�, on garde le cout li� au kilometrage � 0
	else
	{
		coutKm = 0;
	}

	//On additionne le tout 
	total = coutKm + coutDuree;

	//Et on imprime la r�ponse � l'utilisateur
	cout << "Le cout total est de $"<< total <<"!"<<endl;
	system("pause"); //Je mets un system pause car mon visual studio ferme mon application directement si j'en mets pas
}