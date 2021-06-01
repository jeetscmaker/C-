    #include <iostream>
    using namespace std;
     
// The only line contains two integers: n and m (3 ≤ n, m ≤ 50).
// n is an odd number.

    int main(){
       short n,m;
       cin>>n>>m;
       for (short i = 1; i <= n; i++)
       {
          for(short j = 1; j<=m; j++)
          {
             if(i%2 != 0) // for odd rows 1, 3, 5, ...
             {
                cout<<"#";
             }
             else // for even rows 2, 4, 6,...
             {
                if(i%4 == 0)
                {
                   if(j == 1) cout<<"#";
                   else cout<<".";
                }
                else
                {
                   if(j == m) cout<<"#";
                   else cout<<".";
                }
             }
          }
          cout<<endl;
       }
       
       return 0;
    }