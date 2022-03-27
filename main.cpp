#include <iostream>

using namespace std;

int main(){
    int N;
    while(cin>>N && N!=0){
        int c[N] = {};
        int p[N] = {};
        int flag = 0;
        int temp[N] = {0};
        for(int i=0; i<N; i++){
            cin>>c[i]>>p[i];
            if(c[i]>=1 && c[i]<=10000 && p[i]>= -10000000 && p[i]<= 10000000 && i+p[i]>=0 && i+p[i]<=N ){
                temp[i+p[i]] = c[i];
            }
        }
        for(int i=0; i<N; i++){
           if(temp[i] == 0){
                flag = 1;
                break;
           }
        }
        if(flag){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0; i<N; i++){
                if(i < N-1){
                    cout<<temp[i]<<" ";
                }
                else{
                    cout<<temp[i]<<endl;
                }
            }
        }
    }
    return 0;
}
