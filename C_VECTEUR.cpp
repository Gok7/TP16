/* 
 * File:   C_VECTEUR.cpp
 * Author: carrefour
 * 
 * Created on 12 septembre 2013, 08:16
 */

#include "C_VECTEUR.h"
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <iostream>

 void C_VECTEUR::affiche_toi()const
{
    printf("(%g,%g,%g)",this->x,this->y,this->z);
    
}

void C_VECTEUR::mise_a_zero()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
    
}

void C_VECTEUR::initialise_toi(float P_X, float P_Y, float P_Z)
{
    this->x = P_X;
    this->y = P_Y;
    this->z = P_Z;    
}
void C_VECTEUR::debug()
{
    printf("C_VECTEUR:%x, X: %g, Y: %g, Z:%g",this, this->x,this->y,this->z);
}

 float C_VECTEUR::calcul_norme()
{
     float norme_vecteur;
     norme_vecteur=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
     
     return (norme_vecteur);
    
}
 
void C_VECTEUR::inverse_toi()
 {
     x=-x;
     y=-y;
     
     
 }
 
 void C_VECTEUR::inverse_x()
 {
     x=-x;
     
 }
 
  void C_VECTEUR::inverse_y()
  {
     
    y=-y; 
 }
  
  
  void C_VECTEUR::inverse_z()
  {
     
     z=-z;
 }
  
  
  C_VECTEUR::C_VECTEUR(float P_x, float P_y, float P_z)
  {
    x = P_x;
    y = P_y;
    z = P_z;
  }
 //ou C_VECTEUR::C_VECTEUR(float P_x, float P_y, float P_z) :x(P_x),y(P_y),z(P_y){}
  
  C_VECTEUR C_VECTEUR::operator ++()
  {
      x++;
      y++;
      z++;
      return *this;
  }
  
  C_VECTEUR C_VECTEUR::operator --()
  {
      x--;
      y--;
      z--;
      return *this;
  }
  
  C_VECTEUR C_VECTEUR::operator*(const C_VECTEUR& P_vecteur)
  {
      return C_VECTEUR(x*P_vecteur.x,y*P_vecteur.y,z*P_vecteur.z);
  }
  
 /*float C_VECTEUR::operator ^(const C_VECTEUR& P_vecteur)
  {
      
     return L_scalaire     ;  
  }*/
  
  ostream& operator<<(ostream& P_canal,const C_VECTEUR& P_vecteur)
  {
       P_canal<<"Coordonnees x: "<<P_vecteur.x<<"  Coordonnees y: "<<P_vecteur.y
               <<" Coordonnees z: "<<P_vecteur.z<<endl;
       return P_canal;
       
  }