from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from bs4 import BeautifulSoup
import time
import numpy as np

browser = webdriver.Chrome("/home/manvi/chromedriver")
prefix = "http://www.codechef.com/users/"
names = {"mandeepkaur990", "khubi_kumar", "tushika_25", "sanvi_2512", "va_44", "glimmer", "adee7982", "kratika29", "yamini_sharma", "tharsis24", "sinhaakanksha"}
urls = []

for name in names:
    urls.append(prefix+name)

for baseURL in urls:
    browser.get(baseURL)
    # time.sleep(5)
    soup=BeautifulSoup(browser.page_source, features="lxml")
    recent_activity=soup.find('section', attrs={'class':'rating-data-section problems-solved'})

    solved = np.zeros(2)

    for i, para in enumerate(recent_activity.find_all('p')):
        for text in (para.find_all('a')):
            solved[i]+=1

    print(baseURL.split('/')[-1], solved)




# print(recent_activity)
# L=str(soup)
# f_out=open("/home/manvi/data_up.txt","w")
# f_out.write(L)
# f_out.close()
