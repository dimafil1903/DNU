//
//  main.cpp
//  progaCLASS
//
//  Created by Дима Филипенко on 01.04.2020.
//  Copyright © 2020 Дима Филипенко. All rights reserved.
//

#include <iostream>

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int N=3;

void AddtoArr(int *A,int c=0){
    bool flag=true;
 //   int count=0;
 //   while (p<pow(2, N)) {
    int i=0;
    while ( N>i ){
        if(i==N-1){
            A[i]=1;
            
        }else{
            if(A[i]==0){
            A[i]=1;
            
            }else{
                A[i]=0;
                A[i]=1;
            }
        }
        if(A[i]!=1){
            flag=false;
        }
      
        i++;
        c++;
      }
    
//    if (flag==false) {
//        AddtoArr(A,c);
//          }
  //  }
    cout<<"COUNT "<<c<<"\n";
}
void coutARR(int *A){
    for (int i=0; i<N; i++) {
        cout<<A[i];
    }
}
int main()
{
    int A[N];
    for(int i=0; i<N;i++){
        A[i]=0;
    }
    A[0]=1;
    
    AddtoArr(A,0);
//    AddtoArr(A,0);
//    AddtoArr(A,0);
    coutARR(A);

}
