#include <iostream>
#include <string>
using namespace std;
string str;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true){
        getline(cin, str);
        if(str == ""){
            break;
        }
        cout << str << "\n";
    }    
    return 0;
}
