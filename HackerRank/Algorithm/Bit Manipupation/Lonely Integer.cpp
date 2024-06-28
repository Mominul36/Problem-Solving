#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;


#define watch(c) for(auto i: c){cout<< i <<" ";}cout<<endl;
#define watch2(c) for(auto i: c){for(auto j : i){cout<< j <<" ";}cout<<endl;}
#define pb push_back
#define all(c) (c).begin(),(c).end()

//One's complement of a Binary Number
string onescomplement(string bin){
    int bit ;
    if(bin.size()>=0 && bin.size()<=3)
        bit = 4;
    else if(bin.size()>=4 && bin.size()<=7)
        bit = 8;
    else if(bin.size()>=8 && bin.size()<=15)
        bit = 16;
    else if(bin.size()>=16 && bin.size()<=31)
        bit = 32;

    string temp(bit  - bin.size(),'0');
    bin = temp + bin;

    for(int i=0;i<bin.size();i++){
        if(bin[i]=='0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }
    return bin;     
}

//Two's complement of a Binary Number
string twoscomplement(string bin){
    bin = onescomplement(bin);
    char car = '1';
    for(int i=bin.size()-1;i>=0;i--){
        if(car=='1' && bin[i]=='1'){
            bin[i] = '0';
            car = '1';
        }
        else if(bin[i]!=car){
            bin[i] = '1';
            car='0';
        }
    }
    return bin;
}

// Print Binary Number
string pb(int n){
    bool positive = true;
    if(n<0){
        positive = false;
        n = ~n + 1;
    }
    string bin;
    while(n){
        bin.insert(bin.begin(),(n&1)+48);
        n = n >> 1;
    }
    if(positive){
        //cout<< bin<<endl;
        return bin;
    }
    cout<< twoscomplement(bin)<<endl;
    return "";
}

//Swap two numbers
void swap2(int &a,int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

//Check i'th bit set or not
bool isBitSet(int num, int i){
    return num & (1 << i);
}

//Check Even or Odd
bool isEven(int n){
    return !(n&1);
}

//Set i'th bit from 0 to 1
void setBit(int &n, int i){
    n = n | (1<<i);
}

//Unset i'th bit from 1 to 0
void unsetBit(int &n, int i){
    n = n & ~(1<<i);

}
//Toogle i'th bit
void toogleBit(int &n, int i){
    n = n ^ (1<<i);
}

//Unset last set bit
void unsetLastsetBit(int &n){
    n = n & (n-1);
}


//All Subsets of a array
vvi subsets(vi &a){
   int n = a.size();
   vvi subset;
   int number_of_subset = (1<<n);

   for(int i=0;i<number_of_subset;i++){
       vi temp;
       for(int j=0;j<n;j++){
           if(i &(1<<j)){
               temp.push_back(a[j]);
           }
       }
       subset.push_back(temp);
   }
return subset;
}


//Find unique element
int uniqueOne(vi &a){
    int xo = 0;
    for(int i=0;i<a.size();i++){
        xo = xo^a[i];
    }
    return xo;
}

int main(){
    
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<< uniqueOne(a)<<endl;





}



