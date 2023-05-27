import requests
import json
#url = 'https://ncd123-fd00c.firebaseio.com/METHOD_POST.json'
url = 'https://soa-rainbroadcasting-default-rtdb.firebaseio.com/RainStation.json'
data1 ='{' +"rainfall" + ':' + '9988' +'}'

r= requests.put(url,data=json.dumps(data1))
print(r.status_code)
print(r.content)