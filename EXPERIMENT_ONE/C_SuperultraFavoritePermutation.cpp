#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
      int n;
      cin>>n;
      if(n<5){
        cout<<-1<<endl;
        continue;
       }
      int even, odd;
      // if(n%2==0){
      //   even=n/2;
      //   odd=n/2;
      // }else{
      //   even=n/2;
      //   odd=n/2+1;
      // }
      if(n==5){
        vector<int> result;
        for(int i=1; i<=n; i+=2){
          if(i==5){
            continue;
          }else{
            result.push_back(i);
          }
        }
        result.push_back(5);
        result.push_back(4);
        for(int i=2; i<=n; i+=2){
          if(i==4){
            continue;
          }else{
            result.push_back(i);
          }
        }
        for(int x: result){
          cout<<x<<" ";
        }
        cout<<"\n";
        continue;
      }
      vector<int> result;
      for(int i=1; i<=n; i+=2){
        if(i==3){
          continue;
        }else{
          result.push_back(i);
        }
      }
      result.push_back(3);
      result.push_back(6);
      for(int i=2; i<=n; i+=2){
        if(i==6){
          continue;
        }else{
          result.push_back(i);
        }
      }
      for(int x: result){
        cout<<x<<" ";
      }
    cout<<"\n";
    }
    return 0;
}