#include<iostream>
using namespace std;
class App {

  void defApp() {
        cout<<"get default";
      }
  public :
      void screen() {
         cout<<"Screen is Showing"<<"\n";
         defApp();
      }

};
int main() {
 App *isApp = new App();
 App is;
 is.screen();
 isApp->screen();



return 0;
}
