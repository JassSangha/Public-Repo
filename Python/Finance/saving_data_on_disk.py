import pickle
import os

os.system("clear")

names = ["Jassa", "Rana", "Mussu"]
pickle.dump(names, open("names.pdf", "wb"))

print(names)

names = []
print(names)

names = pickle.load(open("names.pdf", "rb"))

print(names)
