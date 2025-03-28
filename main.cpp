#include "SocialNetwork.h"

int main() {
    SocialNetwork sn;
    
    sn.addUser(1);
    sn.addUser(2);
    sn.addUser(3);
    sn.addUser(4);
    
    sn.addFriendship(1, 2);
    sn.addFriendship(2, 3);
    sn.addFriendship(3, 4);

    cout << "\n Displaying Social Network:\n";
    sn.displayNetwork();
    
    cout << "\n Finding Shortest Path (1 → 4):\n";
    sn.shortestPath(1, 4);

    cout << "\n Suggesting Friends for User 1:\n";
    sn.suggestFriends(1);

    return 0;
}