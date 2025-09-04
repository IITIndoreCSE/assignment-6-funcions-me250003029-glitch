#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
if(n<=1){
return false;
}else if(n == 2){
return true;
}else{
for(int i = 2; i*i<=n ;i++){
if(n%i == 0){
    return false;
}
}
}
return true;
}
bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
int num = n;
int ans = 0;
int rem = 0;
    while(n>0){
 rem = n%10;
        n = n/10;
        ans = ans*10 + rem;
}
     if(ans == num){
         return true;
}else{
       return false;
    }
}
bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
   if(isPrime(n) && isPalindrome(n)){
return true;
    }else{
         return false;
    }  
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}    
