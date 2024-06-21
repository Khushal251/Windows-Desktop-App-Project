import express, { Request, Response } from 'express';
import bodyParser from 'body-parser';
import * as fs from 'fs';
import path from 'path';

const app = express();
const PORT = process.env.PORT || 3000;
const DB_FILE = path.join(__dirname, 'db.json');


app.use(bodyParser.json());


app.get('/ping', (req: Request, res: Response) => {
  res.json(true);
});

app.post('/submit', (req: Request, res: Response) => {
  const { name, email, phone, github_link, stopwatch_time } = req.body;
  
  if (!name || !email || !phone || !github_link || !stopwatch_time) {
    return res.status(400).json({ error: 'All fields are required.' });
  }

  let submissions = [];
  try {
    const data = fs.readFileSync(DB_FILE, 'utf-8');
    submissions = JSON.parse(data);
  } catch (error) {
    console.error('Error reading file:', error);
  }


  const newSubmission = {
    name,
    email,
    phone,
    github_link,
    stopwatch_time
  };

  submissions.push(newSubmission);

  fs.writeFileSync(DB_FILE, JSON.stringify(submissions, null, 2));

  res.json({ message: 'Submission successful!', submission: newSubmission });
});


app.get('/read', (req: Request, res: Response) => {
  const { index } = req.query;
  const idx = Number(index);

  if (isNaN(idx)) {
    return res.status(400).json({ error: 'Invalid index provided.' });
  }


  let submissions = [];
  try {
    const data = fs.readFileSync(DB_FILE, 'utf-8');
    submissions = JSON.parse(data);
  } catch (error) {
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
