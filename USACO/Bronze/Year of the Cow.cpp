#include <bits/stdc++.h>
using namespace std;

int n;
string cow_a, a, b, relation, animal, c, d, cow_b;
string s[12] = { "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig" };
int calc(string animal_a, string animal_b, string relation) {
    int idx_a, idx_b;
    for (int i = 0; i < 12; i++) {
        if (s[i] == animal_a) idx_a = i;
        if (s[i] == animal_b) idx_b = i;
    }
    if (relation == "previous") return idx_a - idx_b - 12;
    return 12 + idx_a - idx_b;
}
int main() {
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    map<string, int> born;
    map<string, string> mp;
    born["Bessie"] = 2021;
    mp["Bessie"] = "Ox";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cow_a >> a >> b >> relation >> animal >> c >> d >> cow_b;
        mp[cow_a] = animal;
        born[cow_a] = born[cow_b] + calc(animal, mp[cow_b], relation);
    }
    cout << abs(born["Bessie"] - born["Elsie"]);
}