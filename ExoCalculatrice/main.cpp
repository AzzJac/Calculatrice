#include <iostream>
#include "Math.h"

//indique que l'on a besoin du namespace std
using namespace std;

int main() {
	cout << "Hello, World" << endl;
	cout << "Jacques\n";

	//declare les variables
	double nombre1 = 0, nombre2 = 0;
	double resultat = 0;
	string choix = "";

	//affiche le menu
	cout << "* Calculatrice *" << endl;
	cout << "- Addition : '+'" << endl;
	cout << "- Soustraction : '-'" << endl;
	cout << "- Multiplication : '*'" << endl;
	cout << "- Division : '/'" << endl;
	cout << "- Quitter : 'q'" << endl;
	cout << "Choix : ";

	//recupere ce que l'utilisateur saisie dans choix
	cin >> choix;

	//test si l'operateur correspond bien a +,-,*,/
	if (choix != "+" && choix != "-" && choix != "*" && choix != "/" && choix != "q") {
		cout << "l'operateur saisi n'est pas correct !" << endl;
	}
	else if (choix == "q") {
		exit(1);
	}
	else {
		//on demande a l'utilisateur de saisir le nombre1
		cout << "Entrez le premier nombre : " << endl;
		cin >> nombre1;
		//on demande a l'utilisateur de saisir le nombre2
		cout << "Entrez le deuxieme nombre : " << endl;
		cin >> nombre2;
		if (choix == "+") {
			resultat = Addition(nombre1,nombre2);
		}
		else if (choix == "-") {
			resultat = Soustraction(nombre1, nombre2);
		}
		else if (choix == "*") {
			resultat = Multiplication(nombre1, nombre2);
		}
		else if (choix == "/") {
			resultat = Division(nombre1, nombre2);
		}

		//affiche le resultat
		cout << "resultat de " << nombre1 << " " << choix << " " << nombre2 << " = " << resultat << endl;
	}

	return 0;
}