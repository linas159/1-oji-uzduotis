#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

ifstream in("kursiokai.txt");

struct studentas
{
    string vard;
    string pavard;
    vector <int> nd;
    int egz;
    float gal;
    float galmed;
};

void exists_test(const string& name);
void skaicius(int& a);
void ivestisranka(vector <studentas>& stud);
int kiekpazymiu();
void ivestis(vector <studentas>& stud);
bool palyginimas(studentas& a, studentas& b);
void isvestis(vector <studentas> stud);
void failugeneracija(int kieknd);
void failgen(int kieknd, int kiekstud);
void greicioanalize(int kiekstud);
void nendartiolaiifaila(int kieknd, int kiekstud, vector <studentas> stud);
void kietiakaiifaila(int kieknd, int kiekstud, vector <studentas> stud);