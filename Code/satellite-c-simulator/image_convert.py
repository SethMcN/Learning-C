import time

with open("imagefile.txt", "r") as f:
    for line in f:
        escaped = line.rstrip()
        escaped = escaped.replace("\\", "\\\\")   # escape backslashes
        escaped = escaped.replace("\"", "\\\"")   # escape quotes
        
        print(f"\"{escaped}\\n\",")
        time.sleep(0.05)