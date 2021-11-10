#include<bits/stdc++.h>     
using namespace std;
int judge(int year)
{ 
    if(year%4==0&&year%100||year%400==0)
	{
	   return 1; 
	} 
    return 0; 
}
int run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31}; 
int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int week[7]={0,0,0,0,0,0,0}; 
int main() 
{ 
    int n,s=0; 
    int i,j; 
    cin>>n; 
    for(i=1900;i<1900+n;i++) 
    { 
        if(judge(i)) 
        { 
            for(j=1;j<=12;j++) 
            { 
                s+=13; 
                week[s%7]++; 
                s+=(run[j]-13); 
            } 
        } 
        else 
        { 
            for(j=1;j<=12;j++) 
            { 
                s+=13; 
                week[s%7]++; 
                s+=(ping[j]-13); 
            } 
        } 
    } 
    for(i=1;i<7;i++) 
	{
	    cout<< week[i]<<' ';
	} 
    cout << week[0];
    return 0; 
}
