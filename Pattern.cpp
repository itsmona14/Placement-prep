#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows : ";
    cin >> row >> col;
    //rectangle
    for(int i = 1; i <= row ; i++){
        for(int j = 1; j <= col ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //hollow rectangle
    for(int i = 1; i <= row ; i++){
        for(int j = 1; j <= col ; j++){
            if(i == 1 || i == row || j == 1 || j == col)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    //half pyramid
    cout<<"half pyramid"<<endl;
    int n;
    cout<<"Enter N : ";
    cin>>n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
                cout<<"* ";
        }
        cout<<endl;
    }
    //inverted half pyramid
    cout<<"inverted half pyramid"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = n; j >= i ; j--){
                cout<<"* ";
        }
        cout<<endl;
    }
    //Half pyramid after 180* rotation
    cout<<"Half pyramid after 180* rotation"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n ; j++){
            if(j <= n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    //Half pyramid using numbers
    cout<<"Half pyramid using numbers"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
    //Floyd triangle
    cout<<"Floyd triangle"<<endl;
    int count = 1;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    //Butterfly pattern
    cout<<"Butterfly pattern"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++)
            cout<<"*";
        int space = 2*n - 2*i;
        for(int j = 1; j <= space ; j++)
            cout<<" ";
        for(int j = 1 ; j <= i ; j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i = n; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++)
            cout<<"*";
        int space = 2*n - 2*i;
        for(int j = 1; j <= space ; j++)
            cout<<" ";
        for(int j = 1 ; j <= i ; j++)
            cout<<"*";
        cout<<endl;
    }

    //Inverted pattern
    cout<<"Inverted pattern"<<endl;
    for(int i = n; i >= 1 ; i--){
        for(int j = 1; j <= i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
    //0-1 pattern
    cout<<"0-1 pattern"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
            if((i+j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout<<endl;
    }
    //Rhombus
    cout<<"Rhombus"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n-i ; j++){
            cout<< " ";
        }
        for(int j = 1; j <= n; j++){
            cout<< "*";
        }
        cout<<endl;
    }
    //Number pattern
    cout<<"Number pattern"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n-i ; j++){
            cout<<" ";
        }
        for(int j = 1; j <= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Diamond pattern
    cout<<"Diamond pattern"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n-i ; j++){
            cout << " ";
        }
        for(int j = 1; j <= i ; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    for(int i = n; i >= 1 ; i--){
        for(int j = 1; j <= n-i ; j++){
            cout << " ";
        }
        for(int j = 1; j <= i ; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    //Palindrome pattern
    cout<<"Palindrome pattern"<<endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n-i ; j++){
            cout << " ";
        }
        int k = i;
        for(int j = 1; j <= i ; j++){
            cout << k--;
        }
        k = 2;
        for(int j = 1; j < i ; j++){
            cout << k++;
        }
        cout<<endl;
    }
    //Zig - Zag pattern
    cout<<"Zig - Zag pattern : ";
    cin>>n;
    for(int i = 1; i <= n/3 ; i++){
        for(int j = 1 ; j <= n ;j++){
            if((i+j) % 4  == 0 || (i == 2 && j%4 == 0))
                cout << "*";
            else
                cout << " ";
        }
        cout<<endl;
    }
    return 0;
}