#include <iostream>
using namespace std;
void sumo(int a){
    int sum = 0;
    for(int i=1; i<a; i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    cout<<sum;
}
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    for(int b=0; b<n; b++){
        sumo(arr[b]);
           cout<<"\n";
    }
    return 0;
}
