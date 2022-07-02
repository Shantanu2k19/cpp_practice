#include <bits/stdc++.h>
using namespace std;


//GLOBAL VAIABLES

#define MAXN (50)
int n;

// #define top 0
// #define right 1
// #define bottom 2
// #define left 3


class box{
    public:
    int index;
    bool top,right,bottom,left;
    string topData,rightData,bottomData,leftData;

    int topDistance,rightDistance,bottomDistance,leftDistance;
    int topBox,rightBox,botomBox,leftBox;

    box(int ind){
        index = ind;
        top = right = bottom = left = true;
        topBox=rightBox=botomBox=leftBox=0;
        topDistance=rightDistance=bottomDistance=leftDistance=0;
    }
};

multimap<string,pair<box*, int>> avlplace;
int types[51];  //keep track of types
int currBox;   //current box index

box* boxMap[100][100];

string giveHashable(int arr[]){
    string s="";
    for(int i=0;i<n;i++){
        types[arr[i]]++;
        s= s+ char(arr[i]+97);
    }
    return s;
}

void init(int N, int tooth[4][MAXN]){
    n = N;
    currBox=1; //1 for core box

    box* bb = new box(currBox);
    for(int i=0;i<4;i++){
        string s = giveHashable(tooth[i]);
        avlplace.insert({s,{bb,i}});
    }
}

string giveHashable2(int arr[]){
    string s="";
    for(int i=0;i<n;i++){
        s=s+ char(arr[i]+97);
    }
    return s;
}

string giveHashable3(int arr[]){
    string s="";
    for(int i=0;i<n;i++){
        int temp;
        arr[i]%2==0 ? temp=arr[i]-1 : temp=arr[i]+1;
        s=s+ char(temp+97);
    }
    return s;
}

bool assemble(int tooth[4][MAXN]){
    //for every incoming box, store that box, then check for availability 
    box* b = new box(currBox);
    currBox++;

    int priorityScore=INT_MAX;  //check for lowest
    int finalParentBox;
    int finalSideOfParent;

    for(int sides = 0; sides<4 ;sides++){

        for(int i=0;i<n;i++){
            // string sideorig = giveHashable2(tooth[i]);
            string sideNeed = giveHashable3(tooth[i]);

            for(auto itr=avlplace.find(sideNeed); itr!=avlplace.end();itr++){
                //claculate priority 
                box* ParentBox = itr->second.first;
                int kaunsiSide = itr->second.second;

                //find if possible to place box (no obstuctions)
                if(ParentBox->top){
                    //if places at top, check with adjacent boxes

                }
                int priority = 
            }
        }

    }
    return true;
}

int toothCount(int mType){
    return 69;
}

int main(){
    cout<<"\n_______________________\n";
    int tooth[4][MAXN]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    init(4, tooth);
    // n=4;
    int arr[4]={1,2,3,4};
    cout<<"lol\n"<<giveHashable(arr);
    cout<<"\n_______________________\n";
}