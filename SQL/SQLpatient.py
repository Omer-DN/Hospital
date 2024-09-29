import sqlite3
import csv
import os

# חיבור למסד נתונים או יצירת מסד חדש
conn = sqlite3.connect('hospital.db')
cursor = conn.cursor()

# יצירת טבלת מטופלים אם היא לא קיימת
cursor.execute('''
CREATE TABLE IF NOT EXISTS patients (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER NOT NULL,
    condition TEXT NOT NULL,
    urgency TEXT NOT NULL
)
''')

# קריאת קובץ ה-CSV
csv_file_path = r'C:\Users\USER\source\repos\Hospital\Hospital\patients.csv'

# בדוק אם הקובץ קיים
if os.path.exists(csv_file_path):
    # קריאה של השורה הראשונה בקובץ
    with open(csv_file_path, 'r', newline='') as csvfile:
        reader = csv.reader(csvfile)
        first_row = next(reader)  # קבלת השורה הראשונה

        # בדוק אם השורה הראשונה מכילה את הכותרות הנדרשות
        required_headers = ['Name', 'Age', 'Condition', 'Urgency']
        if first_row != required_headers:
            print("הכותרות לא תואמות. הוספת הכותרות הנדרשות.")
            # יצירת קובץ חדש עם הכותרות
            with open(csv_file_path, 'w', newline='') as csvfile:
                writer = csv.writer(csvfile)
                writer.writerow(required_headers)  # הוספת הכותרות
                # כתיבת השורות המקוריות
                writer.writerows([first_row] + list(reader))  # שומר את השורות הקיימות

# קריאת קובץ ה-CSV והוספת הנתונים למסד הנתונים
with open(csv_file_path, 'r') as csvfile:
    reader = csv.DictReader(csvfile)  # קריאה עם כותרות
    for row in reader:
        cursor.execute('''
        INSERT INTO patients (name, age, condition, urgency) VALUES (?, ?, ?, ?)
        ''', (row['Name'], row['Age'], row['Condition'], row['Urgency']))

# שמירת השינויים וסגירת החיבור
conn.commit()
conn.close()

print("Data imported successfully from CSV to SQLite database.")
