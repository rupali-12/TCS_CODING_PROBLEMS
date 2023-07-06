// Find n - th number whose Prime Factors are 1, 2, 3, 5 Topic : Find n - th number whose Prime Factors are 1, 2, 3, 5

#include <bits/stdc++.h>
using namespace std;
int main()
{
     int num;
     cin>>num;
     int c=0;
    for(int i=1; i<=1000; i++){
        int n=i;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
        }

        if (n == 1)
        {
            c++;
        }
      if(c==num){
        cout<<i<<endl;
        break;
      }
    }

    return 0;
}