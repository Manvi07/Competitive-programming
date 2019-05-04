from selenium import webdriver
from selenium.webdriver.common.keys import Keys

driver = webdriver.Firefox()
driver.get("https://stgw.iitmandi.ac.in/ug/login.php")
assert "IIT Mandi|Internet Access" in driver.title
elem1 = driver.find_element_by_name("username")
elem2 = driver.find_element_by_name("password")

elem1.clear()
elem2.clear()
elem1.send_keys("b17092")
elem1.send_keys(Keys.RETURN)
# elem2.send_keys(Keys.RETURN)
assert "No results found." not in driver.page_source
