import requests

#url = "http://localhost:9999/"
#payload = {"firsrName": "James","lastName": "Ngo1"}
data ={'NCSD' : '9999'}
url = "https://ncd123-fd00c.firebaseio.com/METHOD_POST.json/"

r= requests.get(url,params=data)

print(r.text)
