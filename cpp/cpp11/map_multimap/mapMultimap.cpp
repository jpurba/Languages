#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main () {

   pair<int, int> p = make_pair(10,20);

   map<int,int> mp;

   mp[4] = 400;
   mp[3] = 300;

   mp.insert(make_pair(10,100));

   mp[7] = 700; // map keep the order of the key in order / sort matter

   cout <<"use pair<int, int>: "<< p.first << "-" << p.second<< endl;

   cout <<"use map: " << endl;
   // iterate
   for (auto it = mp.begin(); it != mp.end(); it++) {
       cout<<it->first<<"----"<<it->second<<endl;
   }

   cout << "Over write key 10: " <<endl;

   mp[10] = 700;
   // iterate
   for (auto it = mp.begin(); it != mp.end(); it++) {
       cout<<it->first<<"----"<<it->second<<endl;
   }

   // insert will not for updating
   mp.insert(make_pair(10,1000));

   cout << "Over write key 10, using insert (won't update): " <<endl;

   // iterate
   for (auto it = mp.begin(); it != mp.end(); it++) {
       cout<<it->first<<"----"<<it->second<<endl;
   }

   multimap<int, int> mmp;
   mmp.insert(make_pair(4,400));
   mmp.insert(make_pair(10,700));
   mmp.insert(make_pair(3,300)); 
   mmp.insert(make_pair(10,900));
   mmp.insert(make_pair(10,1000)); 

   cout<<"Multi map does not allow updating. It just allow insert. "<<endl;
   cout<<"Using Multi map (allow multiple key with different data): "<<endl;
   for (auto itm = mmp.begin(); itm != mmp.end(); itm++){
       cout<<itm->first<<"----"<<itm->second<<endl;
   }


   //example for unordered_map

   unordered_map<int, int> ump;

   ump[4] = 450;
   ump[3] = 350;
   ump[7] = 750;
   ump.insert(make_pair(21,900));
   ump.insert(make_pair(11,1000));
   ump.insert(make_pair(10,550));
   ump.insert(make_pair(10,650));

   cout << "Use unordered map (index won't be sorted): "<< endl;
   for(auto uit = ump.begin(); uit !=ump.end(); uit++) {

      cout<<uit->first<<"----"<<uit->second<<endl;
   }

   //example for unordered_multimap

   unordered_multimap<int, int> ummp;

   ummp.insert(make_pair(4,870));
   ummp.insert(make_pair(4,870));
   ummp.insert(make_pair(6,870));
   ummp.insert(make_pair(22,870));
   ummp.insert(make_pair(1,1100));
   ummp.insert(make_pair(10,550));
   ummp.insert(make_pair(10,650));

   cout << "Use unordered multi map (index won't be sorted): "<< endl;
   for(auto uitm = ummp.begin(); uitm !=ummp.end(); uitm++) {

      cout<<uitm->first<<"----"<<uitm->second<<endl;
   }


   return 0;
}
