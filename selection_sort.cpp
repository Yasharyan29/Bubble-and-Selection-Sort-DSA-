#include<iostream> 
using namespace std;

int main(){
    int n; //3
    cin>>n;                //[0][1][2]
    int myarr[n];//myarr[3]={30,20,10}

    cout<<"just taking the input ! "<<endl;

    for(int i=0; i<n; i++){ //int i=0;0<3;i=0+1=1 //int i=1;1<3;i=1+1=2 //int i=2;2<3;i=2+1=3 //int i=3;i<3;i=3+1=4
        cin>>myarr[i]; // myarr[0] //myarr[1] // //myarr[2]
    }
    cout<<"now we are set the operations for the selection sort"<<endl;

    for(int i=0; i<n-1; i++){ //int i=0;0<3-1=2;i=0+1=1
        for(int j=i+1; j<n; j++){ //int j=0+1=1;1<3;j=1+1
            if(myarr[j]<myarr[i]){ //myarr[j]<myarr[i]
                int temp=myarr[j];  //int temp=myarr[1]=20
                myarr[j]=myarr[i];  //myarr[j]= myarr[0]=30
                myarr[i]=temp;      //myarr[i]= 20
            }
        }
    }
    for(int i=0; i<n;i++){
        cout<<myarr[i]<<" ";

    }
    cout<<endl;
}