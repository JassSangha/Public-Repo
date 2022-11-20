import pickle

# Addding New Clients


def NewClient():
    name = input("Enter name of the client:")
    address = input("Enter the address:")
    amount = input("Enter the amount:")
    return name, address, amount
# Adding Daily Transactions


def DailyEmi():
    clientname = input("Enter the name of the client:")
    return clientname


Clients = {
    "Client1": ["Jassa", "Ganna", 0],
    "Client2": ["Mussu", "Garha", 0],
    "Client3": ["Rana", "Phillaur", 0],
}

Clients = pickle.load(open("Clients.pdf", "rb"))
print(Clients)

i = 0
for j in Clients.keys():
    i += 1

print(i)
Choice = input("enter 'A' to add new Client or 'B' to add emi:")
if Choice.lower() == "a":
    Clients.__setitem__("Client"+str(i+1), NewClient())

elif Choice.lower() == "2":
    Recentemi = DailyEmi()
    for i in Clients.keys():
        if Recentemi == Clients[i][0]:
            print("Found")
            emi = int(input("Enter the amount:"))
            Clients[i][2] += emi
        else:
            pass
else:
    pass

Clients = pickle.dump(Clients, open("Clients.pdf", "wb"))

# Printing the clients
id = [1350]
j = 0
for i in Clients.keys():
    print(id[j], ": Name =", Clients[i][0], "\tAddress =",
          Clients[i][1], "\tAmount =", Clients[i][2])
    id.append(id[-1] + 1)
    j += 1
