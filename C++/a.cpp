    #include <iostream>
    using namespace std;

    int main(){
       short n,k;
       cin>>n>>k;
       short r = 240-k;
       short i = 1, count = 0;
       while(r>=0 && i<=n){
          r = r - (i*5);
          if(r>=0) count++;
          i++;
       }  
       cout<<count;     
       return 0;
    }