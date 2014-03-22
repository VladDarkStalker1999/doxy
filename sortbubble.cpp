#include "func.h"

 int main() 
 {

	 srand(time(NULL));	
     int n, i, j;
     char* a;
     cout<<"Count of n: "<<endl;
	 cin>>n;
	 a = new char[n];
	 
	 cout<<"Mass:\n"<<endl; // количество
     for(i = 0 ; i < n; i++) 
	 { 
	 	a[i] = rand()% 256;
	 }
	 
	 for (i = 0 ; i < n; i++)
	 {
	 	cout<<a[i]<<"\t";
	 }
	 
	 for(i = 0 ; i < n ; i++)  //сортировка элементов
	 { 
	       for(j = 0 ; j < n - i - 1 ; j++) 
		   {  
	           if(a[j] > a[j+1]) 
			   {
	              int tmp = a[j]; a[j] = a[j+1] ; a[j+1] = tmp; 
	           }
	        }
	    }
	 cout<<"\nSorted:\n"<<endl;
	 for (i = 0 ; i < n; i++)
	 {
	 	cout<<a[i]<<"\t";
	 }
	 cout<<"\n"<<endl;
	 system ("pause");
 }