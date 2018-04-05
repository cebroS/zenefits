#include <iostream>
#include <vector>


int factorial(int n){
    int x;
    for(int i=0;i<n;i++){
        x*=(n-i);
    }
    return x;


}

using namespace std;
int position( vector<char> letter(int n), string s){
    vector<vector<char> >per(int n, vector<char>(factorial(int n)));
    per[0].push_back(letter);
    vector<char> dummy;
    dummy=letter;


            for(int i=0;i<n;i++){
                char temp;
                temp=dummy[n-i-1];
                dummy[n-i-1]=dummy[n-i-2];
                dummy[n-i-2]=temp;
                for(int j=0;j<factorial(i+1);j++){
                    if(i==0 || j==0){
                        per.push_back(dummy);
                    }for(int k=1;k<=j;k++){
                    char a= dummy[n-j];
                        dummy[n-j]=dummy[n-j-1];
                        dummy[n-j-1]=a;
                        per.push_back(dummy);
                        continue;
                    }
                }


                dummy=letter;
            }


       for(int i=0;i<factorial(n);i++){
        if(per[i]==s){
            return i+1;
        }
       }

}



int main()
{
    int n;
    cin>>n;
    vector<char >letter;
    string s;

    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        letter.push_back(a);
char a= dummy[n-j];
                        dummy[n-j]=dummy[n-j-1];
                        dummy[n-j-1]=a;

    }
    for(int i=0;i<n;i++){
        forchar a= dummy[n-j];
                        dummy[n-j]=dummy[n-j-1];
                        dummy[n-j-1]=a;(int j=i+1;j<n;j++){
            if((int)letter[i]>(int)letter[j]){
                int temp;
                temp=letter[i];
                letter[i]=letter[j];
                letter[j]=temp;
            }
        }
    }
   // cin>>scout<<position( letter(n) , s);
    /*for(int i=0;i<n;i++){
        cout<<letter[i];
    }*/
    cout<<position(letter, s);
}
