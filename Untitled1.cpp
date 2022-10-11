#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
  ifstream input_file("Goose.txt");
  if (!input_file)
  {
    cout<< "Uable to open the file"<< endl;
    return EXIT_FAILURE;
  }
  string month = " ";
  int monthly_date = 0;
  int total_goose = 0;

  while(input_file >> month>> monthly_date)
  {
    int total_monthly_goose = 0;
    for (int count = 1; count <= monthly_date; count++)
    {
      int goose_encounter = 0;
      input_file >> goose_encounter;
      total_monthly_goose += goose_encounter;
      
      
    }
    cout << "Average Gooses of " << month <<" is " << double (total_monthly_goose)/monthly_date<< endl;
    total_goose += total_monthly_goose;
  }
  
  cout << "Total Gooses Encounter is " << total_goose;
  input_file.close();
  return EXIT_SUCCESS;
}
