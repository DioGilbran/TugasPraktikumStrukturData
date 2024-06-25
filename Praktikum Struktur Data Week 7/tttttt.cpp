#include <iostream>
using namespace std;

string kota[6] = {"Purwokerto", "Bandung", "Jogja", "Solo", "Jakarta", "Semarang"};

bool undigraph[6][6] = {
    {0, 1, 1, 0, 1, 0},
    {1, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1},
    {0, 1, 0, 0, 0, 0},
    {1, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 0}};

bool digraph[6][6] = {
    {0, 1, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0},
    {1, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}};

int weighted[6][6] = {
    {0, 5, 4, 0, 11, 0},
    {5, 0, 7, 3, 0, 0},
    {4, 7, 0, 0, 6, 4},
    {0, 3, 0, 0, 0, 0},
    {11, 0, 6, 0, 0, 0},
    {0, 0, 4, 0, 0, 0}};

void addEdgeUnAndDigraph(string sumber, string tujuan, bool edges[6][6])
{
    int indexSumber = -1, indexTujuan = -1;
    for (int i = 0; i < 6; i++)
    {
        if (kota[i] == sumber)
        {
            indexSumber = i;
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (kota[i] == tujuan)
        {
            indexTujuan = i;
            break;
        }
    }
    if (indexSumber < 0 && indexTujuan < 0)
    {
        cout << "Sumber dan Tujuan tidak ditemukan" << endl;
    }
    else if (indexSumber < 0)
    {
        cout << "Sumber tidak ditemukan" << endl;
    }
    else if (indexTujuan < 0)
    {
        cout << "Tujuan tidak ditemukan" << endl;
    }
    else
    {
        if (edges == undigraph)
        {
            undigraph[indexSumber][indexTujuan] = 1;
            undigraph[indexTujuan][indexSumber] = 1;
            cout << "Penambahan Edge Undigraph : ";
        }
        if (edges == digraph)
        {
            digraph[indexSumber][indexTujuan] = 1;
            cout << "Penambahan Edge Digraph : ";
        }
        cout << "Vertex " << sumber << " berhasil dihubungkan dengan vertex " << tujuan << "\n\n"
             << endl;
    }
}

void printUnAndDigraph(bool edges[6][6])
{
    if (edges == undigraph)
        cout << "Edges of Undigraph" << endl;
    if (edges == digraph)
        cout << "Edges of Digraph" << endl;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (edges[i][j] != 0 || edges[i][j] != false)
            {
                if (edges == undigraph)
                    cout << "(" << kota[i] << "," << kota[j] << ")" << endl;
                if (edges == digraph)
                    cout << "<" << kota[i] << "," << kota[j] << ">" << endl;
            }
        }
    }

    cout << "\n\n"
         << endl;
}

void addEdgeWeightedGraph(string sumber, string tujuan, int nilai, int edges[6][6])
{
    int indexSumber = -1, indexTujuan = -1;
    for (int i = 0; i < 6; i++)
    {
        if (kota[i] == sumber)
        {
            indexSumber = i;
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (kota[i] == tujuan)
        {
            indexTujuan = i;
            break;
        }
    }
    if (indexSumber < 0 && indexTujuan < 0)
    {
        cout << "Sumber dan Tujuan tidak ditemukan" << endl;
    }
    else if (indexSumber < 0)
    {
        cout << "Sumber tidak ditemukan" << endl;
    }
    else if (indexTujuan < 0)
    {
        cout << "Tujuan tidak ditemukan" << endl;
    }
    else
    {
        weighted[indexSumber][indexTujuan] = nilai;
        weighted[indexTujuan][indexSumber] = nilai;
        cout << "Penambahan Edge Weighted Graph : Vertex " << sumber << " berhasil dihubungkan dengan vertex " << tujuan << " dengan nilai : " << nilai << "\n\n"
             << endl;
    }
}

void printWeightedGraph(int edges[6][6])
{
    cout << "Edges of Weighted Graph" << endl;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (edges[i][j] != 0 || edges[i][j] != false)
            {
                cout << "(" << kota[i] << "," << kota[j] << ") = " << edges[i][j] << endl;
            }
        }
    }

    cout << "\n\n"
         << endl;
}

int main()
{

    printUnAndDigraph(undigraph);
    printUnAndDigraph(digraph);
    printWeightedGraph(weighted);

    addEdgeUnAndDigraph("Purwokerto", "Solo", undigraph);
    printUnAndDigraph(undigraph);

    addEdgeUnAndDigraph("Purwokerto", "Solo", digraph);
    printUnAndDigraph(digraph);

    addEdgeWeightedGraph("Purwokerto", "Solo", 2, weighted);
    printWeightedGraph(weighted);
}