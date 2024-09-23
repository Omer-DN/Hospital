import sqlite3
import csv

# יצירת מסד נתונים
conn = sqlite3.connect('hospital.db')
cursor = conn.cursor()

# יצירת טבלת מטופלים
cursor.execute('''
CREATE TABLE IF NOT EXISTS patients (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER NOT NULL,
    condition TEXT NOT NULL,
    urgency TEXT NOT NULL
)
''')

# הוספת מטופלים
patients = [
    ("James Smith", 35, "Flu", "Normal"),
    ("Sarah Johnson", 28, "Fracture", "Urgent"),
    ("Michael Brown", 50, "Heart Attack", "Critical")
]

cursor.executemany('INSERT INTO patients (name, age, condition, urgency) VALUES (?, ?, ?, ?)', patients)
conn.commit()

# שליפת נתונים והכנה ל-CVS
cursor.execute('SELECT * FROM patients')
rows = cursor.fetchall()

# כתיבת הנתונים לקובץ CSV
with open('patients.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['ID', 'Name', 'Age', 'Condition', 'Urgency'])  # כותרות
    writer.writerows(rows)

# סגירת המסד נתונים
conn.close()
