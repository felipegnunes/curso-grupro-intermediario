#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> feiticos(N);
    for (int i = 0; i < N; i++)
    {
        cin >> feiticos[i];
    }
    
    // cout << endl << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     cout << "Feitico #" << i << ": " << feiticos[i] << endl;
    // }
    
    int M;
    cin >> M;
    vector<string> proibidos(M);
    for (int i = 0; i < M; i++)
    {
        cin >> proibidos[i];
    }

    int C;
    cin >> C;
    string query;
    for (int i = 0; i < C; i++)
    {
        cin >> query;
        bool exists = binary_search(proibidos.begin(), proibidos.end(), query);

        if (exists) cout << "Proibido" << endl;
        else cout << "Geral" << endl;
    }
    
    

    return 0;
}