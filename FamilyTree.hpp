#include <string>


namespace family{
using namespace std;

   class Tree{
       public:
        Tree (string s);
        Tree ();
       string name;
       Tree * mother;
       Tree * father;
       void remove(string s);
       string display();
       string find( string s);
       string relation(string s);
       Tree addMother(string s,string m);
       Tree addFather(string s,string f);
   };


}


    
    

