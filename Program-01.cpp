// Program to read a matrix of size m * nform the keyboard and display the same using function.
#include <iostream>
using namespace std;
int matrix[50][50];
void read_matrix(int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout <<"Enter Element at matrix["<<i<<"]["<<j<<"] = ";       
            cin >> matrix[i][j];
        }
        cout<<endl;
    }    
}
void display_matrix(int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout <<matrix[i][j]<<"\t";       
        }
        cout<<endl;
    }  
}
int main()
{
    int m, n;
    cout << "Enter Number Of Rows = ";
    cin >> m;
    cout << "Enter Number Of Columns = ";
    cin >> n;
    read_matrix(m,n);
    cout << "-------------Displaying Entered 2-D Matrix-------------"<< endl;
    display_matrix(m,n);
    return 0;
}