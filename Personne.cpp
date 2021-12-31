//
// Created by bouricha on 2021-12-30.
//

#include "Personne.h"
#include <queue>
using namespace per;
Personne::Personne(string nom, string adresse, string num) {
    this->nom=nom ;
    this->adresse=adresse;
    this->num_tel=num ;

}






void Personne::info_per(string nom, unordered_map<string, Personne> P) {

    string adresse;
    string num ;
    //res=P<nom,P.>;
    adresse =P.find(nom)->second.adresse;
    num =P.find(nom)->second.num_tel;
    cout<< "\tl'adresse est :"<<adresse <<" le num est : "<< num ;




}



void Personne::afficher(unordered_map<string, Personne> P)
{
    priority_queue<string,vector<string>,greater<string>> q;
    for(auto it:P)
    {
        q.push(it.first);
    }
    while(!q.empty())
    {
        cout << "\n nom :" <<q.top();
        info_per(q.top(),P);
        q.pop();
    }




}
