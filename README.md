# Windows-Desktop-App-And-Backend-Server_Project
This project implements a Windows Desktop Application similar to Google Forms, coupled with a backend server for data storage and retrieval.

Windows Desktop App (GoogleForm)
Description
The Windows Desktop App allows users to perform the following actions:

View Submissions: Navigate through submitted form entries.
Create New Submission: Enter details such as Name, Email, Phone Number, GitHub repo link, and manage a stopwatch for time tracking.
Features
Keyboard shortcuts for seamless navigation.
Stopwatch functionality that persists across pauses.
Ability to submit new form entries to the backend server.
Setup Instructions
Clone the repository:

Copy code
git clone https://github.com/Khushal251/Windows-Desktop-App-Project.git
Open the project in Visual Studio (ensure it's Visual Studio, not Visual Studio Code).

Build and run the solution to launch the desktop application.

Backend Server (GoogleFormBackend)
Description
The backend server provides RESTful API endpoints for managing form submissions:

/ping: GET request that always returns True.
/submit: POST request to save form submissions.
/read: GET request with query parameter to retrieve specific form submissions.
Features
Built with Express.js and TypeScript.
Uses a JSON file (db.json) as a simple database for storing submissions.
Setup Instructions
Clone the repository:

Copy code
git clone https://github.com/Khushal251/Windows-Desktop-App-Project.git
Navigate to the GoogleFormBackend directory:

Copy code
cd GoogleFormBackend
Install dependencies:

Copy code
npm install
Compile TypeScript to JavaScript:

arduino
Copy code
npm run build
Start the server:

Copy code
npm start
The server should now be running locally on port 3000.
