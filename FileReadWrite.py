students_number=[224,325,507]
students_notes=[70,80,90]

with open("test.txt","w") as data:
    for i in range(len(students_number)):
        data.write(f"Student number {students_number[i]}'s grade:{students_notes[i]}\n")
with open("test.txt","r") as data2:
    for line in data2.readlines():
        print(line)