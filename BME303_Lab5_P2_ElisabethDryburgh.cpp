#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <vector>
// Author: E Dryburgh
//Code: multiplying matrices
//last edit date: 9/17/19
using namespace std;

void inputs(vector<double> &mOne, vector<double> &mTwo, int rOne, int cOne, int rTwo, int cTwo){
	cout<<"Please enter the number of rows for the first matrix: "<<endl;
	cin>>rOne;
	cout<<"Please enter the number of columns for the first matrix: "<<endl;
	cin>>cOne;
	cout<<"Please enter the number of rows for the second matrix: "<<endl;
	cin>>rTwo;
	cout<<"Please enter the number of columns for the second matrix: "<<endl;
	cin>>cTwo;
	if(cOne != rTwo){
		cout<<"Error"<<endl;
	}
	for(int i = 0; i<(rOne*cOne); i++){
		int x;
		cout<<"Please enter the next number for matrix one"<<endl;
		cin>>x;
		mOne.push_back(x);
	}
	for(int i = 0; i<(rTwo*cTwo); i++){
		int x;
		cout<<"Please enter the next number for matrix two"<<endl;
		cin>>x;
		mTwo.push_back(x);
	}
}

void multiplication(vector<double> &mOne,vector<double> &mTwo,vector<double> &mMult, int rOne, int cOne, int rTwo, int cTwo){
	ßfor(int i = 0; i<rOne; i++){
		int x;
		for(int j = 0; j<cTwo; j++){
			for(int k = 0; k<cTwo; k++){
				x += mOne[cOne*i+ k] * mTwo[cTwo*k+ j];
				cout<<"PLUS ONE"<<endl;
			}
			
			cout<<"PLUS TWO"<<endl;
		}
		mMult.push_back(x);
		cout<<"PLUS THREE"<<endl;
	}
	cout<<"ended"<<endl;
}

void printing(vector<double> &mMult, int rOne, int cOne, int rTwo, int cTwo){
	for(int i = 0; i<rOne; i++){
		for(int j = 0; j<cTwo; j++){
			cout<<mMult[cTwo*i +j];
		}
		cout<<endl;
	}
}

int main(){
	int rOne;
	int cOne;
	int rTwo;
	int cTwo;
	vector<double> mOne/*(rOne*cOne)*/;
	vector<double> mTwo/*(rTwo*cTwo)*/;
	vector<double> mMult/*(rOne*cTwo)*/;
	inputs(mOne, mTwo, rOne, cOne, rTwo, cTwo);
	multiplication(mOne,mTwo, mMult, rOne, cOne, rTwo, cTwo);
	printing(mMult, rOne, cOne, rTwo, cTwo);
}