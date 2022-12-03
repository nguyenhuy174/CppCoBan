#include<iostream>
using namespace std;

int main() {
	for(int i=1; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			for(int m=0; m<10; m++)
	        {
		        for(int n=0; n<10; n++)
		        {
			      if((i+j)%2 != 0 && (m+n)%2 == 0)
			      {
				    cout << i << j << m << n << " ";				 			
			    }
	    	}
	    }
	}
}
	
	system("pause");
	return 0;
}
