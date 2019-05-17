/* 
 * File:   C_VECTEUR.h
 * Author: carrefour
 *
 * Created on 12 septembre 2013, 08:16
 */
#include <iostream>
#ifndef C_VECTEUR_H
#define	C_VECTEUR_H

using namespace std;

class C_VECTEUR
{
    friend ostream& operator<<(ostream& P_canal,const C_VECTEUR& P_complexe);
    
public:
    float x;
    float y;
    float z;
 

    C_VECTEUR(float P_x,float P_y=0,float P_z=0);
    void affiche_toi()const;
    void mise_a_zero();
    void initialise_toi(float P_x,float P_y,float P_z);
    void debug();
    float calcul_norme();
    void inverse_toi();
    void inverse_x();
    void inverse_y();
    void inverse_z();
    C_VECTEUR operator++();
    C_VECTEUR operator--();
    C_VECTEUR  operator*(const C_VECTEUR& P_vecteur);
    float operator^(const C_VECTEUR& P_vecteur);

    
};
#endif	/* C_VECTEUR_H */

