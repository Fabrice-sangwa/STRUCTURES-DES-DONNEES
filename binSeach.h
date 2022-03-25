
//Sommet  = Noeud

typedef struct noeud{

    int valeur;

   // struct noeud *sommet;

    struct noeud *gauche;
    struct noeud *droit;

} noeud;


noeud *creerNoeud(int valeur);
noeud *ajouterNoeud( noeud *racine, int valeur);
noeud *ajouterNouveuNoeud(noeud *nouveauNoeud, noeud *racine, noeud *pointeTemp );
void rechercherValeur (noeud *racine, int valeurRec);
void parcoursPrefixe (noeud *racine);
void parcoursInfixe (noeud *racine);
void parcoursSuffixe(noeud *racine);
