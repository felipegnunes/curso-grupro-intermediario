#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Candidato {
    int id;
    int nota;
};

int main()
{
    int num_selecionados, total_candidatos;
    cin >> num_selecionados >> total_candidatos;
    vector<Candidato> candidatos(total_candidatos);
    for (int i = 0; i < total_candidatos; i++)
    {
        cin >> candidatos[i].nota >> candidatos[i].id;
    }
    
    sort(candidatos.begin(), candidatos.end(), [](Candidato a, Candidato b) {
        if (a.nota == b.nota) return a.id < b.id;
        return a.nota > b.nota;
    });

    int num_queries;
    cin >> num_queries;
    for (int i = 0; i < num_queries; i++)
    {
        int nota_query, id_query;
        cin >> nota_query >> id_query;


        // bool exists = binary_search(candidatos.begin(), candidatos.end(), query);
        // if (exists) cout << "Selecionado" << endl;
        // else cout << "Nao Selecionado" << endl;
    }
    return 0;
}