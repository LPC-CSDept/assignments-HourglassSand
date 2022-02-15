#include <iostream>
using namespace std; 

int main ()
{
 int numFemale;
 int numMale; 
 int total; 
 int percentagetotal;


 double femalepercentage; 
 double malepercentage;

 cout << "How many female students are in class: "; 
 cin >> numFemale;

 cout << "How many male students are in the class: "; 
 cin >> numMale;
 
 total = (numFemale + numMale);

 femalepercentage = (numFemale / static_cast<float> (total) *100);

 malepercentage = (numMale / static_cast<float> (total) *100);
 
 
 



 


 percentagetotal = (malepercentage + femalepercentage);

 cout << femalepercentage << " " << malepercentage << endl;  

}
