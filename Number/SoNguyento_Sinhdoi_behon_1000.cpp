#include<iostream>
#include<cmath>
using namespace std;
bool KTNT(int a) {
	if(a<2)
	{
	 return false;
       } else {
	      for(int j = 2; j < a; j++)
          {
         	 if(a%j == 0)
         	 {
 	          return false;  
			   }      	               
		    }
			return true;
		}	    		   
}
int main() {
	for(int i=3; i<=1000; i++)
	{
	    if(KTNT(i) == true && KTNT(i-2) == true)
	    
			cout << "(" << i-2 << "," << i << ")" << " ";
		
	}
	system("pause");
	return 0;
}
