import csv
import matplotlib.pyplot as plt

# הגדרת נתיב הקובץ
csv_file_path = r'C:\Users\USER\source\repos\Hospital\Hospital\patients.csv'


# קריאת קובץ ה-CSV ואיסוף גילאים
def get_ages(csv_file_path):
    ages = []
    try:
        with open(csv_file_path, 'r') as csvfile:
            reader = csv.DictReader(csvfile)  # קריאה עם כותרות
            for row in reader:
                age = int(row['Age'])  # המרת גיל ממחרוזת למספר שלם
                ages.append(age)
    except FileNotFoundError:
        print(f"The file {csv_file_path} does not exist.")
    except KeyError:
        print("The 'Age' column does not exist in the CSV file.")
    except ValueError:
        print("Invalid value found in the 'Age' column. Please ensure all values are integers.")

    return ages


# יצירת היסטוגרמה
def plot_age_histogram(ages):
    plt.figure(figsize=(10, 6))
    plt.hist(ages, bins=range(0, 121, 10), edgecolor='black', alpha=0.7)
    plt.title('Age Distribution of Patients')
    plt.xlabel('Age')
    plt.ylabel('Number of Patients')
    plt.xticks(range(0, 121, 10))
    plt.grid(axis='y')
    plt.show()


# קריאה לפונקציות
ages = get_ages(csv_file_path)
if ages:
    plot_age_histogram(ages)
