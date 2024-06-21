"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var express_1 = require("express");
var body_parser_1 = require("body-parser");
var fs = require("fs");
var path_1 = require("path");
var app = (0, express_1.default)();
var PORT = process.env.PORT || 3000;
var DB_FILE = path_1.default.join(__dirname, 'db.json');
// Middleware
app.use(body_parser_1.default.json());
// Ping Endpoint
app.get('/ping', function (req, res) {
    res.json(true);
});
// Submit Endpoint
app.post('/submit', function (req, res) {
    var _a = req.body, name = _a.name, email = _a.email, phone = _a.phone, github_link = _a.github_link, stopwatch_time = _a.stopwatch_time;
    if (!name || !email || !phone || !github_link || !stopwatch_time) {
        return res.status(400).json({ error: 'All fields are required.' });
    }
    // Read existing submissions from JSON file
    var submissions = [];
    try {
        var data = fs.readFileSync(DB_FILE, 'utf-8');
        submissions = JSON.parse(data);
    }
    catch (error) {
        console.error('Error reading file:', error);
    }
    // Create new submission object
    var newSubmission = {
        name: name,
        email: email,
        phone: phone,
        github_link: github_link,
        stopwatch_time: stopwatch_time
    };
    // Add new submission to array
    submissions.push(newSubmission);
    // Write updated submissions back to JSON file
    fs.writeFileSync(DB_FILE, JSON.stringify(submissions, null, 2));
    res.json({ message: 'Submission successful!', submission: newSubmission });
});
// Read Endpoint
app.get('/read', function (req, res) {
    var index = req.query.index;
    var idx = Number(index);
    if (isNaN(idx)) {
        return res.status(400).json({ error: 'Invalid index provided.' });
    }
    // Read existing submissions from JSON file
    var submissions = [];
    try {
        var data = fs.readFileSync(DB_FILE, 'utf-8');
        submissions = JSON.parse(data);
    }
    catch (error) {
        console.error('Error reading file:', error);
    }
    if (idx < 0 || idx >= submissions.length) {
        return res.status(404).json({ error: 'Submission not found.' });
    }
    var submission = submissions[idx];
    res.json(submission);
});
// Start Server
app.listen(PORT, function () {
    console.log("Server running on port ".concat(PORT));
});
