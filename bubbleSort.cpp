#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,sort=0;
   
   int a[10];
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; ++i) 
    {
    cin >> a[i];
  }
  
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
sort++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<sort<<endl;
return 0;
}