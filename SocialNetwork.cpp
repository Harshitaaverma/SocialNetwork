#include "SocialNetwork.h"

//adding a new user
void SocialNetwork::addUser(int user){
    if(adj.find(user)==adj.end()){
        adj[user] = std::vector<int>();
        cout<<"User "<<user<<" Added!\n";

    }else{
        cout<<"User already exists!\n";
    }
}

//adding a friendship

void SocialNetwork::addFriendship(int u , int v ){
    if(adj.find(u)==adj.end()||adj.find(v)==adj.end()){
        cout<<"Both users must exist!\n";
        return;
    }
    adj[u].push_back(v);
    adj[v].push_back(u);
    cout<<"Friendship added between "<<u<<" and "<<v<<"\n";
}
//Display the social network
void SocialNetwork::displayNetwork(){
    for(const auto& [user,friends] : adj){
        cout<<"User "<<user<<" -> ";
        for(int friendId : friends){
            cout<<friendId<<" ";
        }
        cout<<endl;
    }
}

void SocialNetwork::shortestPath(int src , int dest){
    unordered_map<int,int> dist;
    queue<int>q;
    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        int user = q.front();
        q.pop();
        for(int friendId : adj[user]){
            if(dist.find(friendId)==dist.end()){
                dist[friendId]=dist[user]+1;
                q.push(friendId);
            }
        }
    }
    if(dist.find(dest)!=dist.end()){
        cout<<"Shortest Path from "<<src<<" to "<<dest<<" is "<<dist[dest]<<" connections away."<<endl;
    }else{
        cout<<"No path found between "<< src <<" and "<<dest<<"."<<endl;
    }
}

void SocialNetwork::suggestFriends(int user){
    set<int> suggestFriends;
    for(int friendId : adj[user]){
        for(int mutual : adj[friendId]){
            if(mutual!=user && adj[user].end()==find(adj[user].begin(),adj[user].end(),mutual)){
                suggestFriends.insert(mutual);
            }
        }
    }
    cout<<"Friend suggestions for User "<<user<<" : ";
    if(suggestFriends.empty()){
        cout<<"No suggestions available."<<endl;
    }else{
        for(int sug : suggestFriends){
            cout<<sug<<" ";
        }
        cout<<endl;
    }
}
