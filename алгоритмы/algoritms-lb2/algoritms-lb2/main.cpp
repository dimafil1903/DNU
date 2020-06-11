//
//  main.cpp
//  algoritms-lb2
//
//  Created by Дима Филипенко on 08.03.2020.
//  Copyright © 2020 Дима Филипенко. All rights reserved.
//

#include <iostream>
using namespace std;
bool cinFail = false;
void wait_key(){
    do
      {
        cout << '\n' << "Press a key to continue...";
      } while (cin.get() != '\n');
    getchar();
   // clrscr();
   // ClearScreen();
}



      bool Push(int x,int & topS, int size,int * data){
          if (topS == size){
              return false;
          }
          topS++;
          data[topS-1]=x;
          
          return true;
       }
       int Pop(int &topS, int size,int * data){
           if (topS <= 0){
               return false;
           }
          topS--;
           //cout<<this->topS<<" new top s"<<endl;
          return data[topS];
            
       }
   
bool AddSD(int &topS, int size,int * data){
    int x;
    cout<<"PUSH x=";
    if(!(cin>>x)){
           cout << "Некоректний ввід";
           cin.clear();
           cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }else{
        cout<<endl;
         if(!Push(x,topS,size,data)){
             cout<<"STACK OVERFLOW";
         }else{
             
             cout<<"Елмент додано успішно";
         }
         cout<<endl;
         return true;
    }
 
   
}
void ShowSD(int &topS,int * data){
    cout<<endl;
    if (topS>0){
        for (int i=topS-1; i>=0; i--) {
            cout<<" "<<data[i];
        }
    }else{
        cout<<"Stack is empty";
    }
  cout<<endl;
}
void DeleteSd(int &topS, int size,int * data){
    int pop = Pop(topS,size,data);
    if(!pop){
        cout<<endl;
        cout<<"STACK UNDERFLOW";
        cout<<endl;
    }else{
        cout<<endl;
        cout<<"Елемент "<<pop<<" видалено успішно ";
        cout<<endl;
    }
    
}

void InfoSD(int topS){
    cout<<"Кількість елементів - "<<topS<<endl;
    if (topS>0){
        cout<<"Індекс першого - "<<0<<endl;
          cout<<"Індекс останнього - "<<topS-1<<endl;
          cout<<endl;
    }
  
    
}

  
     void  StackDel(int &topS,int size,int * data)
       {
           while (topS>0) {
               Pop(topS,size, data);
           }
//          this->topS=0;
//          this->data = new int[this->size];

       }
bool Task1(int &topS,int size,int * data){
    StackDel( topS, size, data);
    int n,remainder;
    cin>>n;
    if(cin.fail()){
          cinFail=true;
        return false;
      }
   do {
        remainder=n%8;
        n=n/8;
            if(!Push(remainder,topS,size,data)){
                   cout<<"STACK OVERFLOW";
               }
   }while (n!=0);
    return true;
}
void ClearSD(int topS,int size,int * data){
      StackDel( topS, size, data);
    cout<<endl;
    cout<<"Stack очищено";
    cout<<endl;
}
int main(int argc, const char * argv[]) {
   
    int size;
    int *data;
    int topS=0;
    int n;
   
    do{
       cout<<"введіть розмір стеку"<<endl;
          cin>>n;
       
       if(cin.fail())
        {
            break;
        }else{
                size=n;
              data= new int [size];
        }
    
      
       
    }while(n<=0);

    int k;
    cout<<"1. Додати елемент до стеку \n";
           cout<<"2. Видалити елемент \n";
       cout<<"3. Вивести елементи стеку на екран \n";
       cout<<"4. Очистити структуру \n";
           cout<<"5. Вивести кількість елементів структури, індекс першого та останнього елементу … \n";
           cout<<"6. Конвертація цілих десяткових чисел у вісімкову систему числення.\n";
           cout<<"7. Вихід \n";
    do
    {
        cout<<endl;
        cout<<"Очікую # з меню..."<<endl;
        cout<<endl;
        cin>>k;
      if(cin.fail() || cinFail == true ){
            break;
        }
    switch (k)
    {
        case 1: //додавання
            if(AddSD(topS,  size, data)){
                wait_key();
                break;
            }else{
                k=7;
                break;
            }
        case 2: DeleteSd( topS,size,data); wait_key(); break; // видалення
        case 3: ShowSD(topS, data); wait_key(); break; // показати
        case 4: ClearSD(topS,size,data); wait_key(); break; // очистити структуру
        case 5: InfoSD(topS); wait_key(); break; // кількість перший та останій елемент
        case 6: // задача варіант 12
            if(Task1(topS,size,data)){
                wait_key();
                break;
            }else{
                k=7;
            }
        case 7: break; // задача варіант 12
        default: cout<<"Некоректний ввід"<<endl; break;
    }
    }
    while (k!=7);
}
