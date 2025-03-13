#include<iostream>
using namespace std;
int decToBi(int n){
    int ans=0;
    int pow=1;
    while (n>0)
    {
        int rem=n%2;
        n/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Decimal To Binary\nEnter any Number: ";
    cin>>num;
    cout<<"Decimal: "<<decToBi(num);
    return 0;
}