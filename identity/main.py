import uvicorn

if __name__ == "__main__":
    uvicorn.run("app.app:app", host="192.168.0.137", log_level="info")
