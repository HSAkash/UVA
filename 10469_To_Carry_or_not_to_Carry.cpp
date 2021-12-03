#include<iostream>
#include<cmath>
using namespace std;

void decimaltobinary(int *array, int num){
    int i=31;
    while(num){
        array[i] = num%2;
        num /= 2;
        i--;
    }
}

int binarytodecimal(int *array){
    int num=0;
    for(int i=0;i<32;i++)num += (array[i] * pow(2, 31-i));
    return num;
}

void XORgate(int *array1, int *array2){
    for(int i=0;i<32;i++){
        if(array1[i]!=array2[i])array1[i]=1;
        else array1[i] = 0;
    }
}

int main(){
    unsigned int num1, num2;
    while(cin>>num1>>num2){
        int array1[32]={0}, array2[32]={0};
        decimaltobinary(array1, num1);
        decimaltobinary(array2, num2);
        XORgate(array1, array2);
        cout<<binarytodecimal(array1)<<endl;   
    }
}




// #include <iostream>

// using namespace std;

// int main()
// {
//     int i, j;
//     while (cin >> i >> j)
//         cout << (i ^ j) << '\n';
// }