num = int(input("enter the num: "))

allTables = []
for i in range(1, num + 1):
    tables = []
    for j in range(1, i + 1):
        tables.append(i * j)
    allTables.append(tables)

print(allTables)

