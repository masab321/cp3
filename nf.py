import sys
import datetime

ct = datetime.datetime.now()
arguments = list(sys.argv)
filename = f"{str(arguments[1])}.cpp"
f=open(filename, "w")
t=str(ct.strftime("%Y:%m:%d   %H:%M:%S"))           

ad="/**\n  *  author: masab \n  *  created: "+t+"\n**/  \n\n"

cpp="#include<bits/stdc++.h>\nusing namespace std;\n\nint main(){\n    \n\n    return 0;\n} "
f.write(ad)
f.write(cpp)
f.close()

