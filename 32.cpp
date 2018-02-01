#include<iostream>

using namespace std;

int pattern2()
{
    for(int i=0;i<4;i++){
        for(int j=4;j>i;j--){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}
int main(void)
{
    pattern2();
    return 0;
}
