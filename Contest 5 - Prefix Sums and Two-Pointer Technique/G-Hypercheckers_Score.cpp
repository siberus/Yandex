#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


struct Card {
    long unsigned number, count;
};

const bool operator < (const long unsigned number, const Card& card) {
    return number < card.number;
}

int main() {
    long unsigned numCards, differenceMultiplier;
    cin >> numCards >> differenceMultiplier;
    vector<Card> cards(numCards);
    for (Card& card : cards) {
        cin >> card.number;
        card.count = 1;
    }

    sort(cards.begin(), cards.end(), [](const Card& left, const Card& right) {
        return left.number < right.number;
    });

    long unsigned destination = 0;
    for (long unsigned source = 1; source < numCards; ++source) {
        if (cards[source].number == cards[destination].number) {
            cards[destination].count += cards[source].count;
        } else {
            ++destination;
            cards[destination] = cards[source];
        }
    }
    cards.resize(destination + 1);

    long unsigned numScoreOptions = 0;
    vector<Card> moreThanOneSameCards;
    for (Card& card : cards) {
        if (card.count > 1) {
            if (card.count > 2) ++numScoreOptions;
            moreThanOneSameCards.emplace_back(card);
        }
    }

    long unsigned low, high, range;

    // Two smaller-number cards
    for (Card& card : moreThanOneSameCards) {
        low = card.number;
        high = low * differenceMultiplier;
        numScoreOptions += 3 * (upper_bound(cards.begin(), cards.end(), high) -
                                upper_bound(cards.begin(), cards.end(), low));
    }

    // Two larger-number cards
    for (Card& card : cards) {
        low = card.number;
        high = low * differenceMultiplier;
        numScoreOptions += 3 * (upper_bound(moreThanOneSameCards.begin(), moreThanOneSameCards.end(), high) -
                                upper_bound(moreThanOneSameCards.begin(), moreThanOneSameCards.end(), low));
    }

    // All three different cards
    for (Card& card : cards) {
        low = card.number;
        high = low * differenceMultiplier;
        range = upper_bound(cards.begin(), cards.end(), high) -
                upper_bound(cards.begin(), cards.end(), low);
        numScoreOptions += 6 * (range * (range - 1) / 2);
    }

    cout << numScoreOptions << endl;

    return EXIT_SUCCESS;
}