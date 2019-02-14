/***********
 * Author:Roman Guerrero
 * Date:2/10/19
 * Description:Defines the member functions of the Fund class. This class can has a 
 * default constructor that initializes the member variables to noticeably invalid values
 * The overload constructor initializes member variables its parameters. There are get
 * and set methods. There is a bool function that returns true if there are more assets
 * in the Fund that is executing the function than the passed in Fund
 * File:funds.cpp
 * **********/

#include "funds.hpp"

/***********
 * Function:Fund();
 * Description:Default constructor that initializes member variables to noticeably
 * invalid values
 * **********/
Fund::Fund() {
  family = "";
  name = "";
  assets = -100;
  nav = -10;
}

/***********
 * Function:Fund(string,string,int,double);
 * Description:Overload constructor that initializes member variables to its parameters
 * **********/
Fund::Fund(string familyIn, string nameIn, int assetsIn, double navIn) {
  family = familyIn;
  name = nameIn;
  assets = assetsIn;
  nav = navIn;
}

/***********
 *Function:string getFamily()
 *Description:returns Fund family
 * ***********/
string Fund::getFamily() {
  return family;
}

/***********
 *Function:string getname()
 *Description:returns Fund name
 * ***********/
string Fund::getName() {
  return name;
}

/***********
 *Function:int getAssets()
 *Description:returns Fund assets 
 * ***********/
int Fund::getAssets() {
  return assets;
}

/***********
 *Function:double getNav()
 *Description:returns Fund Nav 
 * ***********/
double Fund::getNav() {
  return nav;
}

/***********
 *Function:void setAssets()
 *Description:Changes Fund assets to the int passed in
 * ***********/
void Fund::setAssets(int assetsIn) {
  assets = assetsIn;
}

/***********
 *Function:void setNav()
 *Description:Changes Fund nav to the double passed in
 * ***********/
void Fund::setNav(double navIn) {
  nav = navIn;
}

/**********
 *Function:bool hasMoreAssetsThan(Fund)
 *Returns true if the Fund that is being executed on has more assets than the Fund
 *that has been passed in
 * *********/
bool Fund::hasMoreAssetsThan(Fund fundIn) {
  if (assets > fundIn.getAssets())
    return true;
  else
    return false;
}








