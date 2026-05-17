#include <stdio.h>

int main () {
    int n ;
    float tableau_notes [100], moyenne, somme = 0 , note_maximal = 0, *p ;
    printf(" Ce programme permet de gerer les notes des etudiants " );
    printf(" \n Saisir le nombre de notes : " );
        scanf(" %d ", &n );
    for(p = tableau_notes ; p < tableau_notes + 35 ; p++ )
    {
        printf(" \n Saisir l'element %d : ",p - tableau_notes + 1 );
        scanf(" %f ", p );
        somme += *p;
        if (*p < 0.00 || *p > 20.00)
        {
            printf(" \n Erreur ");
            printf(" \n Saisir l'element %d : ",p - tableau_notes + 1 );
            scanf(" %f ", p);
        }
        if (*p > note_maximal)
        {
            note_maximal = *p;
        }
    }
    moyenne = somme / 3 ;
    printf(" \n La note maximale est : %.2f ", note_maximal );
    printf(" \n La moyenne des notes est : %.2f", moyenne );
    return 0;
}