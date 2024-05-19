#include<bits/stdc++.h>

using namespace std;

int main(){

  int i, t=0, n=0; // t - cases; n - lenght vect

  cin >> t;

  for(i=0;i<t;i++){
	  cin >> n;
    int j, vector[n];
	  for(j=0; j<n; j++){
	    cin >> vector[j];
	  }
		
	  // ordena
		sort(vector, vector + n);

	  int flag=0;
		
 	  // diferenca
    for(j=0; j<n-1; j++){

			if(vector[j] == vector[j+1]){}
	    else if(vector[j]!=(vector[j+1]-1)){
				flag=1;
			}
	  }
		
		if(flag==1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}


  }

	
}
