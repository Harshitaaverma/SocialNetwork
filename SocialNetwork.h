#ifndef SOCIAL_NETWORK_H
#define SOCIAL_NETWORK_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include<set>
using namespace std;

class SocialNetwork {
    private : 
    unordered_map<int,vector<int> > adj;

    public : 
    void addUser(int user);
    void addFriendship(int u , int v);
    void displayNetwork();
    void shortestPath(int src , int dest);
    void suggestFriends(int user);
};
#endif
