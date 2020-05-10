#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;			//including namespace header

class pwd{
    private:
          int i = 0,wrdlen;		//declaration and initialization of global variables
          char elements;
    public:
          int passtypelw(){	
              const int pwdlwlen = 26;			//constant variable for total characters
              char setslw[26] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c',
              'v','b','n','m'};
              srand(time(NULL));											//intializing srand
              cout << "Enter the word lenght for your password :-\n";
              cin >> wrdlen;								//acquirng word lenght for the password
              for (i = 0;i < wrdlen;i++) {						//for loop to output a string
                  elements = setslw[rand() % pwdlwlen];
                  cout << elements;
              }
              return 0;
          }

          int passtypeup(){
              const int pwduplen = 26;
              char setsup[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X',
              'C','V','B','N','M'};
              srand(time(NULL));
              cout << "Enter the word lenght for your password :-\n";
              cin >> wrdlen;
              for (i = 0;i < wrdlen;i++) {
                  elements = setsup[rand() % pwduplen];
                  cout << elements;
              }
              return 0;
          }

          int passtypenum(){
              const int pwdnumlen = 10;
              char setsnum[10] = {'1','2','3','4','5','6','7','8','9','0'};
              srand(time(NULL));
              cout << "Enter the word lenght for your password :-\n";
              cin >> wrdlen;
              for (i = 0;i < wrdlen;i++) {
                  elements = setsnum[rand() % pwdnumlen];
                  cout << elements;
              }
              return 0;
          }

          int passtypecomp(){
              const int pwdcomplen = 69;
              char setscomp[69] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c',
              'v','b','n','m','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X',
              'C','V','B','N','M','1','2','3','4','5','6','7','8','9','0','!','@','#','$','%','&','*'};
              srand(time(NULL));
              cout << "Enter the word lenght for your password :-\n";
              cin >> wrdlen;
              for (i = 0;i < wrdlen;i++) {
                  elements = setscomp[rand() % pwdcomplen];
                  cout << elements;
              }
              return 0;
          }
};

int main(){
    pwd p;						//declaring class object
    int passtype;								//variable for choosing password type
    cout << "\t\t\t!<->PASSWORD GENERATOR<->!\t\t\tv2\n";
    cout << "How do you want you password to be ??\n";
    cout << "\t\tPress 1 for lowercase characters.\n";
    cout << "\t\tPress 2 for uppercase characters.\n";
    cout << "\t\tPress 3 for numbers.\n";
    cout << "\t\tPress 4 for composite.\n";
    cin >> passtype;						//acquiring required password type
    if (passtype == 1) {						//if-else if-else statement for generating the needed type of password
        p.passtypelw();
    }
    else if (passtype == 2) {
        p.passtypeup();
    }
    else if (passtype == 3) {
        p.passtypenum();
    }
    else if (passtype == 4) {
        p.passtypecomp();
    }
    else{							//else statement to handle invalid input error
        cout<<"INVALID PASSWORD TYPE !!!";
    }
    return 0;							
}
