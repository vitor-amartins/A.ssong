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

def noteToIndex(note):
  if note == "NO":
    return "0"
  elif note == "B0":
    return "1"
  elif note == "C1":
    return "2"
  elif note == "CS1":
    return "3"
  elif note == "D1":
    return "4"
  elif note == "DS1":
    return "5"
  elif note == "E1":
    return "6"
  elif note == "F1":
    return "7"
  elif note == "FS1":
    return "8"
  elif note == "G1":
    return "9"
  elif note == "GS1":
    return "10"
  elif note == "A1":
    return "11"
  elif note == "AS1":
    return "12"
  elif note == "B1":
    return "13"
  elif note == "C2":
    return "14"
  elif note == "CS2":
    return "15"
  elif note == "D2":
    return "16"
  elif note == "DS2":
    return "17"
  elif note == "E2":
    return "18"
  elif note == "F2":
    return "19"
  elif note == "FS2":
    return "20"
  elif note == "G2":
    return "21"
  elif note == "GS2":
    return "22"
  elif note == "A2":
    return "23"
  elif note == "AS2":
    return "24"
  elif note == "B2":
    return "25"
  elif note == "C3":
    return "26"
  elif note == "CS3":
    return "27"
  elif note == "D3":
    return "28"
  elif note == "DS3":
    return "29"
  elif note == "E3":
    return "30"
  elif note == "F3":
    return "31"
  elif note == "FS3":
    return "32"
  elif note == "G3":
    return "33"
  elif note == "GS3":
    return "34"
  elif note == "A3":
    return "35"
  elif note == "AS3":
    return "36"
  elif note == "B3":
    return "37"
  elif note == "C4":
    return "38"
  elif note == "CS4":
    return "39"
  elif note == "D4":
    return "40"
  elif note == "DS4":
    return "41"
  elif note == "E4":
    return "42"
  elif note == "F4":
    return "43"
  elif note == "FS4":
    return "44"
  elif note == "G4":
    return "45"
  elif note == "GS4":
    return "46"
  elif note == "A4":
    return "47"
  elif note == "AS4":
    return "48"
  elif note == "B4":
    return "49"
  elif note == "C5":
    return "50"
  elif note == "CS5":
    return "51"
  elif note == "D5":
    return "52"
  elif note == "DS5":
    return "53"
  elif note == "E5":
    return "54"
  elif note == "F5":
    return "55"
  elif note == "FS5":
    return "56"
  elif note == "G5":
    return "57"
  elif note == "GS5":
    return "58"
  elif note == "A5":
    return "59"
  elif note == "AS5":
    return "60"
  elif note == "B5":
    return "61"
  elif note == "C6":
    return "62"
  elif note == "CS6":
    return "63"
  elif note == "D6":
    return "64"
  elif note == "DS6":
    return "65"
  elif note == "E6":
    return "66"
  elif note == "F6":
    return "67"
  elif note == "FS6":
    return "68"
  elif note == "G6":
    return "69"
  elif note == "GS6":
    return "70"
  elif note == "A6":
    return "71"
  elif note == "AS6":
    return "72"
  elif note == "B6":
    return "73"
  elif note == "C7":
    return "74"
  elif note == "CS7":
    return "75"
  elif note == "D7":
    return "76"
  elif note == "DS7":
    return "77"
  elif note == "E7":
    return "78"
  elif note == "F7":
    return "79"
  elif note == "FS7":
    return "80"
  elif note == "G7":
    return "81"
  elif note == "GS7":
    return "82"
  elif note == "A7":
    return "83"
  elif note == "AS7":
    return "84"
  elif note == "B7":
    return "85"
  elif note == "C8":
    return "86"
  elif note == "CS8":
    return "87"
  elif note == "D8":
    return "88"
  elif note == "DS8":
    return "89"

fIn = open("input.txt", "r")
fOut = open("output.h", "w")

allFreq = []
allDurations = []
n = 0

for line in fIn:
  if len(line) > 2 and line[0] != '#':
    n += 1
    line = line.upper()
    note = line.split(' ')

    allFreq.append(noteToIndex(note[0]))

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

fOut.write("#define SIXTEENTH " + str(sixteenth) + "\n")

fOut.write("#define NumNotas " + str(n) + "\n\n")

fOut.write("char tune[] = {\n")
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


