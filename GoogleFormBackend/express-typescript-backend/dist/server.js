"use strict";
var __createBinding = (this && this.__createBinding) || (Object.create ? (function(o, m, k, k2) {
    if (k2 === undefined) k2 = k;
    var desc = Object.getOwnPropertyDescriptor(m, k);
    if (!desc || ("get" in desc ? !m.__esModule : desc.writable || desc.configurable)) {
      desc = { enumerable: true, get: function() { return m[k]; } };
    }
    Object.defineProperty(o, k2, desc);
}) : (function(o, m, k, k2) {
    if (k2 === undefined) k2 = k;
    o[k2] = m[k];
}));
var __setModuleDefault = (this && this.__setModuleDefault) || (Object.create ? (function(o, v) {
    Object.defineProperty(o, "default", { enumerable: true, value: v });
}) : function(o, v) {
    o["default"] = v;
});
var __importStar = (this && this.__importStar) || function (mod) {
    if (mod && mod.__esModule) return mod;
    var result = {};
    if (mod != null) for (var k in mod) if (k !== "default" && Object.prototype.hasOwnProperty.call(mod, k)) __createBinding(result, mod, k);
    __setModuleDefault(result, mod);
    return result;
};
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const express_1 = __importDefault(require("express"));
const body_parser_1 = __importDefault(require("body-parser"));
const fs = __importStar(require("fs"));
const path_1 = __importDefault(require("path"));
const app = (0, express_1.default)();
const PORT = process.env.PORT || 3000;
const DB_FILE = path_1.default.join(__dirname, 'db.json');
// Middleware
app.use(body_parser_1.default.json());
// Ping Endpoint
app.get('/ping', (req, res) => {
    res.json(true);
});
// Submit Endpoint
app.post('/submit', (req, res) => {
    const { name, email, phone, github_link, stopwatch_time } = req.body;
    if (!name || !email || !phone || !github_link || !stopwatch_time) {
        return res.status(400).json({ error: 'All fields are required.' });
    }
    // Read existing submissions from JSON file
    let submissions = [];
    try {
        const data = fs.readFileSync(DB_FILE, 'utf-8');
        submissions = JSON.parse(data);
    }
    catch (error) {
        console.error('Error reading file:', error);
    }
    // Create new submission object
    const newSubmission = {
        name,
        email,
        phone,
        github_link,
        stopwatch_time
    };
    // Add new submission to array
    submissions.push(newSubmission);
    // Write updated submissions back to JSON file
    fs.writeFileSync(DB_FILE, JSON.stringify(submissions, null, 2));
    res.json({ message: 'Submission successful!', submission: newSubmission });
});
// Read Endpoint
app.get('/read', (req, res) => {
    const { index } = req.query;
    const idx = Number(index);
    if (isNaN(idx)) {
        return res.status(400).json({ error: 'Invalid index provided.' });
    }
    // Read existing submissions from JSON file
    let submissions = [];
    try {
        const data = fs.readFileSync(DB_FILE, 'utf-8');
        submissions = JSON.parse(data);
    }
    catch (error) {
        console.error('Error reading file:', error);
    }
    if (idx < 0 || idx >= submissions.length) {
        return res.status(404).json({ error: 'Submission not found.' });
    }
    const submission = submissions[idx];
    res.json(submission);
});
// Start Server
app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
