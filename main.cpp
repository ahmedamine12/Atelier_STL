#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>
using namespace std;
/***************************** partie 1
deque<string> stocker(deque<string> l )
{
    string i  ;

   while(i.compare("fin")!=0)
   {
       cin >> i;
       l.push_back(i);

   }
    return l ;

}
 list<string> copier(deque<string> d , list<string> l)
 {

     if (d.empty())
     {
         cout<< "\n la liste est vide \n" ;
         return  l;

     }
     for(int i=0 ;i < d.size();i++)
    {
        l.push_back(d[i]) ;

    }
     return l ;
 }


void print_deq(deque<string> l)
{
    for(int i=0 ;i < l.size();i++)
    cout<< "\t"<< l[i] ;
}
void print_list(list<string> l)
{
    l.sort() ;
    for(auto it =l.begin();it!=l.end();++it)
        cout<< *it << "\t"  ;

}




int main() {
    std::deque<string> deq ;
    list<string> l ;
   deq = stocker(deq) ;
    print_deq(deq) ;
    cout<< "\n l'affichage de la liste \n" ;
    l= copier(deq , l) ;
    print_list(l) ;





    return 0;
}
 **************************************/
 /************************Partir 2
 stack<char> Inverser(stack<char> phrase)
 {
     stack<char> newphrase ;
     stack<char> oldphrase ;
     char i ;
     cout << "\n Donner la phrase\n" ;
     while ((i= getchar() ) !='\n' )
     {
        if(i!=' '&& i!='\t')
         {
             phrase.push(i);
             oldphrase.push(i);
         }

        // cout << phrase.size() ;

     }
     //

     for(int j =0 ; j != phrase.size();i++)
     {
        newphrase.push(phrase.top());
        phrase.pop() ;

     }
     for(int k=0;k!=oldphrase.size();k++)
     {
         if(oldphrase.top()!=newphrase.top())
         {
             cout << "\n Ce n'est pas un plindrome\n" ;
             return newphrase  ;

         }
         oldphrase.pop() ;
         newphrase.pop();

     }
     cout << "\n est un plindrome\n" ;
     return phrase ;

 }
 int main()
 {
     stack<char> phrase ;
    phrase= Inverser(phrase);



     return 0;
 }

******************/
/********************************Partie3
void print_queue(priority_queue<string> phrase)
 {
      int nbr ;

     cin >> nbr;

     string i  ;

     for(int j=0;j!=nbr;j++)
     {
         cin >> i;
         phrase.push(i) ;

     }
     for(int i =0 ;i!=nbr;i++)
     {
             cout << phrase.top();
             phrase.pop() ;
     }
     }
     int main()
     {

         priority_queue<string> phrase ;
         print_queue(phrase);
         return 0;
     }

********************************/