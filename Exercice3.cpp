//
// Created by bouricha on 2021-12-30.
//
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <algorithm>
#include "Personne.h"
using namespace std;
using namespace per;
int main()
{
   Personne p1("Amine ","Ain borja","06773532");
    Personne p2("Youssef ","Ain borja","06773532");
    Personne p3("Mohamed ","Ain borja","06773532");
    Personne p4("Bouricha ","Ain borja","06773532");
unordered_map<string ,Personne > map1;
map1.insert(make_pair("Amine",p1));
    map1.insert(make_pair("Youssef",p2));
    map1.insert(make_pair("Mohamed",p3));
    map1.insert(make_pair("Bouricha",p4));
     Personne::afficher(map1);




    return 0;
}
