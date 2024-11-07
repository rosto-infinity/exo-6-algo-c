#include <stdio.h>
#include <string.h>

int compterBigramme(const char *chaine, const char *bigramme) {
    int compteur = 0;
    int longueurChaine = strlen(chaine);
    int longueurBigramme = strlen(bigramme);

    // Vérifie que le bigramme a une longueur de 2
    if (longueurBigramme != 2) {
        printf("Le bigramme doit avoir une longueur de 2.\n");
        return -1; // Erreur
    }

    // Parcours de la chaîne
    for (int i = 0; i <= longueurChaine - longueurBigramme; i++) {
        // Vérifie si le bigramme correspond aux deux lettres à la position i
        if (strncmp(&chaine[i], bigramme, longueurBigramme) == 0) {
            compteur++;
        }
    }

    return compteur; // Retourne le nombre d'occurrences
}

int main() {
    const char *chaine = "bonjour bonjour";
    const char *bigramme = "on";

    int occurrences = compterBigramme(chaine, bigramme);
    
    if (occurrences != -1) {
        printf("Le bigramme \"%s\" apparaît %d fois dans la chaîne \"%s\".\n", bigramme, occurrences, chaine);
    }

    return 0;
}
// Explication du Code
// Fonction compterBigramme :

// Prend en entrée une chaîne et un bigramme.
// Initialise un compteur à zéro.
// Vérifie que le bigramme a bien une longueur de 2.
// Parcourt la chaîne jusqu'à la longueur de la chaîne moins la longueur du bigramme.
// Utilise strncmp pour comparer les lettres à la position actuelle avec le bigramme.
// Incrémente le compteur à chaque correspondance.
// Fonction main :

// Définit une chaîne et un bigramme à rechercher.
// Appelle la fonction compterBigramme et affiche le résultat.