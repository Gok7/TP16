/* 
 * File:   main.cpp
 * Author: carrefour
 *
 * Created on 12 septembre 2013, 08:16
 */

#include <cstdlib>

#include "C_VECTEUR.h"
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * 
 */


 //ex2
  
  void  initialisation_tableau( C_VECTEUR* ptr_vecteur)
  {
      int L_index;
      for(L_index=0;L_index<10;L_index++)
      {
          ptr_vecteur-> x=L_index;
           ptr_vecteur->y=L_index;
           ptr_vecteur->z=L_index;
           ptr_vecteur++;
      }
      
  }
  
  
  void debug_tableau(C_VECTEUR* ptr_vecteur)
  {
      
      for(int L_index=0;L_index<10;L_index++)
      {
      printf("C_VECTEUR:%x, X: %g, Y: %g, Z:%g \n", ptr_vecteur, ptr_vecteur->x,
              ptr_vecteur->y, ptr_vecteur->z);
      
      ptr_vecteur++;
      }
  }
  
  void affiche_position( C_VECTEUR* ptr_le_vecteur)
  {
      
       printf("\n\n**** Position:" );
       ptr_le_vecteur->affiche_toi();
  }

  

  
int main(int argc, char** argv) {


    C_VECTEUR un_vecteur(5,6,7);
    C_VECTEUR autre_vecteur(10);
    float L_scalaire;
    
    cout<<"Vecteur initialis 5,6,7, puis operateur++ : ";
    un_vecteur.operator ++();
    un_vecteur.affiche_toi();
    cout<<endl;
    
    cout<<"Autre vecteur initialis 10,0,0, puis operateur--: ";
    autre_vecteur.operator --();
    autre_vecteur.affiche_toi();
    cout<<endl;
    
    cout<<"Multiplication coor 2 vecteurs (xx',yy',zz'):";
    autre_vecteur=un_vecteur*C_VECTEUR(2,2,2);
    cout<<"La somme des coordonnees (xx',yy',zz'): ";
    autre_vecteur.affiche_toi();
    cout<<endl;
    
    L_scalaire=autre_vecteur
    cout<<un_vecteur;
    cout<<endl;
    
   
    return 0;
}

