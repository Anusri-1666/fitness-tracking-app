# Fitness Tracking App – Workout Plan Tree (CRUD)

A full-featured fitness tracking application that allows users to create, manage, and organize workout plans in a **tree structure**. This project demonstrates CRUD (Create, Read, Update, Delete) operations on hierarchical workout data, making it ideal for structured training programs.

---

## 📌 Features

* 🌳 **Workout Plan Tree Structure**

  * Organize workouts into categories (e.g., Push / Pull / Legs)
  * Nested exercises under each plan
  * Expandable and collapsible tree view

* ➕ **Create**

  * Add new workout plans, sub-plans, and exercises
  * Attach metadata (sets, reps, duration, notes)

* 📖 **Read**

  * View structured workout hierarchy
  * Display detailed exercise information

* ✏️ **Update**

  * Edit workout names, structure, and details
  * Modify sets, reps, and notes dynamically

* ❌ **Delete**

  * Remove workouts or entire branches of the tree
  * Safe deletion with confirmation

* 💾 **Persistent Storage**

  * Store data in database (MongoDB / PostgreSQL / SQLite depending on setup)

* 📊 **Optional Enhancements**

  * Progress tracking
  * Workout history
  * User authentication

---

## 🧱 Tech Stack

* **Frontend:** React / Vue / Angular (customizable)
* **Backend:** Node.js + Express (or any REST framework)
* **Database:** MongoDB / PostgreSQL / SQLite
* **State Management:** Redux / Context API (if applicable)

---

## 📂 Project Structure

```
fitness-tracker/
│
├── client/                 # Frontend application
│   ├── components/
│   ├── pages/
│   └── services/
│
├── server/                 # Backend API
│   ├── controllers/
│   ├── models/
│   ├── routes/
│   └── services/
│
├── database/               # Schema / migrations
│
└── README.md
```

---

## 🌳 Data Model (Workout Tree Example)

```json
{
  "id": "root",
  "name": "Workout Plan",
  "children": [
    {
      "id": "push-day",
      "name": "Push Day",
      "children": [
        {
          "id": "bench-press",
          "type": "exercise",
          "sets": 4,
          "reps": 10
        }
      ]
    }
  ]
}
```

---

## 🔌 API Endpoints

### Workout Plan CRUD

| Method | Endpoint          | Description               |
| ------ | ----------------- | ------------------------- |
| GET    | /api/workouts     | Get all workout plans     |
| GET    | /api/workouts/:id | Get specific workout node |
| POST   | /api/workouts     | Create new workout        |
| PUT    | /api/workouts/:id | Update workout            |
| DELETE | /api/workouts/:id | Delete workout            |

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/fitness-tracker.git
cd fitness-tracker
```

### 2. Install Dependencies

```bash
# Backend
cd server
npm install

# Frontend
cd ../client
npm install
```

### 3. Run the Application

```bash
# Start backend
cd server
npm run dev

# Start frontend
cd client
npm start
```

---

## ⚙️ Environment Variables

Create a `.env` file in the server directory:

```
PORT=5000
DATABASE_URL=your_database_url
JWT_SECRET=your_secret_key
```

---

## 🧪 Testing

```bash
npm test
```

---

## 📈 Future Improvements

* Drag-and-drop tree editing
* AI-based workout recommendations
* Integration with wearable devices
* Mobile app version (React Native / Flutter)

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the repo
2. Create a feature branch (`git checkout -b feature-name`)
3. Commit changes (`git commit -m "Add feature"`)
4. Push to branch (`git push origin feature-name`)
5. Open a Pull Request

---

## 📄 License

This project is licensed under the MIT License.

---

## 🙌 Acknowledgements

* Open-source fitness APIs
* Developer community contributions
* Inspiration from modern fitness tracking apps

---

## ⭐ Support

If you like this project, please ⭐ the repo and share it!

---

<img width="517" height="364" alt="Screenshot 2026-04-05 222358" src="https://github.com/user-attachments/assets/ed9cdd69-0943-42ce-a10e-59e1eb73dbcc" />
<img width="605" height="415" alt="Screenshot 2026-04-05 222336" src="https://github.com/user-attachments/assets/9941b731-f328-40a7-a320-15185cec0459" />
<img width="401" height="327" alt="Screenshot 2026-04-05 222412" src="https://github.com/user-attachments/assets/14964958-5aeb-45db-acb1-89b3337a50a9" />
<img width="450" height="351" alt="Screenshot 2026-04-05 222425" src="https://github.com/user-attachments/assets/7e271b12-8693-4ddf-91c8-a9f5f87c73c4" />
