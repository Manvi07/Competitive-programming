from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from bs4 import BeautifulSoup
import re
import matplotlib.pyplot as plt
import numpy as np

browser = webdriver.Chrome("/home/manvi/chromedriver")
prefix = "http://www.codechef.com/users/"
names = {"mandeepkaur990", "khubi_kumar", "tushika_25", "sanvi_2512", "va_44", "glimmer", "adee7982", "kratika29", "yamini_sharma", "tharsis24", "sinhaakanksha", "bintip", "shwetashinde", "srishti09"}
urls = []

for name in names:
    urls.append(prefix+name)

submissions = []
names = []

for baseURL in urls:
    browser.get(baseURL)
    soup=BeautifulSoup(browser.page_source, features="lxml")
    recent_activity=soup.find('section', attrs={'class':'rating-data-section problems-solved'})

    L = []
    for i, para in enumerate(recent_activity.find_all('h5')):
        L.append( int(re.findall('\((.*?)\)', para.text)[0]))

    submissions.append((L[0], L[1]))
    names.append(baseURL.split('/')[-1])
for i in range(len(urls)):
    print(names[i], submissions[i])
# submissions = np.asarray(submissions)
y_pos = np.arange(len(urls))
y1 = [i[0] for i in submissions]
y2 = [i[1] for i in submissions]
plt.barh(y_pos, y1, align='center', alpha=0.5)
plt.barh(y_pos, y2, align='center', alpha=0.5)
plt.yticks(y_pos, names)
plt.ylabel("Username")
plt.xlabel("No. of questions")
plt.legend({"Accepted", "Failed"})
plt.grid()
plt.show()
