// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v ;
//     for(int i=0;i<v.size();i++)
//     {
//          int x;
//          cin>>x;
//          v.push_back(x);
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;  // Take the number of elements as input

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);  // Now it correctly adds elements to the vector
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}


// iska Bolta Hai Dainamic Array