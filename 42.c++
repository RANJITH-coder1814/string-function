#include<iostream>
using namespace std;
int main(){
    char s1[20]="235";
    char s2[10]="25.98";
    long int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout<<x<<endl<<y<<endl;
    return 0;
}