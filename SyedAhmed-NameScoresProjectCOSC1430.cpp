#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
int CalculatedFinalScore = 0;
   //opens the file
std::ifstream infile("names.txt"); std::string line;
   int counter = 1;
   // does the processing of each name
while (std::getline(infile, line))
{
       
       int totalScore = 0; int TemporaryScore = 0;
std::istringstream iss(line);
string word;
       // processes each word in a given name 
if (!(iss >> word)) { break; } 
       // calculates the score of all names based on the criteria
       for(int i=0;i<word.length();i++){
           int _char = word[i];
           TemporaryScore += (_char-64);
       }
       //stores all namescore numerical values
totalScore = TemporaryScore*counter;
cout<<"The namescore for "<<word<<" is: "<<totalScore<<endl;

       CalculatedFinalScore += totalScore;
       //counter helps simplify things by making it easier to manage & identity the position of all the names in a given file
       counter++;
}
   // outputs the final score
   cout<<"Total sum of all name-scores int eh file is : "<<CalculatedFinalScore<<endl;
return 0;
}
