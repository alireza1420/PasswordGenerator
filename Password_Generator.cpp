#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<time.h>

using namespace std;

int main(){
	
	srand(time(0));
	string Pass;
	
	int Numb;
	string Data="abcdefghijklmnopqrstuvwxyz"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				"0123456789"
				"!@#$%^&*()></|\,";
			cout<<"Enter how Many Words Your Password You Want To Be"<<endl;
				cin>>Numb;
				for(int i=0;i<Numb;i++){
				Pass=Pass+Data[rand()%93];
			
				}
			
				cout<<"Your Pass Is = "<<Pass;
				
				return 0;
	
}
