#include "Gestionnaire.h"

vector<Usager *> Gestionnaire::obtenirUsagers() const
{
    return usagers_;
}

void Gestionnaire::afficherLesProfils() const
{
    // TODO
	for (unsigned i = 0; i < usagers_.size(); i++)
	{
		usagers_[i]->afficherProfil();
	}
}

double Gestionnaire::obtenirChiffreAffaires() const
{
    // TODO
	double chiffreAffaire = 0;
	for (unsigned i = 0; i < usagers_.size(); i++)
	{
		chiffreAffaire += usagers_[i]->obtenirTotalAPayer();
	}
	return chiffreAffaire;
}

void Gestionnaire::ajouterUsager(Usager *usager)
{
    // TODO
	usagers_.push_back(usager);
}

void Gestionnaire::reinitialiser()
{
    // TODO
	for (unsigned i = 0; i < usagers_.size(); i++)
	{
		usagers_[i]->reinitialiser();
	}
}

void Gestionnaire::encherir(Client *client, ProduitAuxEncheres *produit, double montant) const
{
    // TODO
	for (unsigned i = 0; i < usagers_.size(); i++)
	{
		if (usagers_[i]->obtenirIdentifiant() == client->obtenirIdentifiant())
		{
			if (montant > produit->obtenirPrix())
			{
				produit->mettreAJourEnchere(client, montant);
			}
		}
	}
}
