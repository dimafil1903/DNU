#include <iostream>
#include <string>
using namespace std;


int main() {
    int number=404;
    const int n = 3;
    string array[n]={"1. Новости дня","2. Анекдот недели","3. Автора "};
    for (int i=0; i<n; i++) {
        cout << array[i]<<"\n";
    }
         do {
             if(!cin){
                  cout << "Ошибка ввода.";
             }else{
                 switch (number) {
                               case 1:
                                  cout << "Это лучшая новость!!!\n";
                                      break;
                               case 2:
                                  cout << " Программист написал приложение для подбора идеальных жен.\n Вводит данные:\n- Хочу невысокую брюнетку, неприхотливую, молчаливую, умеющую плавать.\n Компьютер выводит рекомендации:\n- Самка пингвина.\n";
                                      break;
                               case 3:
                                  cout << "Филипенко Д.М.\n";
                                      break;
                              case 404:
                              cout << "Выберите номер: \n";
                              break;
                               default:
                                  cout << "error\n";
                                      break;
                              }
                             cin >> number;
             }
            } while (number!=0);
     
 
    
    
}
    
