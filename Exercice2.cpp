//
// Created by bouricha on 2021-12-30.
//
/*
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <algorithm>
using namespace std;

string Remplacer(string mot)
{
    for(int i =0 ; i!=mot.size();i++)
    {
        if(mot[i]>='a'&& mot[i]<='z'&&(mot[i]=='a'||mot[i]=='e'||mot[i]=='i'||mot[i]=='o'))
            mot[i]='*';
    }
    return mot ;

}
void Repertorie(list<string> l)
{
    for(auto it =l.begin();it!=l.end();++it)
        cout << "\n"<< *it << "\n"  ;
}
list<string>Transform(list<string>l)
{
    for(auto it =l.begin();it!=l.end();++it)
    {
      *it=  Remplacer(*it);
    }
    Repertorie(l);
    return l;

}

/*
//partie 1 :
int main()
{
    list<string>l ;
    l.push_back("hello");
    l.push_back("AMine");
    l.push_back("can ");
    l.push_back("find");
    list<string> l1(l.size());
 // transform(l.begin(),l.end(),l1.begin(), Remplacer );
   /* transform(l.begin(),l.end(),l1.begin(), [](string mot)
    {
        for(int i =0 ; i!=mot.size();i++)
        {
            if(mot[i]>='a'&& mot[i]<='z'&&(mot[i]=='a'||mot[i]=='e'||mot[i]=='i'||mot[i]=='o'))
                mot[i]='*';
        }
        return mot ;

    } );
    Repertorie(l1);
    */
/*


    transform(l.begin(),l.end(),l1.begin(),[](string mot)
    {
        transform(mot.begin(),mot.end(),mot.begin(), [](char car){
            return toupper(car);
        }); return mot;
    });
    Repertorie(l1);




//Repertorie(l);
    //cout<<"hellllooooooooooo" ;
   // string mot="aMine";
   // mot= Remplacer(mot);
 //  l= Transform(l);


    //cout<<mot;
    return 0 ;
}
*/


