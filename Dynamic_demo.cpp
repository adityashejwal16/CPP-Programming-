#include<iostream>
using namespace std;


int main()
{
  int lenght = 0;
  int *Arr = NULL;

 cout<<"Enter the number of element: \n"
 cin>>lenght;

// step 1 allocate the memory
 Arr = new int[lenght];
 if (Arr==NULL)
 {
    cout<<"Unable to allocate memory\n";

 }
 else
 {
    cout<<"Memory gets succesfully allocated\n";

 }
delete []Arr; 
    return 0;

}