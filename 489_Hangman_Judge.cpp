#include<iostream>
#include<map>
#include <iterator>

using namespace std;

int main(){
    int n;
    string solution, guess;
    while(cin>>n, n!=-1){
        cin>>solution>>guess;
        map<char, int> charmap;
        int stroke=0;
        for(int i=0; i < solution.length(); ++i)charmap[solution[i]] = 0;
        for(int i=0; i < guess.length(); ++i){
            if(charmap.find(guess[i])==charmap.end()){
                stroke++;
            }
            else charmap[solution[i]] = 1;
        }
        bool matchLength=true;
        for(map<char, int>::iterator it=charmap.begin(); it!=charmap.end();++it){
            if(it->second == 0){
                matchLength=false;
                break;
            }
        }
        cout<<"Round "<<n<<endl;
        if(stroke>=7)cout<< "You lose." <<endl;
        else if(stroke==0 && matchLength)cout<< "You win." <<endl;
        else cout<< "You chickened out." <<endl;

    }
    
}






// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {  
//     size_t round;
//     while (cin >> round, round != -1)
//     {
//         string solution, guess;
//         cin >> solution >> guess;

//         int stroke = 0;
//         for (size_t i = 0; i < guess.size() 
//                            && stroke <= 6 
//                            && solution != ""; ++i)
//         {
//             if (solution.find(guess[i]) != string::npos)
//             {
//                 solution.erase(remove(solution.begin(), solution.end(),
//                                       guess[i]),
//                                solution.end());
//             }
//             else
//                 ++stroke;
//         }
//         // cout << stroke <<endl;
//         cout << "Round " << round << endl;
//         if (stroke == 7)
//             cout << "You lose." << endl;
//         else if (solution == "")
//             cout << "You win." << endl;
//         else
//             cout << "You chickened out." << endl;
//     }
//     return 0;
// }