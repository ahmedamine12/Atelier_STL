//
// Created by bouricha on 2021-12-30.
//



#include <iostream>
#include <deque>
#include <list>
#include <stack>

#include <unordered_map>
#include <algorithm>
using namespace std ;
namespace per {
    class Personne {
    private:
        string nom;
        string adresse;
        string num_tel;
    public:
        Personne(string, string, string);
       static void info_per(string nom,unordered_map<string,Personne>);
       static void afficher(unordered_map<string,Personne>);


    };



}
