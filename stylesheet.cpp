body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    text-align: center;
}

header {
    background: rgba(0, 0, 0, 0.7);
    color: white;
    padding: 10px;
    position: fixed;
    width: 100%;
    top: 0;
    left: 0;
}

nav a {
    color: white;
    text-decoration: none;
    margin: 0 15px;
}

.hero {
    position: relative;
    height: 500px;
    background: url('fiume.jpg') no-repeat center center/cover;
    display: flex;
    align-items: center;
    justify-content: center;
    color: white;
    font-size: 24px;
}

.mappa {
    margin: 20px auto;
    width: 80%;
    height: 300px;
    background: lightblue;
    position: relative;
}

.punto {
    width: 20px;
    height: 20px;
    border-radius: 50%;
    position: absolute;
    cursor: pointer;
}

.verde { background: green; }
.giallo { background: yellow; }
.rosso { background: red; }

.descrizione {
    margin: 40px auto;
    width: 80%;
    display: flex;
    align-items: center;
    justify-content: space-between;
}

.descrizione video {
    width: 45%;
}

.foto {
    margin: 20px auto;
    width: 80%;
    display: flex;
    justify-content: space-around;
}

.foto img {
    width: 30%;
    border-radius: 10px;
}
