#include<iostream>
#include<vector>
using namespace std;

int main()
{

int colm1;
int row1;

cout<<"num of colem for mat1";
cin>>colm1;

cout<<"num of row for mat1";
cin>>row1;

vector <vector <int>> mat1(row1, vector<int>(colm1));

 int n;
for (int i = 0; i < row1; i++)
{
for (int j = 0; j < colm1; j++)
{
cout << endl << "Enter the element:";
cin >> n;
mat1[i][j] = n;
}
}

int colm2;
int row2;

cout<<"num of colem for mat2";
cin>>colm2;

cout<<"num of row for mat2";
cin>>row2;

vector <vector <int>> mat2(row2, vector<int>(colm2));



for (int i = 0; i < row2; i++)
{
for (int j = 0; j < colm2; j++)
{
cout << endl << "Enter the element:";
cin >> n;
mat2[i][j] = n;}

int chos;
cout<<"for add enter 1, mul 2,tran 3, for ex -1";
cin>>chos;


int mat[5][5];
if (chos==1){

    for (int i = 0; i < 5; i++)
{
for (int j = 0; j < 5; j++)
mat[i][j] = mat1[i][j] + mat2[i][j];
}
for (int i = 0; i <5 ; i++)
{
for (int j = 0; j < 5; j++)
cout << mat[i][j] << " ";
cout << endl;
}
}
if(chos==2){

    for (int k = 0; k < 25; k++)
{
for (int i = 0; i < 25; i++)
{
for (int j = 0; j < 25; j++)
mat[k][i] += mat1[k][j] * mat2[j][i];
}
}
for (int i = 0; i <25 ; i++)
{
for (int j = 0; j < 25; j++)
cout << mat[i][j] << " ";
cout << endl;
}
}
if(chos==3){
    int num;
    cout<<"mat1 enter 1,mat2 enter 2";
cin>>num;
if(num==1){
for (int i = 0; i < row1; i++)
{
for (int j = 0; j < colm1; j++)
mat1[i][j] = mat1[j][i];
}
for (int i = 0; i < row1; i++)
{
for (int j = 0; j < colm1; j++)
cout << mat1[i][j] << " ";
cout << endl;
}
}
if(num==2){
    for (int i = 0; i < row2; i++)
{
for (int j = 0; j < colm2; j++)
mat2[i][j] = mat2[j][i];
}
for (int i = 0; i < row2; i++)
{
for (int j = 0; j < colm2; j++)
cout << mat2[i][j] << " ";
cout << endl;
}
}
}
    return 0;
}
}