from flask import Flask, render_template
app = Flask(__name__)

# @app.route("/a")
# def index():
#     return "We are using Flask."

@app.route("/")
def template():
    return render_template('home.html')

if __name__ == "__main__":
    app.run(debug = True) # for avoiding restart of server each time on editing.
