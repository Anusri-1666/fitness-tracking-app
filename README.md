## 📌 Features

* 🌳 **Workout Plan Tree Structure**

  * Root node represents the main workout plan
  * Child nodes represent workout categories (Push / Pull / Legs)
  * Leaf nodes represent exercises
  * Supports hierarchical organization using pointers

* ➕ **Create**

  * Add new workout plans, sub-plans, and exercises
  * Store details like sets, reps, duration, notes

* 📖 **Read**

  * Display full workout tree (DFS / BFS traversal)
  * View structured hierarchy clearly

* ✏️ **Update**

  * Modify workout name, sets, reps, and notes
  * Update any node dynamically

* ❌ **Delete**

  * Delete a node or entire subtree
  * Memory deallocation using `free()`

* 💾 **In-Memory Storage**

  * Data stored using dynamic memory allocation (`malloc`, `free`)
  * Optional file handling for persistence

---

## 🧱 Tech Stack

* **Language:** C
* **Concepts Used:**

  * Trees (General Tree / N-ary Tree)
  * Dynamic Memory Allocation
  * Pointers
  * Recursion
  * Structures

---

## 📂 Project Structure

```
fitness-tracker-c/
│
├── main.c              # Entry point
├── tree.c              # Tree operations (CRUD)
├── tree.h              # Structure definitions
├── utils.c             # Helper functions
├── data.txt            # Optional file storage
└── README.md
```

---

## 🌳 Data Structure Design

```c
typedef struct Node {
    char name[50];
    int sets;
    int reps;
    char type[20]; // "plan" or "exercise"
    
    struct Node *child;     // First child
    struct Node *sibling;   // Next sibling
} Node;
```

### 📌 Example Tree Representation

```
Workout Plan
│
├── Push Day
│   └── Bench Press (4 sets, 10 reps)
│
├── Pull Day
│   └── Pull Ups (3 sets, 8 reps)
│
└── Leg Day
    └── Squats (4 sets, 12 reps)
```

---

## 🔌 Core Functions (CRUD)

### ➕ Create

```c
Node* createNode(char name[], char type[], int sets, int reps);
void addChild(Node* parent, Node* child);
```

### 📖 Read (Traversal)

```c
void displayTree(Node* root, int level);
```

### ✏️ Update

```c
void updateNode(Node* node, char newName[], int sets, int reps);
```

### ❌ Delete

```c
void deleteNode(Node* root, char name[]);
void freeTree(Node* root);
```

---

## 🚀 Getting Started

### 1. Compile the Program

```bash
gcc main.c tree.c utils.c -o fitness
```

### 2. Run the Application

```bash
./fitness
```

---

## ⚙️ Sample Menu

```
1. Create Workout Plan
2. Add Exercise
3. Display Workouts
4. Update Exercise
5. Delete Node
6. Exit
```

---

## 🧪 Example Output

```
Workout Plan
 ├── Push Day
 │    └── Bench Press (Sets: 4, Reps: 10)
 ├── Pull Day
 │    └── Pull Ups (Sets: 3, Reps: 8)
 └── Leg Day
      └── Squats (Sets: 4, Reps: 12)
```

---

## 📈 Future Improvements

* File handling for saving/loading workouts
* Balanced tree or advanced structures
* Search functionality (DFS/BFS)
* GUI using C libraries (GTK)
* Integration with mobile apps

---

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature-name`)
3. Commit changes
4. Push to branch
5. Open a Pull Request

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Acknowledgements

* Data Structures concepts in C
* Tree traversal algorithms
* Fitness app inspirations

---

## ⭐ Support

If you found this helpful, give it a ⭐ and share!

---

<img width="517" height="364" alt="Screenshot 2026-04-05 222358" src="https://github.com/user-attachments/assets/ed9cdd69-0943-42ce-a10e-59e1eb73dbcc" />
<img width="605" height="415" alt="Screenshot 2026-04-05 222336" src="https://github.com/user-attachments/assets/9941b731-f328-40a7-a320-15185cec0459" />
<img width="401" height="327" alt="Screenshot 2026-04-05 222412" src="https://github.com/user-attachments/assets/14964958-5aeb-45db-acb1-89b3337a50a9" />
<img width="450" height="351" alt="Screenshot 2026-04-05 222425" src="https://github.com/user-attachments/assets/7e271b12-8693-4ddf-91c8-a9f5f87c73c4" />
