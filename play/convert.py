def writeLetter(letter):
  if letter == "W":
    return "WHOLE"
  elif letter == "H":
    return "HALF"
  elif letter == "Q":
    return "QUARTER"
  elif letter == "E":
    return "EIGHTH"
  elif letter == "S":
    return "SIXTEENTH"
  elif letter == "T":
    return "SIXTEENTH/2"

def writeHalfOfLetter(letter):
  if letter == "W":
    return "HALF"
  elif letter == "H":
    return "QUARTER"
  elif letter == "Q":
    return "EIGHTH"
  elif letter == "E":
    return "SIXTEENTH"

fIn = open("input.txt", "r")
fOut = open("output.h", "w")

allFreq = []
allDurations = []
n = 0

for line in fIn:
  if len(line) > 2:
    n += 1
    line = line.upper()
    note = line.split(' ')

    if note[0] == "NO":
      allFreq.append(note[0]+"_NOTE")
    else:
      allFreq.append("NOTE_"+note[0])

    note[1] = note[1].rstrip()

    if len(note[1]) == 1:
      allDurations.append(writeLetter(note[1]))
    elif len(note[1]) == 2:
      if (note[1][1] == '.'):
        allDurations.append(writeLetter(note[1][0]) + "+" + writeHalfOfLetter(note[1][0]))
      elif (note[1][1] == '3'):
        allDurations.append(writeLetter(note[1][0]) + "/3")
      elif (note[1][1] == '2'):
        allDurations.append(writeLetter("2*" + note[1][0]) + "/3")
    elif len(note[1]) == 3:
      if (note[1][1] == '+'):
        allDurations.append(writeLetter(note[1][0]) + "+" + writeLetter(note[1][2]))

comp = input("Enter the tempo of the song: ")
sixteenth = 15000/int(comp)

fOut.write('#include "notes.h"\n\n')

fOut.write("#define SIXTEENTH " + str(sixteenth) + "\n")

fOut.write("#define NumNotas " + str(n) + "\n\n")

fOut.write("short int tune[] = {\n")
fst = True

for i in allFreq:
  if fst:
    fst = False
    fOut.write(i)
  else:
    fOut.write(", " + i)

fOut.write("\n};\n\nshort int duration[] = {\n")
fst = True

for i in allDurations:
  if fst:
    fst = False
    fOut.write(i)
  else:
    fOut.write(", " + i)

fOut.write("\n};\n")


