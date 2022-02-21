#include <iostream>
using namespace std;

int main() {
   int T ;
   cin>>T;
   int count=0;
   while(T--){
       int x,y;
       cin>>x>>y;
       
       while(x!=y||x!=y+1){
           x=x+2;
           count++;
       }
          cout<<count<<endl; 
   }    
	return 0;
}
