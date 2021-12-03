#include <iostream>
#include <map>

using namespace std;

int main(){
    int t, n, d, D;
    string subject;
    cin >>t;
    cin.ignore(1);
    for (int i=1;i<=t;i++){
        map<string, int> Subjects;
        cin >> n;
        cin.ignore(1);
        while(n-- && cin>>subject>>d)Subjects[subject] = d;
        cin>>D;
        cin>>subject;
        printf("Case %d: ", i);
        if(Subjects.find(subject)!=Subjects.end()){
            if(Subjects[subject] <= D)cout<<"Yesss";
            else if(Subjects[subject] <= D + 5) cout<<"Late";
            else cout<<"Do your own homework!";
        }
        else cout<<"Do your own homework!";
        cout<<endl;

    }
}