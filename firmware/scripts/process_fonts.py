Import("env")

# Skip when cleaning
if env.IsCleanTarget():
    Return()   # stops script execution

# Normal behavior
import subprocess
subprocess.check_call(["python3", "fonts/process-font.py"])
print("Fonts Generated")
