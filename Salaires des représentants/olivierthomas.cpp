// But :  un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme
// Auteur : Olivier Thomas
// Date : 2020 - 10 - 05

#include <iostream>

int main()
{
	double recu = 250;
	double vente;
	double gagner;

	std::cout << " Veuillez entrer le montant de vos vente cette semaine : ";
	std::cin >> vente;

	if (vente == -1)
	{
		return 0;
	}
	while (vente <= -2)
	{
		std::cout << "ERREUR -  Veuillez entrer un Nombre positif : ";
		std::cin >> vente;
	}

	gagner = recu+ ((vente* 7.5)/ 100);

	std::cout << "Vous avez gagner : " << gagner << "$";
	
	
}

/*
	Plan test :

	100 donc 7.5% est 7.5$ resultat = 257.5$
	0 donc 7.5% est 0 resultat = 250$
	-1 le programme stop
	-2 Erreur et je recommence avec un nouveau chiffre


*/