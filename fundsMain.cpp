/************
 *Main for Fund files
 *File:fundsMain.cpp
 **************/

#include <iostream>
#include "funds.hpp"


using std::cout;
using std::endl;

int main() {

  //Initialize class
  Fund f1("Spy", "All Cap", 432, 11.60);

  //List fund facts
  cout << "The " << f1.getFamily() << " " << f1.getName() << " Fund: \n";  

  cout << "Total Assets: $" << f1.getAssets() << " million\n";

  cout << "NAV: $" << f1.getNav() << " \n";

  //Repeat for fund2
  Fund f2("Dow", "Mid Cap", 320, 10.4);

  cout << "Who has more assets? \n";
  
  cout << "The " << f2.getFamily() << " " << f2.getName() << " Fund: \n";  

  cout << "Total Assets: $" << f2.getAssets() << " million\n";

  cout << "NAV: $" << f2.getNav() << " \n";

  //Determine who has more assets
  if(f1.hasMoreAssetsThan(f2))
    cout << f1.getName() << "\n";
  else
    cout << f2.getName() << "\n";







  return 0;
}



