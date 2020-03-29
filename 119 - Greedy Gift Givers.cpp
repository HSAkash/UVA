#include <iostream>
#include<string>
#include<cstring>
#include<sstream>
#include <cstdlib>
#define N '\n'
#define SP ' '
using namespace std;

int split(string return_str[], string str, char delimeter)
{
   stringstream ss(str);
   string temp;
   int i = 0;
   while(getline(ss,temp,delimeter))
      return_str[i++].append(temp);
   return i;
}

int get_index(string str[], string sub_str , int len)
{
   for(int i=0; i<len; i++)
      if(str[i] == sub_str)
         return i;
   return -1;
}


void solve()
{
   int n, len = 14, z=0;
   while(cin>>n)
   {
      getchar();
      string names;
      string name_list[len];
      int money[10];
      memset(money, 0, sizeof(money));
      getline(cin,names);
      int name_len = split(name_list, names, ' ');
      for(int i=0; i<n; i++)
      {
         string gift;
         string gift_list[len];
         getline(cin, gift);
         int gift_len = split(gift_list, gift, ' ');

         int person = atoi(gift_list[2].c_str());
         if(person != 0)
         {
            int given_mpney = atoi(gift_list[1].c_str());
            int per_person_money = given_mpney/person;
            money[get_index(name_list, gift_list[0], name_len)] -= per_person_money*person;
            for(int j=3; j<gift_len; j++)
               money[get_index(name_list, gift_list[j], name_len)] += per_person_money;
         }

      }
      if(z!=0)
      {
         cout<<N;
      }
      z=1;
      for(int i=0; i<name_len; i++)
         cout<<name_list[i]<<SP<<money[i]<<N;

   }
}

int main()
{
	solve();
   return 0;
}
