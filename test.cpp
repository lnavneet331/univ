#include <bits/stdc++.h>
using namespace std;

class triangle {
   public:
      void tri() {
         int x = 5;
         for (int i = 1; i <= x; i++)
         {
            
            for (int j = 1; j <=i ; j++)
            {
                  cout<<"*";
            }
            cout<<endl;
         }
            }
};

class diagonalLine {
   public:
   void diag_line() {
      int x = 5;
      for (int i = x; i >= 1; i--) {
         for (int j = 0; j < i ; j++) {
               cout<<"\t";
         }
         cout<<"*"<<endl;
      }
   }
};

class hollow_rectangle {
   public:
   void rectangle(int row, int colm) {
    for(int i = 1;i <= row; i++) {
        for(int j = 1;j <= colm; j++) {
            if(i == 1 || i == row || j == 1 || j == colm){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
   }
};

class circle {
   public:
      void draw(int r) {
      int N = 2*r+1;
      int x, y; 
      for (int i = 0; i < N; i++) {
         for (int j = 0; j < N; j++) {
            x = i-r;
            y = j-r;
            if (x*x + y*y <= r*r+1 ) {
               cout << (".");
            }
            else {
            cout << (" ");
            }
            cout << (" ");
         }
         cout << "\n";
      }
   }
};

int main(){
   //use objects as per ur requirement
}