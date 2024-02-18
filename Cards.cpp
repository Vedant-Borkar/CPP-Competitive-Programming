#include <bits/stdc++.h>
using namespace std;

struct Card {
    int rank;
    char suit;
    bool operator<(const Card& other) const {
        return rank < other.rank || (rank == other.rank && suit < other.suit);
    }
};

bool solve(vector<Card>& cards, vector<pair<Card, Card>>& rounds, char trump, int i = 0) {
    if (i == cards.size()) {
        return true;
    }
    for (int j = i + 1; j < cards.size(); j++) {
        if ((cards[i].suit == cards[j].suit && cards[i].rank < cards[j].rank) || (cards[i].suit != trump && cards[j].suit == trump)) {
            swap(cards[i + 1], cards[j]);
            rounds.push_back({cards[i], cards[i + 1]});
            if (solve(cards, rounds, trump, i + 2)) {
                return true;
            }
            rounds.pop_back();
            swap(cards[i + 1], cards[j]);
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char trump;
        cin >> n >> trump;
        vector<Card> cards(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            string card;
            cin >> card;
            cards[i] = {card[0] - '0', card[1]};
        }
        sort(cards.begin(), cards.end());
        vector<pair<Card, Card>> rounds;
        if (solve(cards, rounds, trump)) {
            for (auto& round : rounds) {
                cout << round.first.rank << round.first.suit << ' ' << round.second.rank << round.second.suit << '\n';
            }
        } else {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}
