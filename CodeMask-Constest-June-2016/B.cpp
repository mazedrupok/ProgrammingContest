#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tc;
   cin >> tc;
   while(tc--)
   {
       int a , b;
       int k;
       cin >> a;
       vector<int> vc , vk;
       for(int i = 0; i < a; i++)
       {
         cin >> k;
         vc.push_back(k);
         if(k % 2 == 0)
            vk.push_back(k);
       }
       sort(vc.begin(), vc.end());
       bool flag = false;
       int c= 0;
       for(int i = 0; i < vk.size(); i++)
       {
         flag = binary_search(vc.begin(), vc.end(), vk[i] / 2);
         if(flag == true)
            c++;

       }
       cout<<c<<endl;
       vk.clear();
       vc.clear();
   }
}
