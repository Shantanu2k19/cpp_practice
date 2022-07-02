#include <bits/stdc++.h>
using namespace std;

int main()
{
    //optimizing
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);    
    int getchar_unlocked(void);


    for(int i=10;~i;i--)   cout<<i<<" "<<~i<<endl; 

    int freq[1001]{0};
    
    vector<int> arr;
    for(auto& box : arr){}



    //map a 2d array to 1d
    vector<vector<int>> array = {{1,2,3}, {4,5,6}, {7,8,9}};
    int r = array.size();
    int c = array[0].size();
    
    int flat[r*c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            flat[i*r+j]=array[i][j];
        }
    }
    for(int i=0;i<r*c;i++) cout<<flat[i]<<" ";
}
