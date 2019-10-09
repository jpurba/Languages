#include <iostream>
#include <vector>    // contiguous memory allocation
#include <list>      // Double link list
#include <algorithm> // for sorting

using namespace std;

int main () {

   // sequence container
   vector<int> v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);

   // iterator are similar to pointers
   vector<int>::iterator itr = v.begin();

   for(; itr != v.end(); itr++)
   {
       cout<<"Vector = "<<*itr<<endl;
   }

   cout<<"\n"<<endl;
   // iterator are similar to pointers
   auto itr1 = v.begin();  // for c++11
   cout <<"Use auto for c++11, " << endl;

   for(; itr1 != v.end(); itr1++)
   {
       cout<<"Vector = "<<*itr1<<endl;
   }

   cout <<"vector size is : " << v.size() << endl;
   v.clear();
   cout <<"After clear, vector size is : " << v.size() << endl;

   cout<<"\n"<<endl;
   // use list for sequence container
   list<int> l;
   l.push_back(10);
   l.push_back(20);
   l.push_back(30);
   l.push_back(40);


   // iterator are similar to pointers
   list<int>::iterator litr = l.begin();

   for(; litr != l.end(); litr++)
   {
       cout<<"List = "<<*litr<<endl;
   }

   cout<<"\n"<<endl;
   // iterator are similar to pointers
   auto litr1 = l.begin();  // for c++11
   cout <<"Use auto for c++11, " << endl;

   for(; litr1 != l.end(); litr1++)
   {
       cout<<"List = "<<*litr1<<endl;
   }

   cout <<"List size is : " << l.size() << endl;
   l.clear();
   cout <<"After clear, List size is : " << l.size() << endl;

   //For sorting, use algorithm
   cout <<"\n"<<endl;
   cout << "vector before sorting" << endl;

   vector<int> s;
   s.push_back(500);
   s.push_back(120);
   s.push_back(300);
   s.push_back(40);
   s.push_back(100);

   auto itrs = s.begin();
   for(; itrs != s.end(); itrs++)
   {
       cout<<"Vector = "<<*itrs<<endl;
   }

   cout <<"\n"<<endl;
   cout << "vector after sorting" << endl;
   // vector can use sort because it use Random Access Iterators
   // List will give you error because it uses bidirectional iterators
   sort(s.begin(),s.end());
   // iterator are similar to pointers

   itrs = s.begin();
   for(; itrs != s.end(); itrs++)
   {
       cout<<"Vector = "<<*itrs<<endl;
   }

   int arr[]  = {100,20, 300, 45, 55};
   int *begin = &arr[0];
   int *end   = &arr[0] + (sizeof(arr)/sizeof(int));

   cout <<"\n"<<endl;
   cout << "vector before sorting" << endl;

   for(; begin != end; begin++)
   {
       cout<<"Vector = "<<*begin<<endl;
   }

   cout <<"\n"<<endl;
   cout << "vector after sorting" << endl;

   begin = &arr[0];
   sort(begin,end);

   for(; begin != end; begin++)
   {
       cout<<"Vector = "<<*begin<<endl;
   }
   return 0;
}
