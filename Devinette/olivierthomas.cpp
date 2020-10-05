// But : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition que l'utilisateur a faite.
// Auteur : Olivier Thomas
// Date : 2020 - 10 - 05

#include <iostream>
#include <time.h>
int main()
{
	int iRandom;
	int chance = 0;
	int essai=0;
	
	srand(time(0));
	iRandom = rand() % 101;

	std::cout << "Le nombre a ete choisi, veuillez tanter votre chance : ";
	std::cin >> essai;
	
	while (essai <= -1 || essai >= 101)
	{
		std::cout << "ERREUR - Veuillez entrer une chiffre entre 0 et 100 : ";
		std::cin >> essai;
	}
	
	while (essai != iRandom )
	{
		chance++;
		if (chance == 5)
		{
			std::cout << "Vous avez perdu !";
			return 0;
		}
		std::cout << "Manquer essayer une autre fois : ";
			std::cin >> essai;
			
			
			while (essai <= -1 || essai >= 101)
			{
				std::cout << "ERREUR - Veuillez entrer une chiffre entre 0 et 100 : ";
				std::cin >> essai;
			}
			
	}
	
	
	
	
	if (essai == iRandom)
	{
		std::cout << "Vous avez gagner !";
	}
	else
	{
		std::cout << "Vous avez perdu !";
	}


}

/*
 Plan de test :

 2 2 2 2 2 = devrais reussir ou echoue selon la chance
 -1 2 2 2 2 2 = Une Erreur car le -1 mais par la suite le programme devrais fonctionner
 101 2 2 2 2 2 = Une Erreur car le 101  mais le programme continue par la suite
 00000 = Devrais reussir ou echoue selon la chance


*/