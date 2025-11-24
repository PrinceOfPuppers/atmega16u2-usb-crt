Import("env")

if env.IsCleanTarget():
    env.Execute("rm -rf fonts/processed")
    print("Fonts Cleaned")

