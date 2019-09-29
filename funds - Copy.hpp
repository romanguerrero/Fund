/*************
 * THIS IS MY CHANGE
 * Author:Roman Guerrero
 * Date:2/10/19
 * Description:Header file for the Fund class. Contains private and public
 * members of the Fund class
 * File:funds.hpp
 * **********/

#ifndef FUNDS_HPP
#define FUNDS_HPP

#include <string>

using std::string;

class Fund {

/*Class member variables include fund family, name, asset level, 
 * and NAV)*/    
  private:
    string family,
           name;
        
      int assets;
        
    double nav;
                  
/*Class member functions include default constructor, overload constructor,
 * get methods, and set methods*/
  public:
    Fund();
    Fund(string,string,int,double);
        
    string getFamily();
    string getName();
    int getAssets();
    double getNav(); 

    void setAssets(int);
    void setNav(double);

    //Returns true if Fund has more assets than passed in Fund
    bool hasMoreAssetsThan(Fund);  
};
#endif
