#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
#define str string
#define ull unsigned long long
#define vec vector
const ll mod=LLONG_MAX;
#define sysp system("pause");
ll qp(ll d,ll c){
ll ans=1;
while(c){
if(c%2){
ans=ans*d%mod;
}
d=d*d%mod;
c/=2;
}
return ans;
}
string charsall[4]={"1234567890",
                "abcdefghijklmnopqrstuvwxyz",
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                ":;<=?>@[]^_`{|}~"};
int get_random_int(int a, int b) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(a, b);
    return dist(gen);
}
int main(){
    ll n;
    cout<<"Enter the length of the password: ";
    cin >> n;
    cout<<"Enter the type of characters you want in the password:\n";
    cout<<"1. Numbers (0-9)\n";
    cout<<"2. Lowercase letters (a-z)\n";
    cout<<"3. Uppercase letters (A-Z)\n";
    cout<<"4. Special characters (: ; < = > ? @ [ ] ^ _ ` { | } ~)\n";
    cout<<"Enter the types you want (e.g., 123 for numbers, lowercase, and uppercase): ";
    string types;
    cin >> types;
    set<int> selectedtypes;
    vector<char> selectedchars;
    for(char type : types) {
        if(type >= '1' && type <= '4') {
            if(selectedtypes.insert(type - '1').second) {
                for(char c : charsall[type - '1']) {
                    selectedchars.push_back(c);
                }
            }
        }
    }
    ofstream output("Password.txt");
    ll last= selectedchars.size() - 1;
    if(selectedchars.empty()) {
        cout << "No valid character types selected. Exiting." << endl;
        return 1;
    }
    for(ll i = 0; i < n; i++) {
        ll randomNum = get_random_int(0,last);
        output<<selectedchars[randomNum];
    }
    output.close();
    return 0;
}