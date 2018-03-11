#include "ClientPremium.h"
#include <iostream>

ClientPremium::ClientPremium(unsigned int joursRestants)
    : Client(),
      joursRestants_(joursRestants)
{
}

ClientPremium::ClientPremium(const string &nom, const string &prenom, int identifiant,
                             const string &codePostal, unsigned int codeClient,
                             unsigned int joursRestants)
    : Client(nom, prenom, identifiant, codePostal, codeClient),
      joursRestants_(joursRestants)
{
}

unsigned int ClientPremium::obtenirJoursRestants() const
{
    return joursRestants_;
}

double ClientPremium::obtenirTotalAPayer() const
{
    // TODO
	double total = 0;
	for (unsigned i = 0; i < panier_.size(); i++)
	{
		if (panier_[i]->obtenirPrix() > 5)
		{
			total += panier_[i]->obtenirPrix();
		}
	}
	return total;
}

void ClientPremium::afficherProfil() const
{
    // TODO
	Client::afficherProfil();
	cout << "\tjours restant:\t" << joursRestants_ << endl;
}

void ClientPremium::modifierJoursRestants(unsigned int joursRestants)
{
    joursRestants_ = joursRestants_;
}
