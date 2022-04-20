import uvicorn
import json

from dotenv import load_dotenv

load_dotenv()

# Todo: This code works, but we should really merge .env and config.json
with open("../crashblox/config.json") as f:
    data = json.load(f)


if __name__ == "__main__":
    uvicorn.run("app.app:app", host=data["hostAddress"], log_level="info")
