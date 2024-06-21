# Windows-Desktop-App-And-Backend-Server_Project
This project implements a Windows Desktop Application similar to Google Forms, coupled with a backend server for data storage and retrieval.

Pitchure of Interface
![Screenshot (4496)](https://github.com/Khushal251/Windows-Desktop-App-Project/assets/114289491/47bf6db6-d1d4-4616-8b36-d42e4aa450a9)
![Screenshot (4497)](https://github.com/Khushal251/Windows-Desktop-App-Project/assets/114289491/43424d0a-c778-455c-be29-3408fa1b5566)
![Screenshot (4500)](https://github.com/Khushal251/Windows-Desktop-App-Project/assets/114289491/766481d5-74ea-463e-9306-23548deb3562)


Windows Desktop App (GoogleForm)
Description
The Windows Desktop App allows users to perform the following actions:

View Submissions: Navigate through submitted form entries.
Create New Submission: Enter details such as Name, Email, Phone Number, GitHub repo link, and manage a stopwatch for time tracking.

The Windows Desktop App consists of three forms:

MyForm: Initial form presenting options to "View Submissions" and "Create New Submission".
MyForm1: Form for viewing submitted entries, with navigation buttons for previous and next entries.
MyForm2: Form for creating new submissions, including fields for Name, Email, Phone Number, GitHub repo link, and stopwatch control.

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
