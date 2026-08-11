
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }


    if(r1==r2 && c2==c1){
            cout<<"Addition "<<endl;
        for(int i=0 ; i<r1 ; i++){
            for( int j=0 ; j<c2 ;j++){
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";
            }
            cout << endl;
        }
    }



    if(c2==c1 && r2==r1){
            cout<< " Subtracition "<<endl;
        for(int i=0 ; i<r1 ; i++){
            for( int j=0 ; j<c2 ;j++){
                c[i][j]=a[i][j]-b[i][j];
                cout<<c[i][j]<<" ";
            }
            cout << endl;
        }

    }

    if(c1==r2){
            cout<<" Multilication "<<endl;
        for(int i=0; i<r1 ; i++){
            for(int j=0 ; j< c2; j++){
                c[i][j]=0;
                for(int k=0;k<c1 ; k++){
                    c[i][j]+= a[i][k]*b[k][j];
                }
                cout<< c[i][j] << " ";

            }
            cout<<endl;
        }

    }

    for(int i=0; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            cout<<a[j][i] <<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<r2 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cout<<b[j][i] <<" ";
        }
        cout<<endl;
    }
}
