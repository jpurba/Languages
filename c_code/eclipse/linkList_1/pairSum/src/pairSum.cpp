//============================================================================
// Name        : pairSum.cpp
// Author      : Josua Purba
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool HasPairWithSum(const vector<int>&data, int sum){

	cout << "in HasPairWithSum\n";
    int low = 0;
    int hi = data.size() -1;
    int s;

    while(low<hi){
    	s = data[low] + data[hi];
    	cout <<"low = " << low << " ;hi = " << hi <<" ; s= " << s << endl;
    	if (s==sum)
    		return true;
    	low++;
    }
    cout << "low = " << low << " ;hi = " << hi << " ;s= " << s << endl;
	return false;
}

bool HasPairSum(const vector<int> data, int sum){

	unordered_set<int> comp;  // complements
	for(int value : data){
		if(comp.find(value) != comp.end()){
			return true;
		}
		comp.insert(sum - value);
		cout << "value = " << value << " ; sum-value=" << sum-value << endl;
	}
	return false;
}

int main() {
	vector<int> a = { 1,2,3,9 };
	vector<int> b = { 1,2,4,4 };
	bool results = 0;
	int sum = 8;

	results = HasPairSum(a,sum);
	if (results==0){
		cout <<"HasPairSum: a results = No sum 2 elements =  "<< sum << endl;
	}
	else if (results==1){
		cout <<"HasPairSum: a results = there is a sum 2 elements =  "<< sum << endl;
	}

	results = HasPairSum(b,sum);
	if (results==0){
		cout <<"HasPairSum: a results = No sum 2 elements =  "<< sum << endl;
	}
	else if (results==1){
		cout <<"HasPairSum: a results = there is a sum 2 elements =  "<< sum << endl;
	}

	results = HasPairWithSum(a,sum);
	if (results==0){
		cout <<"HasPairWithSum: a results = No sum 2 elements =  "<< sum << endl;
	}
	else if (results==1){
		cout <<"HasPairWithSum: a results = there is a sum 2 elements =  "<< sum << endl;
	}

	results = HasPairWithSum(b,sum);
	if (results==0){
		cout <<"HasPairWithSum: a results = No sum 2 elements =  "<< sum << endl;
	}
	else if (results==1){
		cout <<"HasPairWithSum: a results = there is a sum 2 elements =  "<< sum << endl;
	}

	return 0;
}
