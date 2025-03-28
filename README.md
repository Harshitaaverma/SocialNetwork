# 📌 Social Network Graph (C++)

## 📖 Overview
This project implements a **Social Network Graph** using C++ and an **adjacency list**. It allows users to:
- **Add users** to the network
- **Create friendships** (edges between users)
- **Display the social network**
- **Find the shortest path** between two users (BFS-based)
- **Suggest friends** based on mutual connections

## 🛠️ Features
✅ **Graph-based representation of a social network**  
✅ **Breadth-First Search (BFS) for shortest path calculation**  
✅ **Friend suggestion based on common connections**  
✅ **Efficient adjacency list implementation (unordered_map)**  

## 📂 Project Structure
```
DSA_GRAPHS/
│── SocialNetwork/
│   │── SocialNetwork.h  # Header file with class definition
│   │── SocialNetwork.cpp  # Implementation of SocialNetwork methods
│   │── main.cpp  # Driver program
│── .vscode/
│── README.md  # Project documentation
```

## 🔧 Installation & Usage
### 1️⃣ **Clone the repository**
```sh
git clone https://github.com/Harshitaaverma/SocialNetwork.git
cd DSA_GRAPHS/SocialNetwork
```


### 2️⃣ **Compile the code**
```sh
g++ -o social_network main.cpp SocialNetwork.cpp -std=c++17
```

### 3️⃣ **Run the executable**
```sh
./social_network
```

## 🚀 Example Usage
### **Adding Users & Friendships**
```cpp
SocialNetwork sn;
sn.addUser(1);
sn.addUser(2);
sn.addUser(3);
sn.addFriendship(1, 2);
sn.addFriendship(2, 3);
sn.displayNetwork();
```
✅ **Output:**
```
User 1: 2
User 2: 1 3
User 3: 2
```

### **Finding the Shortest Path**
```cpp
sn.shortestPath(1, 3);
```
✅ **Output:**
```
Shortest path from 1 to 3: 1 -> 2 -> 3
```

### **Suggesting Friends**
```cpp
sn.suggestFriends(1);
```
✅ **Output:**
```
Friend suggestions for user 1: 3 (mutual connection via 2)
```

## 🎯 Future Enhancements
- ✅ Graph visualization using Python/Graphviz
- ✅ More advanced friend recommendation algorithms
- ✅ GUI-based interface

## 📝 License
This project is **open-source** under the **MIT License**.

## 👨‍💻 Author
- Harshita Verma
- LinkedIn: www.linkedin.com/in/harshita-verma-57a5b7229

