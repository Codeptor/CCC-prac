text="Good Morning"

if text.endswith("ing") and text.startswith("go"):
    text="Good Afternoon"
elif not(text.endswith("ing")):
    text="Good Evening"
elif not(text.startswith("go")):
    text="Good Night"
else:
    text="Good Day"
print(text)