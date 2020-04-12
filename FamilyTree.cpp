#include <iostream>
#include <string>
#include "FamilyTree.hpp"

using namespace std;

namespace family{

     Tree::Tree(string name) {}
     Tree::Tree(){}
        
    Tree Tree::addFather(string s,string f){
            Tree _father= Tree (f);
            father = &_father;
            return *this;
        }
        Tree Tree::addMother(string s,string m){
            Tree _mother= Tree (m);
            mother = &_mother;
            return *this;
        }
        string Tree::display(){
            return ";";
        }
        string Tree::relation (string s){
            return "";
        }
        void Tree::remove( string s){

        }
        string Tree::find (string s){
            return "";
        }
    

}
 
