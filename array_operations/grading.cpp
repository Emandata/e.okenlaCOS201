#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];
    cout << "Enter all scores:\n";

    for(int i=0; i<n; i++)
        cin >> scores[i];

    // find best score
    int best = scores[0];
    for(int i=1; i<n; i++)
        if(scores[i] > best) best = scores[i];

    // grading
    for(int i=0;i<n;i++){
        cout << "Student " << i+1 << " score: " << scores[i] << " - Grade: ";
        if(scores[i] >= best - 10) cout << "A\n";
        else if(scores[i] >= best - 20) cout << "B\n";
        else if(scores[i] >= best - 30) cout << "C\n";
        else if(scores[i] >= best - 40) cout << "D\n";
        else cout << "F\n";
    }
    return 0;
}
